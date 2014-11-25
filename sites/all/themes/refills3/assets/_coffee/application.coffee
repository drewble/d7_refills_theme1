# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    #
    # Sliding Menu
    $(".js-menu-trigger").on "click touchstart", (e) ->
      $("header nav").toggleClass "is-visible"
      $(".js-menu-screen").toggleClass "is-visible"
      e.preventDefault()

    $(".js-menu-screen").on "click touchstart", (e) ->
      $("header nav").toggleClass "is-visible"
      $(".js-menu-screen").toggleClass "is-visible"
      e.preventDefault()


    #
    # Fade-In
    element = $(".fade-in-element")
    $(element).addClass "js-fade-element-hide"
    $(window).scroll ->
      elementTopToPageTop = $(element).offset().top
      windowTopToPageTop = $(window).scrollTop()
      windowInnerHeight = window.innerHeight
      elementTopToWindowTop = elementTopToPageTop - windowTopToPageTop
      elementTopToWindowBottom = windowInnerHeight - elementTopToWindowTop
      distanceFromBottomToAppear = 300
      if elementTopToWindowBottom > distanceFromBottomToAppear
        $(element).addClass "js-fade-element-show"
      else if elementTopToWindowBottom < 0
        $(element).removeClass "js-fade-element-show"
        $(element).addClass "js-fade-element-hide"

    #
    ## Switch Themes
    $('#switchtheme-switch-form').prependTo("body").hover (->
      $(this).addClass "show"
    ), ->
      $(this).removeClass "show"

    $('#edit-theme').change ->
      $('#switchtheme-switch-form').submit()

) jQuery
