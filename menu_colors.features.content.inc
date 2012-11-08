<?php

/**
 * Implementation of hook_content_default_fields().
 */
function menu_colors_content_default_fields() {
  $fields = array();

  // Exported field: field_hide_banner_title
  $fields['fixed_width_landing_page-field_hide_banner_title'] = array(
    'field_name' => 'field_hide_banner_title',
    'type_name' => 'fixed_width_landing_page',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'hide|Hide Banner Title
display|Display Banner Title',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'hide',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Show Banner Text',
      'weight' => 0,
      'description' => 'Check this checkbox to display the text inside the banner.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_hide_content_title
  $fields['fixed_width_landing_page-field_hide_content_title'] = array(
    'field_name' => 'field_hide_content_title',
    'type_name' => 'fixed_width_landing_page',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'display|Display Content Title
hide|Hide Content Title',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hide Content Title',
      'weight' => '1',
      'description' => 'Check this checkbox to hide the title displayed in the content section.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_html_block_1
  $fields['fixed_width_landing_page-field_html_block_1'] = array(
    'field_name' => 'field_html_block_1',
    'type_name' => 'fixed_width_landing_page',
    'display_settings' => array(
      'weight' => '39',
      'parent' => 'group_landing_sidebar',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '3',
          '_error_element' => 'default_value_widget][field_html_block_1][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'HTML Block',
      'weight' => '39',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_html_block_2
  $fields['fixed_width_landing_page-field_html_block_2'] = array(
    'field_name' => 'field_html_block_2',
    'type_name' => 'fixed_width_landing_page',
    'display_settings' => array(
      'weight' => '40',
      'parent' => 'group_landing_sidebar',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '3',
          '_error_element' => 'default_value_widget][field_html_block_2][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'HTML Block',
      'weight' => '40',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_landing_img
  $fields['fixed_width_landing_page-field_landing_img'] = array(
    'field_name' => 'field_landing_img',
    'type_name' => 'fixed_width_landing_page',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'file-attach',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'imce' => 'imce',
        'attach' => 0,
        'remote' => 0,
        'reference' => 0,
      ),
      'filefield_source_attach_path' => 'file-attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'copy',
      'filefield_source_imce_mode' => '1',
      'filefield_source_autocomplete' => '0',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_landing_img_1000' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_secondary_sidebar_200' => 0,
        'imagecache_slideshow_700' => 0,
        'imagecache_slideshow_thumb' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Banner image',
      'weight' => '2',
      'description' => 'Images must be at least 1000 x 330 px.  Larger images will be automatically cropped to fit.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_landing_left_content
  $fields['fixed_width_landing_page-field_landing_left_content'] = array(
    'field_name' => 'field_landing_left_content',
    'type_name' => 'fixed_width_landing_page',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '15',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_landing_left_content][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Content',
      'weight' => '7',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_landing_teaser
  $fields['fixed_width_landing_page-field_landing_teaser'] = array(
    'field_name' => 'field_landing_teaser',
    'type_name' => 'fixed_width_landing_page',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_landing_teaser][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Teaser',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_navbar_color
  $fields['fixed_width_landing_page-field_navbar_color'] = array(
    'field_name' => 'field_navbar_color',
    'type_name' => 'fixed_width_landing_page',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'blackwhite|Black and White
goldwhite|Gold and White
goldgrey|Gold and Grey',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Nav Bar Color',
      'weight' => '4',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_navbar_menu
  $fields['fixed_width_landing_page-field_navbar_menu'] = array(
    'field_name' => 'field_navbar_menu',
    'type_name' => 'fixed_width_landing_page',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'blockreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'blockreference',
    'active' => '1',
    'referenceable_regions' => array(
      '' => 0,
      'left' => 0,
      'right' => 0,
      'navbar' => 0,
      'content_top' => 0,
      'content_bottom' => 0,
      'content_bottom_fixed' => 0,
      'header' => 0,
      'footer' => 0,
      'closure_region' => 0,
    ),
    'referenceable_modules' => array(
      'menu' => 'menu',
      'asu_ldap_roles' => 0,
      'block' => 0,
      'cas' => 0,
      'diff' => 0,
      'menu_block' => 0,
      'node' => 0,
      'poll' => 0,
      'profile' => 0,
      'revisioning' => 0,
      'system' => 0,
      'user' => 0,
      'views' => 0,
      'webform' => 0,
    ),
    'referenceable_operator' => 'OR',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'bid' => '0',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Navbar Menu',
      'weight' => '3',
      'description' => '',
      'type' => 'blockreference_select_sort',
      'module' => 'blockreference',
    ),
  );

  // Exported field: field_hide_banner_title
  $fields['fixed_width_secondary_page-field_hide_banner_title'] = array(
    'field_name' => 'field_hide_banner_title',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'hide|Hide Banner Title
display|Display Banner Title',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'hide',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Show Banner Title',
      'weight' => 0,
      'description' => 'Check this checkbox to display the title inside the banner.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_hide_content_title
  $fields['fixed_width_secondary_page-field_hide_content_title'] = array(
    'field_name' => 'field_hide_content_title',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'display|Display Content Title
hide|Hide Content Title',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'display',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hide Content Title',
      'weight' => '1',
      'description' => 'Check this checkbox to hide the title displayed in the content section.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_html_block_1
  $fields['fixed_width_secondary_page-field_html_block_1'] = array(
    'field_name' => 'field_html_block_1',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '33',
      'parent' => 'group_secondary_sidebar',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_html_block_1][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'HTML Block',
      'weight' => '33',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_html_block_2
  $fields['fixed_width_secondary_page-field_html_block_2'] = array(
    'field_name' => 'field_html_block_2',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '36',
      'parent' => 'group_secondary_sidebar',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_html_block_2][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'HTML Block',
      'weight' => '36',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_landing_img
  $fields['fixed_width_secondary_page-field_landing_img'] = array(
    'field_name' => 'field_landing_img',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'file-attach',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'imce' => 0,
        'attach' => 0,
        'remote' => 0,
        'reference' => 0,
      ),
      'filefield_source_attach_path' => 'file-attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'copy',
      'filefield_source_imce_mode' => '1',
      'filefield_source_autocomplete' => '0',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'icon_link' => 0,
        'image' => 0,
        'landing_img_1000__colorbox' => 0,
        'slideshow_700__colorbox' => 0,
        'slideshow_thumb__colorbox' => 0,
        'imagecache_landing_img_1000' => 0,
        'imagecache_slideshow_700' => 0,
        'imagecache_slideshow_thumb' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'insert_absolute' => 0,
      'label' => 'Banner image',
      'weight' => '2',
      'description' => 'Banner image auto-hides if empty. Leave empty for "tertiary" pages. Add image for "secondary" pages.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_landing_teaser
  $fields['fixed_width_secondary_page-field_landing_teaser'] = array(
    'field_name' => 'field_landing_teaser',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_landing_teaser][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Teaser',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_navbar_color
  $fields['fixed_width_secondary_page-field_navbar_color'] = array(
    'field_name' => 'field_navbar_color',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'blackwhite|Black and White
goldwhite|Gold and White
goldgrey|Gold and Grey',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Nav Bar Color',
      'weight' => '5',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_navbar_menu
  $fields['fixed_width_secondary_page-field_navbar_menu'] = array(
    'field_name' => 'field_navbar_menu',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'blockreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'blockreference',
    'active' => '1',
    'referenceable_regions' => array(
      '' => 0,
      'left' => 0,
      'right' => 0,
      'navbar' => 0,
      'content_top' => 0,
      'content_bottom' => 0,
      'content_bottom_fixed' => 0,
      'header' => 0,
      'footer' => 0,
      'closure_region' => 0,
    ),
    'referenceable_modules' => array(
      'menu' => 'menu',
      'asu_ldap_roles' => 0,
      'block' => 0,
      'cas' => 0,
      'diff' => 0,
      'menu_block' => 0,
      'node' => 0,
      'poll' => 0,
      'profile' => 0,
      'revisioning' => 0,
      'system' => 0,
      'user' => 0,
      'views' => 0,
      'webform' => 0,
    ),
    'referenceable_operator' => 'OR',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'bid' => '0',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Navbar Menu',
      'weight' => '4',
      'description' => '',
      'type' => 'blockreference_select_sort',
      'module' => 'blockreference',
    ),
  );

  // Exported field: field_secondary_main_content
  $fields['fixed_width_secondary_page-field_secondary_main_content'] = array(
    'field_name' => 'field_secondary_main_content',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_secondary_main_content][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Main Content',
      'weight' => '8',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_sidebar_color
  $fields['fixed_width_secondary_page-field_sidebar_color'] = array(
    'field_name' => 'field_sidebar_color',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '35',
      'parent' => 'group_secondary_sidebar',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'blackwhite|Black and White
whitegrey|White and Grey
goldwhite|Gold and White
greywhite|Grey and White',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Menu Color',
      'weight' => '35',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_sidebar_menu
  $fields['fixed_width_secondary_page-field_sidebar_menu'] = array(
    'field_name' => 'field_sidebar_menu',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '34',
      'parent' => 'group_secondary_sidebar',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'blockreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'blockreference',
    'active' => '1',
    'referenceable_regions' => array(
      '' => 0,
      'left' => 0,
      'right' => 0,
      'navbar' => 0,
      'content_top' => 0,
      'content_bottom' => 0,
      'content_bottom_fixed' => 0,
      'header' => 0,
      'footer' => 0,
      'closure_region' => 0,
    ),
    'referenceable_modules' => array(
      'menu_block' => 'menu_block',
      'asu_ldap_roles' => 0,
      'block' => 0,
      'cas' => 0,
      'diff' => 0,
      'menu' => 0,
      'node' => 0,
      'poll' => 0,
      'profile' => 0,
      'revisioning' => 0,
      'system' => 0,
      'user' => 0,
      'views' => 0,
      'webform' => 0,
    ),
    'referenceable_operator' => 'OR',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'bid' => '0',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Menu',
      'weight' => '34',
      'description' => 'Use Menu Block built from SAME menu that is used for Navbar Menu. When creating the Menu Block set Starting Level to 2nd level (secondary).
You may need to clear caches before new Menu Block appears in select list.',
      'type' => 'blockreference_select_sort',
      'module' => 'blockreference',
    ),
  );

  // Exported field: field_sidebar_right_block_1
  $fields['fixed_width_secondary_page-field_sidebar_right_block_1'] = array(
    'field_name' => 'field_sidebar_right_block_1',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_sidebar_right',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_sidebar_right_block_1][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'HTML Block',
      'weight' => '16',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_sidebar_right_block_2
  $fields['fixed_width_secondary_page-field_sidebar_right_block_2'] = array(
    'field_name' => 'field_sidebar_right_block_2',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '18',
      'parent' => 'group_sidebar_right',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_sidebar_right_block_2][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'HTML Block',
      'weight' => '19',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_sidebar_right_menu
  $fields['fixed_width_secondary_page-field_sidebar_right_menu'] = array(
    'field_name' => 'field_sidebar_right_menu',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'weight' => '17',
      'parent' => 'group_sidebar_right',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'blockreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'blockreference',
    'active' => '1',
    'referenceable_regions' => array(
      '' => 0,
      'left' => 0,
      'right' => 0,
      'navbar' => 0,
      'content_top' => 0,
      'content_bottom' => 0,
      'content_bottom_fixed' => 0,
      'header' => 0,
      'footer' => 0,
      'closure_region' => 0,
    ),
    'referenceable_modules' => array(
      'menu_block' => 'menu_block',
      'asu_ldap_roles' => 0,
      'block' => 0,
      'cas' => 0,
      'diff' => 0,
      'menu' => 0,
      'node' => 0,
      'poll' => 0,
      'profile' => 0,
      'revisioning' => 0,
      'system' => 0,
      'user' => 0,
      'views' => 0,
      'webform' => 0,
    ),
    'referenceable_operator' => 'AND',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'bid' => '0',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Menu',
      'weight' => '17',
      'description' => 'Use Menu Block built from SAME menu that is used for Navbar Menu. When creating the Menu Block set Starting Level to 2nd level (secondary).
You may need to clear caches before new Menu Block appears in select list.',
      'type' => 'blockreference_select_sort',
      'module' => 'blockreference',
    ),
  );

  // Exported field: field_sidebar_right_menu_color
  $fields['fixed_width_secondary_page-field_sidebar_right_menu_color'] = array(
    'field_name' => 'field_sidebar_right_menu_color',
    'type_name' => 'fixed_width_secondary_page',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'blackwhite|Black and White
whitegrey|White and Grey
goldwhite|Gold and White
greywhite|Grey and White',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Menu Color',
      'weight' => '18',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner image');
  t('Content');
  t('HTML Block');
  t('Hide Content Title');
  t('Main Content');
  t('Menu');
  t('Menu Color');
  t('Nav Bar Color');
  t('Navbar Menu');
  t('Show Banner Text');
  t('Show Banner Title');
  t('Teaser');

  return $fields;
}
