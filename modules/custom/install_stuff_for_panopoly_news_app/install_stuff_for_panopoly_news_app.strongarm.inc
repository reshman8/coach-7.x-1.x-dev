<?php
/**
 * @file
 * install_stuff_for_panopoly_news_app.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function install_stuff_for_panopoly_news_app_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_news_demo_taxonomy';
  $strongarm->value = TRUE;
  $export['panopoly_news_demo_taxonomy'] = $strongarm;

  return $export;
}
