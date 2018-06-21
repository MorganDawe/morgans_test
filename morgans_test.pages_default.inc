<?php
/**
 * @file
 * morgans_test.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function morgans_test_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__morgans_test';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 26;
  $handler->conf = array(
    'title' => 'morgans_test',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'morgans_test',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '40002',
            'begins_with' => '1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
          3 => 3,
          4 => 4,
          5 => 5,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'test_region',
          1 => 'region_right',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'page_views',
        ),
        'parent' => 'main',
        'class' => 'panel-no-bottom-padding',
        'hide_empty' => 1,
      ),
      'test_region' => array(
        'type' => 'region',
        'title' => 'Branding Icon',
        'width' => '24.961156443736193',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_right' => array(
        'type' => 'region',
        'title' => 'Branding Description',
        'width' => '75.03884355626381',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_region',
        ),
        'parent' => 'main',
        'class' => 'header-layout-content',
        'hide_empty' => 0,
      ),
      'header_region' => array(
        'type' => 'region',
        'title' => 'Header Region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'page_views' => array(
        'type' => 'region',
        'title' => 'Page Views',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'collection-context',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'contextual_content',
        ),
        'parent' => 'main',
        'class' => 'institute-collection-context',
        'hide_empty' => 0,
      ),
      'contextual_content' => array(
        'type' => 'region',
        'title' => 'Contextual Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'first_sidebar_left',
          1 => 'region_main_content',
        ),
        'parent' => 'main',
        'class' => 'main-page-column',
        'hide_empty' => 0,
      ),
      'region_main_content' => array(
        'type' => 'region',
        'title' => 'Region Main Content',
        'width' => '74.98196248196248',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'first_sidebar_left' => array(
        'type' => 'region',
        'title' => 'First Sidebar Left',
        'width' => '25.018037518037517',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 1,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'region_logo' => NULL,
      'test_region' => NULL,
      'region_right' => NULL,
      'header_region' => NULL,
      'page_views' => NULL,
      'contextual_content' => NULL,
      'region_left' => NULL,
      'region_main_content' => NULL,
      'first_sidebar_left' => NULL,
    ),
    'page_views' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__morgans_test';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $pane->panel = 'contextual_content';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-islandora_solr_display_manager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $pane = new stdClass();
  $pane->pid = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane->panel = 'contextual_content';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
  $pane->panel = 'contextual_content';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_markup';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
  $pane = new stdClass();
  $pane->pid = 'new-7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $pane->panel = 'first_sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-basic_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $display->content['new-7c827cc4-d308-4fd2-bf41-d7188dba6921'] = $pane;
  $display->panels['first_sidebar_left'][0] = 'new-7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $pane = new stdClass();
  $pane->pid = 'new-6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-current_collection_view_count';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-collection-view-count',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $display->content['new-6d982f04-b9ac-44b5-8f5a-955ad9adc082'] = $pane;
  $display->panels['page_views'][0] = 'new-6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $pane = new stdClass();
  $pane->pid = 'new-a4b4ab8e-5277-4597-959e-27768142352a';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'islandora_datastream_download-islandora_datastream_download_ds';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a4b4ab8e-5277-4597-959e-27768142352a';
  $display->content['new-a4b4ab8e-5277-4597-959e-27768142352a'] = $pane;
  $display->panels['page_views'][1] = 'new-a4b4ab8e-5277-4597-959e-27768142352a';
  $pane = new stdClass();
  $pane->pid = 'new-e2acd7e5-b5f2-4087-8900-5aa0aeaf50bd';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-chs-contextual-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-contextual-menu',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e2acd7e5-b5f2-4087-8900-5aa0aeaf50bd';
  $display->content['new-e2acd7e5-b5f2-4087-8900-5aa0aeaf50bd'] = $pane;
  $display->panels['page_views'][2] = 'new-e2acd7e5-b5f2-4087-8900-5aa0aeaf50bd';
  $pane = new stdClass();
  $pane->pid = 'new-7592906c-dd8b-4a29-841b-ee882c8131d8';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-chs-social-media-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-social-media-menu',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7592906c-dd8b-4a29-841b-ee882c8131d8';
  $display->content['new-7592906c-dd8b-4a29-841b-ee882c8131d8'] = $pane;
  $display->panels['page_views'][3] = 'new-7592906c-dd8b-4a29-841b-ee882c8131d8';
  $pane = new stdClass();
  $pane->pid = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane->panel = 'region_main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $display->content['new-4eb1f4a3-c106-49e3-8441-6871e934cdc9'] = $pane;
  $display->panels['region_main_content'][0] = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane = new stdClass();
  $pane->pid = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane->panel = 'region_right';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'none',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45588575-4602-4b39-a20e-37b7e9396324';
  $display->content['new-45588575-4602-4b39-a20e-37b7e9396324'] = $pane;
  $display->panels['region_right'][0] = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane = new stdClass();
  $pane->pid = 'new-de55e6e9-506c-431b-8672-46a7a04fc649';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-object_description-block_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'de55e6e9-506c-431b-8672-46a7a04fc649';
  $display->content['new-de55e6e9-506c-431b-8672-46a7a04fc649'] = $pane;
  $display->panels['region_right'][1] = 'new-de55e6e9-506c-431b-8672-46a7a04fc649';
  $pane = new stdClass();
  $pane->pid = 'new-c2990bdb-83c7-46d7-a884-2f2c82672ae3';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-761c3e690708edf1750acde484294c48';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c2990bdb-83c7-46d7-a884-2f2c82672ae3';
  $display->content['new-c2990bdb-83c7-46d7-a884-2f2c82672ae3'] = $pane;
  $display->panels['test_region'][0] = 'new-c2990bdb-83c7-46d7-a884-2f2c82672ae3';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__morgans_test'] = $handler;

  return $export;
}
