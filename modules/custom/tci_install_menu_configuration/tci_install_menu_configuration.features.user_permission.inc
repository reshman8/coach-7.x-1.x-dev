<?php
/**
 * @file
 * tci_install_menu_configuration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tci_install_menu_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer menu positions.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_position',
  );

  return $permissions;
}
