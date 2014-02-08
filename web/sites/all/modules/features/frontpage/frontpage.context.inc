<?php
/**
 * @file
 * frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'Frontpage context';
  $context->tag = 'frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-events-block' => array(
          'module' => 'views',
          'delta' => 'events-block',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage context');
  t('frontpage');
  $export['frontpage'] = $context;

  return $export;
}
