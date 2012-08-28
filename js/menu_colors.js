Drupal.behaviors.myModule = function(context) {


var x = distributeCategoryLinkness('.view-landing-page-menu-blockreference .item-list','.view-landing-page-menu-blockreference .item-list div.block-menu li a');

function distributeCategoryLinkness(container, line) 
{
  var links = line;
  var containerWidth = $(container).width();
  containerWidth = containerWidth - 23; 
  var listWidth = 0;
  var j = 0;
  $(links).each( function () {
    listWidth = listWidth + $(this).width();
    if(listWidth > 1000) 
    {   
      listWidth = listWidth-$(this).width();
      $(this).addClass("nextline");
    }   
    else 
    {   
      j++;
    }   
  } );
  var distance = containerWidth - listWidth;
  var i = 0;
  var k = $(links).length - j;
  var myvalue = [];
  var mlid = [];
  $(links).each( function () {
    if(j > 0)  
    {   
      var oneDistance = Math.floor( distance/(2*($(links).length - i - k)));
      
      distance = distance - 2*oneDistance;
      i++;
      j--;
      if(j == 0 && oneDistance > 0)
      {   
        oneDistance = oneDistance - 3;
      }   
      $(this).css("padding-left", oneDistance);
      $(this).css("padding-right", oneDistance);
      var classes = $(this).attr('class');
      classes = classes.split(" ");
      var l = 0;
      $(classes).each( function () {
        if (classes[l].indexOf("menu") != -1) {
          mlid[i-1] = classes[l];
        }   
        l++;
      } );
      if (isFinite(oneDistance)) { 
        myvalue[i] = oneDistance;
      }
      /*if(j > 1)
        $(this).css("padding-right", oneDistance);
      else
        $(this).css("padding-right", oneDistance-1);*/
    }   
  } );
  i--;
  $(links).each( function () {
    if(i > 0)
    {   
      if($(this).hasClass("nextline"))
      {   
        $(this).removeClass("nextline");
      }   
      i--;
    }   
  } );
  myvalue = $.merge(myvalue, mlid);
  //myvalue = myvalue.join('&');

  return myvalue;
/*  if($(container).height() <= 40)
  {
    */
  $(container).css("height", 40);
    /*  
  }
  else
  {
    $(container).css("height", $(container).height()+48);
  }*/
  if(k > 0)
  {
    distributeCategoryLinks(".view-landing-page-menu .item-list",".view-landing-page-menu .item-list li.nextline");
  }
}

/*
x = '/'+x;

$.get(Drupal.settings.basePath+'my_custom_callback'+x);
*/
}


