<?php
//kpr(get_defined_vars());
//kpr($theme_hook_suggestions);
//template naming
//page--[CONTENT TYPE].tpl.php
?>
<?php if( theme_get_setting('mothership_poorthemers_helper') ){ ?>
<!-- page.tpl.php-->
<?php } ?>

<?php print $mothership_poorthemers_helper; ?>

<header>
  <a href="/" class="mobile-logo">
    <img src="https://raw.githubusercontent.com/thoughtbot/refills/master/source/images/placeholder_logo_3_dark.png" alt="Logo image">
  </a>
  <button type="button" class="js-menu-trigger sliding-menu-button" data-menu="header nav">
    <img src="https://raw.githubusercontent.com/thoughtbot/refills/master/source/images/menu-white.png" alt="Menu Icon">
  </button>

  <button type="button" class="js-menu-trigger-2 sliding-menu-button switch" data-menu="block-menu-menu-switch-themes">
    <img src="/sites/all/themes/refills3/assets/images/pencil.png" alt="Menu Icon">
  </button>
  <?php print render($page['header']); ?>

  <div class="js-menu-screen menu-screen"></div>
  <div class="js-menu-screen-2 menu-screen"></div>
</header>

<?php if ($page['hero']): ?>
  <?php print render($page['hero']); ?>
<?php endif; ?>


<div class="page">

  <div role="main" id="main-content">
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h1><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php print $breadcrumb; ?>

    <?php if ($action_links): ?>
      <ul class="action-links"><?php print render($action_links); ?></ul>
    <?php endif; ?>

    <?php if (isset($tabs['#primary'][0]) || isset($tabs['#secondary'][0])): ?>
      <nav class="tabs"><?php print render($tabs); ?></nav>
    <?php endif; ?>

    <?php if($page['highlighted'] OR $messages){ ?>
      <div class="drupal-messages">
      <?php print render($page['highlighted']); ?>
      <?php print $messages; ?>
      </div>
    <?php } ?>


    <?php print render($page['content_pre']); ?>

    <?php print render($page['content']); ?>

    <?php print render($page['content_post']); ?>

  </div><!-- /main-->

  <?php if ($page['sidebar_first']): ?>
    <div class="sidebar-first">
    <?php print render($page['sidebar_first']); ?>
    </div>
  <?php endif; ?>

  <?php if ($page['sidebar_second']): ?>
    <div class="sidebar-second">
      <?php print render($page['sidebar_second']); ?>
    </div>
  <?php endif; ?>
</div><!-- /page-->

<footer class="footer">
  <div class="footer-logo">
    <img src="https://raw.githubusercontent.com/thoughtbot/refills/master/source/images/placeholder_logo_1.png" alt="Logo image">
  </div>
  <div class="footer-links">
    <?php print render($page['footer']); ?>
  </div>

  <hr>

  <p>Disclaimer area lorem ipsum dolor sit amet, consectetur adipisicing elit. Rerum, nostrum repudiandae saepe.</p>
</footer>

