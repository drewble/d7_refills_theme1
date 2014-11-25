(function() {
  (function($) {
    return $(function() {
      var element;
      $(".js-menu-trigger").on("click touchstart", function(e) {
        $("header nav").toggleClass("is-visible");
        $(".js-menu-screen").toggleClass("is-visible");
        return e.preventDefault();
      });
      $(".js-menu-screen").on("click touchstart", function(e) {
        $("header nav").toggleClass("is-visible");
        $(".js-menu-screen").toggleClass("is-visible");
        return e.preventDefault();
      });
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
