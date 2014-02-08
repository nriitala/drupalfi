<?php
/**
 * @file
 * liftup.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function liftup_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-liftup-field_liftup_body'
  $field_instances['node-liftup-field_liftup_body'] = array(
    'bundle' => 'liftup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_liftup_body',
    'label' => 'Liftup body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Liftup body');

  return $field_instances;
}
