<?php
/**
 * @file
 * recipehappy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function recipehappy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function recipehappy_node_info() {
  $items = array(
    'recipe_name' => array(
      'name' => t('Recipe Name'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Recipe Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
