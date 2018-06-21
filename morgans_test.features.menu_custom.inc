<?php
/**
 * @file
 * morgans_test.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function morgans_test_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ctda-contextual-menu.
  $menus['menu-ctda-contextual-menu'] = array(
    'menu_name' => 'menu-ctda-contextual-menu',
    'title' => 'CTDA Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-ctda-information.
  $menus['menu-ctda-information'] = array(
    'menu_name' => 'menu-ctda-information',
    'title' => 'CTDA Information',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CTDA Contextual Menu');
  t('CTDA Information');

  return $menus;
}
