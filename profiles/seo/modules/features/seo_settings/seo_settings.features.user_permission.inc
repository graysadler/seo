<?php
/**
 * @file
 * seo_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function seo_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(),
    'module' => 'comment',
  );

  return $permissions;
}
