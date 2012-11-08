<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function menu_colors_default_fe_block_settings() {
  $export = array();

  // asuzen
  $theme = array();

  $theme['views-4cf79e7c57a39b381e94985ec07c7d92'] = array(
    'module' => 'views',
    'delta' => '4cf79e7c57a39b381e94985ec07c7d92',
    'theme' => 'asuzen',
    'status' => '1',
    'weight' => '-39',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-5d9ea445b3cc9f3542a5ad6d2dfa5e29'] = array(
    'module' => 'views',
    'delta' => '5d9ea445b3cc9f3542a5ad6d2dfa5e29',
    'theme' => 'asuzen',
    'status' => '1',
    'weight' => '-37',
    'region' => 'content_top',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-632c02ef065305bc3a4fbc81affb43d9'] = array(
    'module' => 'views',
    'delta' => '632c02ef065305bc3a4fbc81affb43d9',
    'theme' => 'asuzen',
    'status' => '1',
    'weight' => '-39',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-landing_page_banner-block_1'] = array(
    'module' => 'views',
    'delta' => 'landing_page_banner-block_1',
    'theme' => 'asuzen',
    'status' => '1',
    'weight' => '-38',
    'region' => 'content_top',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type != \'fluid_width_tertiary_page\' &&  $node->type != \'fixed_width_tertiary_page\' && $node->type != \'fluid_width_quaternary_page\' && $node->type != \'fixed_width_quaternary_page\' && $node->type != \'sidebar_menu\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-landing_page_menu-block_1'] = array(
    'module' => 'views',
    'delta' => 'landing_page_menu-block_1',
    'theme' => 'asuzen',
    'status' => 0,
    'weight' => '-21',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
  if ($node->path == \'aamasu\') {
 return FALSE;
} 

if (($node->type == \'fixed_width_landing_page\' ||  $node->type == \'fluid_width_landing_page\'))
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_html_1-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_html_1-block_1',
    'theme' => 'asuzen',
    'status' => '1',
    'weight' => '-40',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_html_2-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_html_2-block_1',
    'theme' => 'asuzen',
    'status' => '1',
    'weight' => '-38',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_menu-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_menu-block_1',
    'theme' => 'asuzen',
    'status' => 0,
    'weight' => '-35',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_right_html_1-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_right_html_1-block_1',
    'theme' => 'asuzen',
    'status' => '1',
    'weight' => '-40',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_right_html_2-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_right_html_2-block_1',
    'theme' => 'asuzen',
    'status' => 0,
    'weight' => '-37',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $export['asuzen'] = $theme;

  // seven
  $theme = array();

  $theme['views-4cf79e7c57a39b381e94985ec07c7d92'] = array(
    'module' => 'views',
    'delta' => '4cf79e7c57a39b381e94985ec07c7d92',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-5d9ea445b3cc9f3542a5ad6d2dfa5e29'] = array(
    'module' => 'views',
    'delta' => '5d9ea445b3cc9f3542a5ad6d2dfa5e29',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-632c02ef065305bc3a4fbc81affb43d9'] = array(
    'module' => 'views',
    'delta' => '632c02ef065305bc3a4fbc81affb43d9',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-landing_page_banner-block_1'] = array(
    'module' => 'views',
    'delta' => 'landing_page_banner-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-landing_page_menu-block_1'] = array(
    'module' => 'views',
    'delta' => 'landing_page_menu-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
  if ($node->path == \'aamasu\') {
 return FALSE;
} 

if (($node->type == \'fixed_width_landing_page\' ||  $node->type == \'fluid_width_landing_page\'))
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_html_1-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_html_1-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_html_2-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_html_2-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_menu-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_menu-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_right_html_1-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_right_html_1-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_right_html_2-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_right_html_2-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $export['seven'] = $theme;

  // zen
  $theme = array();

  $theme['views-4cf79e7c57a39b381e94985ec07c7d92'] = array(
    'module' => 'views',
    'delta' => '4cf79e7c57a39b381e94985ec07c7d92',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-5d9ea445b3cc9f3542a5ad6d2dfa5e29'] = array(
    'module' => 'views',
    'delta' => '5d9ea445b3cc9f3542a5ad6d2dfa5e29',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-632c02ef065305bc3a4fbc81affb43d9'] = array(
    'module' => 'views',
    'delta' => '632c02ef065305bc3a4fbc81affb43d9',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-landing_page_banner-block_1'] = array(
    'module' => 'views',
    'delta' => 'landing_page_banner-block_1',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-landing_page_menu-block_1'] = array(
    'module' => 'views',
    'delta' => 'landing_page_menu-block_1',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
  if ($node->path == \'aamasu\') {
 return FALSE;
} 

if (($node->type == \'fixed_width_landing_page\' ||  $node->type == \'fluid_width_landing_page\'))
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_html_1-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_html_1-block_1',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_html_2-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_html_2-block_1',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_menu-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_menu-block_1',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_right_html_1-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_right_html_1-block_1',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_right_html_2-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_right_html_2-block_1',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $export['zen'] = $theme;

  // garland
  $theme = array();

  $theme['views-4cf79e7c57a39b381e94985ec07c7d92'] = array(
    'module' => 'views',
    'delta' => '4cf79e7c57a39b381e94985ec07c7d92',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-5d9ea445b3cc9f3542a5ad6d2dfa5e29'] = array(
    'module' => 'views',
    'delta' => '5d9ea445b3cc9f3542a5ad6d2dfa5e29',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-632c02ef065305bc3a4fbc81affb43d9'] = array(
    'module' => 'views',
    'delta' => '632c02ef065305bc3a4fbc81affb43d9',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-landing_page_banner-block_1'] = array(
    'module' => 'views',
    'delta' => 'landing_page_banner-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-landing_page_menu-block_1'] = array(
    'module' => 'views',
    'delta' => 'landing_page_menu-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
  if ($node->path == \'aamasu\') {
 return FALSE;
} 

if (($node->type == \'fixed_width_landing_page\' ||  $node->type == \'fluid_width_landing_page\'))
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_html_1-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_html_1-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_html_2-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_html_2-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_menu-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_menu-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_right_html_1-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_right_html_1-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-sidebar_right_html_2-block_1'] = array(
    'module' => 'views',
    'delta' => 'sidebar_right_html_2-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '<?php
if ((arg(0) == \'node\') && is_numeric(arg(1)) && (! arg(2))) {
  $node = node_load(arg(1));
if ($node->type == \'fixed_width_landing_page\' || $node->type == \'fixed_width_secondary_page\' ||  $node->type == \'fluid_width_secondary_page\' || $node->type == \'fixed_width_tertiary_page\' ||  $node->type == \'fluid_width_tertiary_page\')
return TRUE;
}
?>',
    'title' => '',
    'cache' => '-1',
  );

  $export['garland'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
