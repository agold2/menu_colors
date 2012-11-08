<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function menu_colors_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function menu_colors_imagecache_default_presets() {
  $items = array(
    'landing_img_1000' => array(
      'presetname' => 'landing_img_1000',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '1000',
            'height' => '',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '1000',
            'height' => '330',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
  );
  return $items;
}

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
      'name' => t('Fixed-Width Secondary Page'),
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
