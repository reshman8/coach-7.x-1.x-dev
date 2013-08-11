<?php
/**
 * @file
 * tci_install_menu_configuration.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function tci_install_menu_configuration_defaultconfig_features() {
  return array(
    'tci_install_menu_configuration' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function tci_install_menu_configuration_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dhtml_menu_settings';
  $strongarm->value = array(
    'nav' => 'open',
    'animation' => array(
      'effects' => array(
        'height' => 'height',
        'opacity' => 'opacity',
      ),
      'speed' => 500,
    ),
    'effects' => array(
      'siblings' => 'close-same-tree',
      'children' => 'none',
      'remember' => 0,
    ),
    'filter' => array(
      'type' => 'blacklist',
      'list' => array(),
    ),
  );
  $export['dhtml_menu_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_panopoly_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_panopoly_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_depth_7';
  $strongarm->value = '-1';
  $export['nice_menus_depth_7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_menu_7';
  $strongarm->value = 'menu-tci-menu-life-coaching:0';
  $export['nice_menus_menu_7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_name_7';
  $strongarm->value = 'TCI Menu Life Coaching Blog';
  $export['nice_menus_name_7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_respect_expand_7';
  $strongarm->value = '0';
  $export['nice_menus_respect_expand_7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_type_7';
  $strongarm->value = 'down';
  $export['nice_menus_type_7'] = $strongarm;

  return $export;
}
