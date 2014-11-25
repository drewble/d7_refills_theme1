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
