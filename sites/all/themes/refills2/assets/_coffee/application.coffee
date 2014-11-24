# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    #
    # Navigation
    menu = $("header nav")
    menuToggle = $(".centered-navigation-menu-button")
    $(menuToggle).on "click", (e) ->
      e.preventDefault()
      menu.slideToggle ->
        menu.removeAttr "style"  if menu.is(":hidden")


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

) jQuery
