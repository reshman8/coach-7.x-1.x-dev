<?php
/**
 * @file
 * install_stuff_for_panopoly_news_app.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function install_stuff_for_panopoly_news_app_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
