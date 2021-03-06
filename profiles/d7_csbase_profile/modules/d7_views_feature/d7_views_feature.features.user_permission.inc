<?php
/**
 * @file
 * d7_views_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function d7_views_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'views',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'views',
  );

  return $permissions;
}
