<?php
/**
 * @file
 * seo_settings.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function seo_settings_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'admin',
  'mail' => 'graysadler@gmail.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'full_html',
  'created' => 1432071283,
  'access' => 1432086668,
  'login' => 1432086754,
  'status' => 1,
  'timezone' => 'America/New_York',
  'language' => '',
  'picture' => NULL,
  'init' => 'admin@example.com',
  'data' => FALSE,
  'uuid' => '321abe66-9b21-4e7e-b6f1-7c73dc591c24',
  'roles' => array(
    2 => 'authenticated user',
  ),
  'metatags' => array(),
  'date' => '2015-05-19 17:34:43 -0400',
);
  return $users;
}
