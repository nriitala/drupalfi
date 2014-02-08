<?php
/**
 * @file
 * news.features.inc
 */

/**
 * Implements hook_node_info().
 */
function news_node_info() {
  $items = array(
    'uutiset' => array(
      'name' => t('Uutiset'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
