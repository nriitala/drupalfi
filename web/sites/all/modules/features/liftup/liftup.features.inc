<?php
/**
 * @file
 * liftup.features.inc
 */

/**
 * Implements hook_node_info().
 */
function liftup_node_info() {
  $items = array(
    'liftup' => array(
      'name' => t('Liftup'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
