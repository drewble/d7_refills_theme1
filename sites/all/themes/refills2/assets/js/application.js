(function() {
  (function($) {
    return $(function() {
      var element, menu, menuToggle;
      menu = $("header nav");
      menuToggle = $(".centered-navigation-menu-button");
      $(menuToggle).on("click", function(e) {
        e.preventDefault();
        return menu.slideToggle(function() {
          if (menu.is(":hidden")) {
            return menu.removeAttr("style");
          }
        });
      });
      element = $(".fade-in-element");
      $(element).addClass("js-fade-element-hide");
      return $(window).scroll(function() {
        var distanceFromBottomToAppear, elementTopToPageTop, elementTopToWindowBottom, elementTopToWindowTop, windowInnerHeight, windowTopToPageTop;
        elementTopToPageTop = $(element).offset().top;
        windowTopToPageTop = $(window).scrollTop();
        windowInnerHeight = window.innerHeight;
        elementTopToWindowTop = elementTopToPageTop - windowTopToPageTop;
        elementTopToWindowBottom = windowInnerHeight - elementTopToWindowTop;
        distanceFromBottomToAppear = 300;
        if (elementTopToWindowBottom > distanceFromBottomToAppear) {
          return $(element).addClass("js-fade-element-show");
        } else if (elementTopToWindowBottom < 0) {
          $(element).removeClass("js-fade-element-show");
          return $(element).addClass("js-fade-element-hide");
        }
      });
    });
  })(jQuery);

}).call(this);
