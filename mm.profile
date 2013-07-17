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
  $tasks = array();

  // Add the Panopoly App Server to the Installation Process
  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');
  $tasks = $tasks + apps_profile_install_tasks($install_state, array('machine name' => 'panopoly', 'default apps' => array('panopoly_demo')));

  return $tasks;
}