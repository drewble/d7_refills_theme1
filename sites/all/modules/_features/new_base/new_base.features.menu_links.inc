<?php
/**
 * @file
 * new_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function new_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-switch-themes_refills-1:<front>
  $menu_links['menu-switch-themes_refills-1:<front>'] = array(
    'menu_name' => 'menu-switch-themes',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Refills 1',
    'options' => array(
      'query' => array(
        'display' => 'refills1',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-switch-themes_refills-1:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-switch-themes_refills-2:<front>
  $menu_links['menu-switch-themes_refills-2:<front>'] = array(
    'menu_name' => 'menu-switch-themes',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Refills 2',
    'options' => array(
      'query' => array(
        'display' => 'refills2',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-switch-themes_refills-2:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-switch-themes_refills-3:<front>
  $menu_links['menu-switch-themes_refills-3:<front>'] = array(
    'menu_name' => 'menu-switch-themes',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Refills 3',
    'options' => array(
      'query' => array(
        'display' => 'refills3',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-switch-themes_refills-3:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-switch-themes_refills-4:<front>
  $menu_links['menu-switch-themes_refills-4:<front>'] = array(
    'menu_name' => 'menu-switch-themes',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Refills 4',
    'options' => array(
      'query' => array(
        'display' => 'refills4',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-switch-themes_refills-4:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Refills 1');
  t('Refills 2');
  t('Refills 3');
  t('Refills 4');


  return $menu_links;
}
