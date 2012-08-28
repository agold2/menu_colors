<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function menu_colors_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_secondary_sidebar
  $groups['fixed_width_secondary_page-group_secondary_sidebar'] = array(
    'group_type' => 'standard',
    'type_name' => 'fixed_width_secondary_page',
    'group_name' => 'group_secondary_sidebar',
    'label' => 'Sidebar',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '6',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_html_block_1',
      '1' => 'field_sidebar_menu',
      '2' => 'field_sidebar_color',
      '3' => 'field_html_block_2',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Sidebar');

  return $groups;
}
