Drupal.behaviors.myModule = function(context) {

var links = $(".view-landing-page-menu-blockreference .item-list div.block-menu ul > li").not('.view-landing-page-menu-blockreference .item-list div.block-menu ul li ul li');
distributeCategoryLinks('.view-landing-page-menu-blockreference .item-list',links);

  function distributeCategoryLinks(container, links) {
    var containerWidth = $(container).width() - 60;
    var listWidth = 0;
    $(links).each( function () {
      listWidth = listWidth + $(this).width(); 
    } );
    var distance = containerWidth - listWidth;
    console.log('distance = ' + distance); 
    i = 1;
    $(links).each( function () {
      var oneDistance = Math.floor( distance/($(links).length - i) );
      $(this).css("padding-left", oneDistance / 2 );
      $(this).css("padding-right", oneDistance / 2 );
      distance = distance - oneDistance;
      i++;
    });
  }
}

