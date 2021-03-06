<?php
/**
 * @file
 * rbv_networkadmin.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function rbv_networkadmin_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_network_admin';
  $page->task = 'page';
  $page->admin_title = 'rbv network admin';
  $page->admin_description = 'Network administration tools';
  $page->path = 'networkadmin';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_network_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_network_admin';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'networkadmin',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'networkadmin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'network admin',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pond';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Strumenti per l\'amministratore di rete';
  $display->uuid = 'c1369b36-1f83-49b1-8f27-1570d2c67631';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fdfa02e8-83d6-42f7-80ca-d0e9522fa049';
    $pane->panel = 'column1';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:13';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fdfa02e8-83d6-42f7-80ca-d0e9522fa049';
    $display->content['new-fdfa02e8-83d6-42f7-80ca-d0e9522fa049'] = $pane;
    $display->panels['column1'][0] = 'new-fdfa02e8-83d6-42f7-80ca-d0e9522fa049';
    $pane = new stdClass();
    $pane->pid = 'new-07363ecc-7d7b-4a48-9185-0a669abe3fb4';
    $pane->panel = 'column1';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:21';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '07363ecc-7d7b-4a48-9185-0a669abe3fb4';
    $display->content['new-07363ecc-7d7b-4a48-9185-0a669abe3fb4'] = $pane;
    $display->panels['column1'][1] = 'new-07363ecc-7d7b-4a48-9185-0a669abe3fb4';
    $pane = new stdClass();
    $pane->pid = 'new-9415840c-2228-45c0-9c36-cc5c6fb223ca';
    $pane->panel = 'column2';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9415840c-2228-45c0-9c36-cc5c6fb223ca';
    $display->content['new-9415840c-2228-45c0-9c36-cc5c6fb223ca'] = $pane;
    $display->panels['column2'][0] = 'new-9415840c-2228-45c0-9c36-cc5c6fb223ca';
    $pane = new stdClass();
    $pane->pid = 'new-ededd95a-eb22-4ee9-afc0-1c104ed3fb8f';
    $pane->panel = 'column2';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ededd95a-eb22-4ee9-afc0-1c104ed3fb8f';
    $display->content['new-ededd95a-eb22-4ee9-afc0-1c104ed3fb8f'] = $pane;
    $display->panels['column2'][1] = 'new-ededd95a-eb22-4ee9-afc0-1c104ed3fb8f';
    $pane = new stdClass();
    $pane->pid = 'new-09a9076b-62b7-4395-aea9-c99326b2cc00';
    $pane->panel = 'column3';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:18';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '09a9076b-62b7-4395-aea9-c99326b2cc00';
    $display->content['new-09a9076b-62b7-4395-aea9-c99326b2cc00'] = $pane;
    $display->panels['column3'][0] = 'new-09a9076b-62b7-4395-aea9-c99326b2cc00';
    $pane = new stdClass();
    $pane->pid = 'new-0b870323-b0d5-431b-b469-52927c9138f8';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_netadmview_joined-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0b870323-b0d5-431b-b469-52927c9138f8';
    $display->content['new-0b870323-b0d5-431b-b469-52927c9138f8'] = $pane;
    $display->panels['footer'][0] = 'new-0b870323-b0d5-431b-b469-52927c9138f8';
    $pane = new stdClass();
    $pane->pid = 'new-4865779f-b118-4aa4-a60c-d54ffb758da4';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_netadmview_organon-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4865779f-b118-4aa4-a60c-d54ffb758da4';
    $display->content['new-4865779f-b118-4aa4-a60c-d54ffb758da4'] = $pane;
    $display->panels['footer'][1] = 'new-4865779f-b118-4aa4-a60c-d54ffb758da4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0b870323-b0d5-431b-b469-52927c9138f8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_network_admin'] = $page;

  return $pages;

}
