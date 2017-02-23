<?php
/**
 * @file
 * out.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function out_of_stock_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'commerce_product-cards-field_out_of_stock'.
  $field_instances['commerce_product-cards-field_out_of_stock'] = array(
    'bundle' => 'cards',
    'commerce_cart_settings' => array(
      'attribute_field' => 0,
      'attribute_widget' => 'select',
      'attribute_widget_title' => 'Out of stock',
    ),
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'line_item' => array(
        'label' => 'above',
        'module' => 'i18n_field',
        'settings' => array(),
        'type' => 'i18n_list_default',
        'weight' => 4,
      ),
      'node_full' => array(
        'label' => 'hidden',
        'module' => 'i18n_field',
        'settings' => array(),
        'type' => 'i18n_list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_out_of_stock',
    'label' => 'Out of stock',
    'required' => 0,
    'settings' => array(
      'commerce_user_profile_pane' => 0,
      'commerce_user_profile_pane_required' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Out of stock');

  return $field_instances;
}
