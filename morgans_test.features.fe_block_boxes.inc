<?php
/**
 * @file
 * morgans_test.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function morgans_test_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CTDA Information';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'ctda_info';
  $fe_block_boxes->body = 'CTDA Information';

  $export['ctda_info'] = $fe_block_boxes;

  return $export;
}
