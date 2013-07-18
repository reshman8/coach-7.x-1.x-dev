<?php
/**
* @file
* Installation profile for mm  
*/

/**
 * Implements hook_install_tasks().


??????????????????????? 

WINS ???
mm_install_tasks



or 



install_stuff_install_tasks


???????????????????????


 */



function mm_install_tasks($install_state) {
  // $tasks = array();

  // // Add the Panopoly App Server to the Installation Process
  // require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');
  // $tasks = $tasks + apps_profile_install_tasks($install_state, array('machine name' => 'panopoly', 'default apps' => array('panopoly_demo')));

  // return $tasks;
}

/**
 * Implements hook_form_install_configure_form_alter().
 */
function mm_form_alter(&$form, &$form_state, $form_id) {
  drupal_set_message($form_id);  // print form ID to messages
  drupal_set_message(print_r($form, TRUE));  // print array to messages
  $form['site_information']['site_name']['#default_value'] = "The Coaching Institute";
  //$form['install_configure_form']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['site_information']['site_mail']['#default_value'] = "web@thecoachinginstitute.com.";
}