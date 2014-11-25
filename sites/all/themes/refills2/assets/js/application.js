(function() {
  (function($) {
    return $(function() {
      var element, menu, menuToggle;
      $(".js-menu-trigger-2").on("click touchstart", function(e) {
        $("body > nav").toggleClass("is-visible");
        $(".js-menu-screen-2").toggleClass("is-visible");
        return e.preventDefault();
      });
      $(".js-menu-screen-2").on("click touchstart", function(e) {
        $("body > nav").toggleClass("is-visible");
        $(".js-menu-screen-2").toggleClass("is-visible");
        return e.preventDefault();
      });
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
      $(window).scroll(function() {
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
      $('#switchtheme-switch-form').prependTo("body").hover((function() {
        return $(this).addClass("show");
      }), function() {
        return $(this).removeClass("show");
      });
      return $('#edit-theme').change(function() {
        return $('#switchtheme-switch-form').submit();
      });
    });
  })(jQuery);

}).call(this);
