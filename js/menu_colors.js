Drupal.behaviors.myModule = function(context) {

  if($.browser.msie && parseInt($.browser.version, 10) <= 7) {
    return;
  }
  var links = $(".view-landing-page-menu-blockreference .item-list div.block-menu ul li a").not('.view-landing-page-menu-blockreference .item-list div.block-menu ul li ul li a');



 $("#block-views-5d9ea445b3cc9f3542a5ad6d2dfa5e29 .item-list ul li").css("margin", 0);
 $("#block-views-5d9ea445b3cc9f3542a5ad6d2dfa5e29 .item-list ul li").css("padding", 0);


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
      $(this).css("padding", 0);
      /*$(this).css("line-height", "21px");*/
    } );
  $("#content").css("clear", "both");
  }
}


