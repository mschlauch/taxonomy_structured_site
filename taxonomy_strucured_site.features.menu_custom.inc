<?php
/**
 * @file
 * taxonomy_strucured_site.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function taxonomy_strucured_site_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-t-main-menu.
  $menus['menu-t-main-menu'] = array(
    'menu_name' => 'menu-t-main-menu',
    'title' => 'T Main Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('T Main Menu');


  return $menus;
}
