<?php
/**
 * @file
 * tci_install_menu_configuration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tci_install_menu_configuration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel.
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Development',
    'description' => 'Development link',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-contact-us.
  $menus['menu-contact-us'] = array(
    'menu_name' => 'menu-contact-us',
    'title' => 'Contact Us',
    'description' => '',
  );
  // Exported menu: menu-tci-menu-coaching-resources.
  $menus['menu-tci-menu-coaching-resources'] = array(
    'menu_name' => 'menu-tci-menu-coaching-resources',
    'title' => 'TCI Menu Coaching Resources',
    'description' => '',
  );
  // Exported menu: menu-tci-menu-current-students.
  $menus['menu-tci-menu-current-students'] = array(
    'menu_name' => 'menu-tci-menu-current-students',
    'title' => 'TCI Menu Current Students',
    'description' => '',
  );
  // Exported menu: menu-tci-menu-get-to-know-us.
  $menus['menu-tci-menu-get-to-know-us'] = array(
    'menu_name' => 'menu-tci-menu-get-to-know-us',
    'title' => 'TCI Menu Get To Know Us',
    'description' => '',
  );
  // Exported menu: menu-tci-menu-life-coaching.
  $menus['menu-tci-menu-life-coaching'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'title' => 'TCI Menu Life Coaching',
    'description' => '',
  );
  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top Menu',
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us');
  t('Development');
  t('Development link');
  t('Main menu');
  t('Management');
  t('TCI Menu Coaching Resources');
  t('TCI Menu Current Students');
  t('TCI Menu Get To Know Us');
  t('TCI Menu Life Coaching');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('Top Menu');
  t('User menu');


  return $menus;
}
