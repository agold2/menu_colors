<?php

/**
 * Implementation of hook_strongarm().
 */
function menu_colors_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fixed_width_landing_page';
  $strongarm->value = array(
    'title' => '-2',
    'revision_information' => '6',
    'author' => '7',
    'options' => '8',
    'menu' => '5',
    'path' => '9',
  );
  $export['content_extra_weights_fixed_width_landing_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fixed_width_secondary_page';
  $strongarm->value = array(
    'title' => '-2',
    'revision_information' => '8',
    'author' => '7',
    'options' => '9',
    'menu' => '6',
    'taxonomy' => '3',
    'path' => '10',
  );
  $export['content_extra_weights_fixed_width_secondary_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fixed_width_tertiary_page';
  $strongarm->value = array(
    'title' => '31',
    'revision_information' => '40',
    'author' => '41',
    'options' => '42',
    'menu' => '39',
    'taxonomy' => '33',
    'path' => '43',
    'attachments' => '30',
  );
  $export['content_extra_weights_fixed_width_tertiary_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fixed_width_landing_page';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'revision_moderation',
  );
  $export['node_options_fixed_width_landing_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fixed_width_secondary_page';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'revision_moderation',
  );
  $export['node_options_fixed_width_secondary_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fixed_width_tertiary_page';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'revision_moderation',
  );
  $export['node_options_fixed_width_tertiary_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fixed_width_landing_page';
  $strongarm->value = '1';
  $export['upload_fixed_width_landing_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fixed_width_secondary_page';
  $strongarm->value = '1';
  $export['upload_fixed_width_secondary_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fixed_width_tertiary_page';
  $strongarm->value = '1';
  $export['upload_fixed_width_tertiary_page'] = $strongarm;

  return $export;
}
