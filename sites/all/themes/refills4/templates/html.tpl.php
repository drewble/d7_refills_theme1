<!doctype html>

<!--[if IE 7]>    <html class="no-js ie7 oldie" lang="<?php print $language->language; ?>" <?php print $rdf_namespaces; ?> <?php print $html_attributes; ?>> <![endif]-->
<!--[if IE 8]>    <html class="no-js ie8 oldie" lang="<?php print $language->language; ?>" <?php print $rdf_namespaces; ?> <?php print $html_attributes; ?>> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js" lang="<?php print $language->language; ?>" <?php print $rdf_namespaces; ?> <?php print $html_attributes; ?>> <!--<![endif]-->
<?php print $mothership_poorthemers_helper; ?>
<head>
<title><?php print $head_title; ?></title>
<?php print $head; ?>

<?php if(theme_get_setting('mothership_mobile')){  ?>
<meta name="MobileOptimized" content="width">
<meta name="HandheldFriendly" content="true"><?php } ?>
<?php if(theme_get_setting('mothership_viewport')){  ?><meta name="viewport" content="width=device-width, initial-scale=1"><?php } ?>
<?php if(theme_get_setting('mothership_viewport_maximumscale')){  ?><meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1.0"><?php } ?>
<meta http-equiv="cleartype" content="on">
<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
<?php print $styles; ?>
<?php if(theme_get_setting('mothership_respondjs')) { ?>
<!--[if lt IE 9]>
  <script src="<?php print $mothership_path; ?>/js/respond.min.js"></script>
<![endif]-->
<?php } ?>
<!--[if lt IE 9]>
  <script src="<?php print $mothership_path; ?>/js/html5.js"></script>
<![endif]-->
<?php print $selectivizr; ?>
<?php
  if(!theme_get_setting('mothership_script_place_footer')) {
    print $scripts;
  }
?>

<script src="https://maps.googleapis.com/maps/api/js"></script>
<script>
  function initialize() {
    var myLatlng = new google.maps.LatLng(36.178067, -86.788513);
    var mapCenter = new google.maps.LatLng(36.178067, -86.788513);
    var mapCanvas = document.getElementById('map_canvas');
    var mapOptions = {
      center: mapCenter,
      zoom: 13,
      scrollwheel: false,
      draggable: true,
      disableDefaultUI: true,
      mapTypeId: google.maps.MapTypeId.ROADMAP
    }

    var map = new google.maps.Map(mapCanvas, mapOptions)

    map.set('styles', [
     {
         featureType: 'landscape',
         elementType: 'geometry',
         stylers: [
           { hue: '#ffff00' },
           { saturation: 30 },
           { lightness: 10}
         ]
       },
    ]);

    var contentString =
      '<div id="content">'+
      '<div id="siteNotice">'+
      '</div>'+
      '<h1 id="firstHeading" class="firstHeading">Centresource</h1>'+
      '<div id="bodyContent">'+
      '<p>1317 4th Ave North</p>'+
      '<p>Nashville, TN 37208</p>'+
      '</div>'+
      '</div>';

    var infowindow = new google.maps.InfoWindow({
        content: contentString,
        maxWidth: 300
    });

    var marker = new google.maps.Marker({
        position: myLatlng,
        map: map,
        title: 'Centresource (Nashville)'
    });
    google.maps.event.addListener(marker, 'click', function() {
      infowindow.open(map,marker);
    });
  }

  google.maps.event.addDomListener(window, 'load', initialize);
</script>
</head>
<body class="<?php print $classes; ?> type-system-geometric" <?php print $attributes;?>>
<a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
<?php print $page_top; //stuff from modules always render first ?>
<?php print $page; // uses the page.tpl ?>
<?php
  if(theme_get_setting('mothership_script_place_footer')) {
    print $scripts;
  }
?>
<?php print $page_bottom; //stuff from modules always render last ?>
</body>
</html>

