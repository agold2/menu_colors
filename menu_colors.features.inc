<?php

/**
 * Implementation of hook_node_info().
 */
function menu_colors_node_info() {
  $items = array(
    'fixed_width_landing_page' => array(
      'name' => t('Fixed-Width Landing Page'),
      'module' => 'features',
      'description' => t('Landing Page with fixed margins. No background image.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'fixed_width_secondary_page' => array(
      'name' => t('Fixed Width Secondary Page'),
      'module' => 'features',
      'description' => t('Secondary page with fixed width layout.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function menu_colors_views_api() {
  return array(
    'api' => '2',
  );
}
