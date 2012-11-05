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
      '0' => 'field_hide_sidebar_left',
      '1' => 'field_html_block_1',
      '2' => 'field_sidebar_menu',
      '3' => 'field_sidebar_color',
      '4' => 'field_html_block_2',
    ),
  );

  // Exported group: group_tertiary_main_content
  $groups['fixed_width_tertiary_page-group_tertiary_main_content'] = array(
    'group_type' => 'standard',
    'type_name' => 'fixed_width_tertiary_page',
    'group_name' => 'group_tertiary_main_content',
    'label' => 'Main Content',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '38',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'simple',
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
    'weight' => '38',
    'fields' => array(
      '0' => 'field_tertiary_main_content',
    ),
  );

  // Exported group: group_tertiary_sidebar
  $groups['fixed_width_tertiary_page-group_tertiary_sidebar'] = array(
    'group_type' => 'standard',
    'type_name' => 'fixed_width_tertiary_page',
    'group_name' => 'group_tertiary_sidebar',
    'label' => 'Sidebar',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '37',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'simple',
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
    'weight' => '37',
    'fields' => array(
      '0' => 'field_hide_sidebar_left',
      '1' => 'field_html_block_1',
      '2' => 'field_sidebar_menu',
      '3' => 'field_sidebar_color',
      '4' => 'field_html_block_2',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Main Content');
  t('Sidebar');

  return $groups;
}
