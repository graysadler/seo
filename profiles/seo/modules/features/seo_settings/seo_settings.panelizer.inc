<?php
/**
 * @file
 * seo_settings.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function seo_settings_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'content_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '63e59988-395b-4cc4-88f5-6485e97a9d93';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-24718038-7dee-480e-9504-d2edc13b3910';
  $pane->panel = 'content_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '24718038-7dee-480e-9504-d2edc13b3910';
  $display->content['new-24718038-7dee-480e-9504-d2edc13b3910'] = $pane;
  $display->panels['content_main'][0] = 'new-24718038-7dee-480e-9504-d2edc13b3910';
  $pane = new stdClass();
  $pane->pid = 'new-ee250acc-3c20-4d74-9af3-fb31044127ac';
  $pane->panel = 'content_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_category';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ee250acc-3c20-4d74-9af3-fb31044127ac';
  $display->content['new-ee250acc-3c20-4d74-9af3-fb31044127ac'] = $pane;
  $display->panels['content_main'][1] = 'new-ee250acc-3c20-4d74-9af3-fb31044127ac';
  $pane = new stdClass();
  $pane->pid = 'new-8aa06ade-3dea-4a86-8910-b9b4f9245a0b';
  $pane->panel = 'content_main';
  $pane->type = 'node_comment_wrapper';
  $pane->subtype = 'node_comment_wrapper';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8aa06ade-3dea-4a86-8910-b9b4f9245a0b';
  $display->content['new-8aa06ade-3dea-4a86-8910-b9b4f9245a0b'] = $pane;
  $display->panels['content_main'][2] = 'new-8aa06ade-3dea-4a86-8910-b9b4f9245a0b';
  $pane = new stdClass();
  $pane->pid = 'new-d56bc725-2cae-460f-a992-36232e741079';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'webform-client-block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd56bc725-2cae-460f-a992-36232e741079';
  $display->content['new-d56bc725-2cae-460f-a992-36232e741079'] = $pane;
  $display->panels['sidebar'][0] = 'new-d56bc725-2cae-460f-a992-36232e741079';
  $pane = new stdClass();
  $pane->pid = 'new-e70eba59-8644-46b6-b9bd-e8a0209c78e3';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views-popular_articles-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'e70eba59-8644-46b6-b9bd-e8a0209c78e3';
  $display->content['new-e70eba59-8644-46b6-b9bd-e8a0209c78e3'] = $pane;
  $display->panels['sidebar'][1] = 'new-e70eba59-8644-46b6-b9bd-e8a0209c78e3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-24718038-7dee-480e-9504-d2edc13b3910';
  $panelizer->display = $display;
  $export['node:blog:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog_post:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog_post';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'content_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f9f779b4-a408-4b88-bd82-db0e84bc4f79';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-eb0a5e1f-4294-4faa-b052-75c187378403';
  $pane->panel = 'content_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'eb0a5e1f-4294-4faa-b052-75c187378403';
  $display->content['new-eb0a5e1f-4294-4faa-b052-75c187378403'] = $pane;
  $display->panels['content_main'][0] = 'new-eb0a5e1f-4294-4faa-b052-75c187378403';
  $pane = new stdClass();
  $pane->pid = 'new-25311f79-f9bf-409d-a08b-72bb56bfff7e';
  $pane->panel = 'content_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_energy';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'radioactivity_combo_formatter',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'energy' => 10,
      'type' => 'none',
      'accuracy' => '100',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '25311f79-f9bf-409d-a08b-72bb56bfff7e';
  $display->content['new-25311f79-f9bf-409d-a08b-72bb56bfff7e'] = $pane;
  $display->panels['content_main'][1] = 'new-25311f79-f9bf-409d-a08b-72bb56bfff7e';
  $pane = new stdClass();
  $pane->pid = 'new-d3999903-2871-468a-85b7-743de135971d';
  $pane->panel = 'content_main';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd3999903-2871-468a-85b7-743de135971d';
  $display->content['new-d3999903-2871-468a-85b7-743de135971d'] = $pane;
  $display->panels['content_main'][2] = 'new-d3999903-2871-468a-85b7-743de135971d';
  $pane = new stdClass();
  $pane->pid = 'new-9d594a30-e16b-4b47-a822-1014c41cfc21';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views-popular_articles-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '9d594a30-e16b-4b47-a822-1014c41cfc21';
  $display->content['new-9d594a30-e16b-4b47-a822-1014c41cfc21'] = $pane;
  $display->panels['sidebar'][0] = 'new-9d594a30-e16b-4b47-a822-1014c41cfc21';
  $pane = new stdClass();
  $pane->pid = 'new-b61f5704-790b-4616-8cee-d630584ee21c';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'webform-client-block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'b61f5704-790b-4616-8cee-d630584ee21c';
  $display->content['new-b61f5704-790b-4616-8cee-d630584ee21c'] = $pane;
  $display->panels['sidebar'][1] = 'new-b61f5704-790b-4616-8cee-d630584ee21c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-eb0a5e1f-4294-4faa-b052-75c187378403';
  $panelizer->display = $display;
  $export['node:blog_post:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'content_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '08480577-cb91-4a10-9ed4-9ae6fec79a79';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-84b3da76-52c2-40aa-9ed5-72f4eb21ac79';
  $pane->panel = 'content_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '84b3da76-52c2-40aa-9ed5-72f4eb21ac79';
  $display->content['new-84b3da76-52c2-40aa-9ed5-72f4eb21ac79'] = $pane;
  $display->panels['content_main'][0] = 'new-84b3da76-52c2-40aa-9ed5-72f4eb21ac79';
  $pane = new stdClass();
  $pane->pid = 'new-e0660175-3ff3-43e1-b3a3-992ee0425843';
  $pane->panel = 'content_main';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e0660175-3ff3-43e1-b3a3-992ee0425843';
  $display->content['new-e0660175-3ff3-43e1-b3a3-992ee0425843'] = $pane;
  $display->panels['content_main'][1] = 'new-e0660175-3ff3-43e1-b3a3-992ee0425843';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:webform:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'webform';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'content_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4c6d34e5-8023-437b-a09b-5b92026a1dd0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5012a432-6791-493f-a317-b0abee03ac77';
  $pane->panel = 'content_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5012a432-6791-493f-a317-b0abee03ac77';
  $display->content['new-5012a432-6791-493f-a317-b0abee03ac77'] = $pane;
  $display->panels['content_main'][0] = 'new-5012a432-6791-493f-a317-b0abee03ac77';
  $pane = new stdClass();
  $pane->pid = 'new-2502cacd-fd5b-4266-a2c6-07efc7b13fa4';
  $pane->panel = 'content_main';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2502cacd-fd5b-4266-a2c6-07efc7b13fa4';
  $display->content['new-2502cacd-fd5b-4266-a2c6-07efc7b13fa4'] = $pane;
  $display->panels['content_main'][1] = 'new-2502cacd-fd5b-4266-a2c6-07efc7b13fa4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5012a432-6791-493f-a317-b0abee03ac77';
  $panelizer->display = $display;
  $export['node:webform:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:category:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'category';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'content_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a60d957-b110-4cc8-8325-6df9ab9f3dfe';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:category:default'] = $panelizer;

  return $export;
}
