<?php
/**
 * @file
 * out.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function out_of_stock_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_out_of_stock'.
  $field_bases['field_out_of_stock'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_out_of_stock',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => 'Out of stock',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
