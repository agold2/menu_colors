Drupal.behaviors.myModule = function(context) {
  var links = $(".view-landing-page-menu-blockreference .item-list div.block-menu ul li a").not('.view-landing-page-menu-blockreference .item-list div.block-menu ul li ul li a');

  distributeCategoryLinks('.view-landing-page-menu-blockreference .item-list', links);

  function distributeCategoryLinks(container, links) {
    var containerWidth = $(container).width();
    containerWidth = containerWidth - 23;
    var linkWidths = 0,
      linkWidth = new Array(),
       j = 0;
    $(links).each( function () {
      linkWidth[j] = $(this).width();
      linkWidths = linkWidths + linkWidth[j];
      if(linkWidths > 1000) {
        linkWidths = linkWidths - $(this).width();
        $(this).addClass("nextline");
      }
      else {
        j++;
      }
    } );
    $(links).each ( function () {
      linkPercent = ($(this).width() / linkWidths) * 100;
      $(this).css("display", "block");
      $(this).css("text-align", "center");
      $(this).css("float", "left");
      $(this).css("width", linkPercent + '%');
    } );
  $("#content").css("clear", "both");
  }
}


