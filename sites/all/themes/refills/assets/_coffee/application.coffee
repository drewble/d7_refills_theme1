# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    #
    # Switching Menu
    $(".js-menu-trigger-2").on "click touchstart", (e) ->
      $("body > nav").toggleClass "is-visible"
      $(".js-menu-screen-2").toggleClass "is-visible"
      e.preventDefault()

    $(".js-menu-screen-2").on "click touchstart", (e) ->
      $("body > nav").toggleClass "is-visible"
      $(".js-menu-screen-2").toggleClass "is-visible"
      e.preventDefault()

    #
    # Navigation
    menu = $("header nav > ul")
    menuToggle = $("#js-mobile-menu")
    signUp = $(".sign-up")
    $(menuToggle).on "click", (e) ->
      e.preventDefault()
      menu.slideToggle ->
        menu.removeAttr "style"  if menu.is(":hidden")

    # underline under the active nav item
    $("nav li").click ->
      $("nav li").each ->
        $(this).removeClass "active"

      $(this).addClass "active"
      $("nav .expanded").removeClass "active"

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
