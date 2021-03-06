<?php
/**
 * @file
 * frontpage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function frontpage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'frontpage_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Liftup teaser text */
  $handler->display->display_options['fields']['field_liftup_teaser_text']['id'] = 'field_liftup_teaser_text';
  $handler->display->display_options['fields']['field_liftup_teaser_text']['table'] = 'field_data_field_liftup_teaser_text';
  $handler->display->display_options['fields']['field_liftup_teaser_text']['field'] = 'field_liftup_teaser_text';
  $handler->display->display_options['fields']['field_liftup_teaser_text']['label'] = '';
  $handler->display->display_options['fields']['field_liftup_teaser_text']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_liftup_teaser_text']['element_class'] = 'title';
  $handler->display->display_options['fields']['field_liftup_teaser_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_liftup_teaser_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_liftup_teaser_text']['element_default_classes'] = FALSE;
  /* Field: Content: Liftup body */
  $handler->display->display_options['fields']['field_liftup_body']['id'] = 'field_liftup_body';
  $handler->display->display_options['fields']['field_liftup_body']['table'] = 'field_data_field_liftup_body';
  $handler->display->display_options['fields']['field_liftup_body']['field'] = 'field_liftup_body';
  $handler->display->display_options['fields']['field_liftup_body']['label'] = '';
  $handler->display->display_options['fields']['field_liftup_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_liftup_body']['element_class'] = 'body';
  $handler->display->display_options['fields']['field_liftup_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_liftup_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_liftup_body']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Liftup weight (field_liftup_weight) */
  $handler->display->display_options['sorts']['field_liftup_weight_value']['id'] = 'field_liftup_weight_value';
  $handler->display->display_options['sorts']['field_liftup_weight_value']['table'] = 'field_data_field_liftup_weight';
  $handler->display->display_options['sorts']['field_liftup_weight_value']['field'] = 'field_liftup_weight_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '0';
  /* Filter criterion: Content: Published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'frontpage';
  $export['frontpage_view'] = $view;

  return $export;
}
