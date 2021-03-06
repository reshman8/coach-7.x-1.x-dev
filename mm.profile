<?php
/**
* @file
* Installation profile for mm  
*/


/**
 * Implements hook_install_tasks().
 */


// function mm_install_tasks($install_state) {
//   $tasks = array();

// // Add the Panopoly App Server to the Installation Process
//  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');
//  $tasks = $tasks + apps_profile_install_tasks($install_state, array('machine name' => 'panopoly', 'default apps' => array('panopoly_demo')));

//  return $tasks;
// }


/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */


function mm_form_install_configure_form_alter(&$form, &$form_state, $form_id) {
  // Hide some messages from various modules that are just too chatty.
  drupal_get_messages('status');
  drupal_get_messages('warning');
  //drupal_set_message($form_id);  // print form ID to messages
  //drupal_set_message(print_r($form, TRUE));  // print array to messages
  $form['site_information']['site_name']['#default_value'] = "The Coaching Institute";
  //$form['install_configure_form']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  // Define a default email address if we can guess a valid one
  if (valid_email_address('noreply@' . $_SERVER['HTTP_HOST'])) {
    $form['site_information']['site_mail']['#default_value'] = 'noreply@' . $_SERVER['HTTP_HOST'];
    $form['admin_account']['account']['mail']['#default_value'] = 'noreply@' . $_SERVER['HTTP_HOST'];
  } else {
    $form['site_information']['site_mail']['#default_value'] = "noreply@thecoachinginstitute.com.aau";
  }
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Los_Angeles';
}
