<?php
/**
 * @file
 * permissions.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function permissions_defaultconfig_features() {
  return array(
    'permissions' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function permissions_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access coffee.
  $permissions['access coffee'] = array(
    'name' => 'access coffee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'coffee',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer JW Player presets.
  $permissions['administer JW Player presets'] = array(
    'name' => 'administer JW Player presets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'jw_player',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer apps.
  $permissions['administer apps'] = array(
    'name' => 'administer apps',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'apps',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer breakpoints.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'breakpoints',
  );

  // Exported permission: administer coffee.
  $permissions['administer coffee'] = array(
    'name' => 'administer coffee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'coffee',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer conversion.
  $permissions['administer conversion'] = array(
    'name' => 'administer conversion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: administer default config.
  $permissions['administer default config'] = array(
    'name' => 'administer default config',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'defaultconfig',
  );

  // Exported permission: administer facets.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer feeds.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: administer fieldable panels panes.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer file types.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer flexslider.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: administer hierarchy.
  $permissions['administer hierarchy'] = array(
    'name' => 'administer hierarchy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer jquerymenu.
  $permissions['administer jquerymenu'] = array(
    'name' => 'administer jquerymenu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'jquerymenu',
  );

  // Exported permission: administer linkit.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: administer media browser.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer page titles.
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_title',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panelizer.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node courses breadcrumbs.
  $permissions['administer panelizer node courses breadcrumbs'] = array(
    'name' => 'administer panelizer node courses breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node courses content.
  $permissions['administer panelizer node courses content'] = array(
    'name' => 'administer panelizer node courses content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node courses context.
  $permissions['administer panelizer node courses context'] = array(
    'name' => 'administer panelizer node courses context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node courses defaults.
  $permissions['administer panelizer node courses defaults'] = array(
    'name' => 'administer panelizer node courses defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node courses layout.
  $permissions['administer panelizer node courses layout'] = array(
    'name' => 'administer panelizer node courses layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node courses overview.
  $permissions['administer panelizer node courses overview'] = array(
    'name' => 'administer panelizer node courses overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node courses settings.
  $permissions['administer panelizer node courses settings'] = array(
    'name' => 'administer panelizer node courses settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node current_students breadcrumbs.
  $permissions['administer panelizer node current_students breadcrumbs'] = array(
    'name' => 'administer panelizer node current_students breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node current_students content.
  $permissions['administer panelizer node current_students content'] = array(
    'name' => 'administer panelizer node current_students content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node current_students context.
  $permissions['administer panelizer node current_students context'] = array(
    'name' => 'administer panelizer node current_students context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node current_students defaults.
  $permissions['administer panelizer node current_students defaults'] = array(
    'name' => 'administer panelizer node current_students defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node current_students layout.
  $permissions['administer panelizer node current_students layout'] = array(
    'name' => 'administer panelizer node current_students layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node current_students overview.
  $permissions['administer panelizer node current_students overview'] = array(
    'name' => 'administer panelizer node current_students overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node current_students settings.
  $permissions['administer panelizer node current_students settings'] = array(
    'name' => 'administer panelizer node current_students settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node events breadcrumbs.
  $permissions['administer panelizer node events breadcrumbs'] = array(
    'name' => 'administer panelizer node events breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node events content.
  $permissions['administer panelizer node events content'] = array(
    'name' => 'administer panelizer node events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node events context.
  $permissions['administer panelizer node events context'] = array(
    'name' => 'administer panelizer node events context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node events defaults.
  $permissions['administer panelizer node events defaults'] = array(
    'name' => 'administer panelizer node events defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node events layout.
  $permissions['administer panelizer node events layout'] = array(
    'name' => 'administer panelizer node events layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node events overview.
  $permissions['administer panelizer node events overview'] = array(
    'name' => 'administer panelizer node events overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node events settings.
  $permissions['administer panelizer node events settings'] = array(
    'name' => 'administer panelizer node events settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_news_article breadcrumbs.
  $permissions['administer panelizer node panopoly_news_article breadcrumbs'] = array(
    'name' => 'administer panelizer node panopoly_news_article breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_news_article content.
  $permissions['administer panelizer node panopoly_news_article content'] = array(
    'name' => 'administer panelizer node panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_news_article context.
  $permissions['administer panelizer node panopoly_news_article context'] = array(
    'name' => 'administer panelizer node panopoly_news_article context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_news_article defaults.
  $permissions['administer panelizer node panopoly_news_article defaults'] = array(
    'name' => 'administer panelizer node panopoly_news_article defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_news_article layout.
  $permissions['administer panelizer node panopoly_news_article layout'] = array(
    'name' => 'administer panelizer node panopoly_news_article layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_news_article overview.
  $permissions['administer panelizer node panopoly_news_article overview'] = array(
    'name' => 'administer panelizer node panopoly_news_article overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_news_article settings.
  $permissions['administer panelizer node panopoly_news_article settings'] = array(
    'name' => 'administer panelizer node panopoly_news_article settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page breadcrumbs.
  $permissions['administer panelizer node panopoly_page breadcrumbs'] = array(
    'name' => 'administer panelizer node panopoly_page breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page content.
  $permissions['administer panelizer node panopoly_page content'] = array(
    'name' => 'administer panelizer node panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page context.
  $permissions['administer panelizer node panopoly_page context'] = array(
    'name' => 'administer panelizer node panopoly_page context',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page defaults.
  $permissions['administer panelizer node panopoly_page defaults'] = array(
    'name' => 'administer panelizer node panopoly_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page layout.
  $permissions['administer panelizer node panopoly_page layout'] = array(
    'name' => 'administer panelizer node panopoly_page layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page overview.
  $permissions['administer panelizer node panopoly_page overview'] = array(
    'name' => 'administer panelizer node panopoly_page overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page settings.
  $permissions['administer panelizer node panopoly_page settings'] = array(
    'name' => 'administer panelizer node panopoly_page settings',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_coaching_resources breadcrumbs.
  $permissions['administer panelizer node tci_page_coaching_resources breadcrumbs'] = array(
    'name' => 'administer panelizer node tci_page_coaching_resources breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_coaching_resources content.
  $permissions['administer panelizer node tci_page_coaching_resources content'] = array(
    'name' => 'administer panelizer node tci_page_coaching_resources content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_coaching_resources context.
  $permissions['administer panelizer node tci_page_coaching_resources context'] = array(
    'name' => 'administer panelizer node tci_page_coaching_resources context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_coaching_resources defaults.
  $permissions['administer panelizer node tci_page_coaching_resources defaults'] = array(
    'name' => 'administer panelizer node tci_page_coaching_resources defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_coaching_resources layout.
  $permissions['administer panelizer node tci_page_coaching_resources layout'] = array(
    'name' => 'administer panelizer node tci_page_coaching_resources layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_coaching_resources overview.
  $permissions['administer panelizer node tci_page_coaching_resources overview'] = array(
    'name' => 'administer panelizer node tci_page_coaching_resources overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_coaching_resources settings.
  $permissions['administer panelizer node tci_page_coaching_resources settings'] = array(
    'name' => 'administer panelizer node tci_page_coaching_resources settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_event_testimonial breadcrumbs.
  $permissions['administer panelizer node tci_page_event_testimonial breadcrumbs'] = array(
    'name' => 'administer panelizer node tci_page_event_testimonial breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_event_testimonial content.
  $permissions['administer panelizer node tci_page_event_testimonial content'] = array(
    'name' => 'administer panelizer node tci_page_event_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_event_testimonial context.
  $permissions['administer panelizer node tci_page_event_testimonial context'] = array(
    'name' => 'administer panelizer node tci_page_event_testimonial context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_event_testimonial defaults.
  $permissions['administer panelizer node tci_page_event_testimonial defaults'] = array(
    'name' => 'administer panelizer node tci_page_event_testimonial defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_event_testimonial layout.
  $permissions['administer panelizer node tci_page_event_testimonial layout'] = array(
    'name' => 'administer panelizer node tci_page_event_testimonial layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_event_testimonial overview.
  $permissions['administer panelizer node tci_page_event_testimonial overview'] = array(
    'name' => 'administer panelizer node tci_page_event_testimonial overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_event_testimonial settings.
  $permissions['administer panelizer node tci_page_event_testimonial settings'] = array(
    'name' => 'administer panelizer node tci_page_event_testimonial settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_get_to_know_us breadcrumbs.
  $permissions['administer panelizer node tci_page_get_to_know_us breadcrumbs'] = array(
    'name' => 'administer panelizer node tci_page_get_to_know_us breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_get_to_know_us content.
  $permissions['administer panelizer node tci_page_get_to_know_us content'] = array(
    'name' => 'administer panelizer node tci_page_get_to_know_us content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_get_to_know_us context.
  $permissions['administer panelizer node tci_page_get_to_know_us context'] = array(
    'name' => 'administer panelizer node tci_page_get_to_know_us context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_get_to_know_us defaults.
  $permissions['administer panelizer node tci_page_get_to_know_us defaults'] = array(
    'name' => 'administer panelizer node tci_page_get_to_know_us defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_get_to_know_us layout.
  $permissions['administer panelizer node tci_page_get_to_know_us layout'] = array(
    'name' => 'administer panelizer node tci_page_get_to_know_us layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_get_to_know_us overview.
  $permissions['administer panelizer node tci_page_get_to_know_us overview'] = array(
    'name' => 'administer panelizer node tci_page_get_to_know_us overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_get_to_know_us settings.
  $permissions['administer panelizer node tci_page_get_to_know_us settings'] = array(
    'name' => 'administer panelizer node tci_page_get_to_know_us settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_coaching breadcrumbs.
  $permissions['administer panelizer node tci_page_life_coaching breadcrumbs'] = array(
    'name' => 'administer panelizer node tci_page_life_coaching breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_coaching content.
  $permissions['administer panelizer node tci_page_life_coaching content'] = array(
    'name' => 'administer panelizer node tci_page_life_coaching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_coaching context.
  $permissions['administer panelizer node tci_page_life_coaching context'] = array(
    'name' => 'administer panelizer node tci_page_life_coaching context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_coaching defaults.
  $permissions['administer panelizer node tci_page_life_coaching defaults'] = array(
    'name' => 'administer panelizer node tci_page_life_coaching defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_coaching layout.
  $permissions['administer panelizer node tci_page_life_coaching layout'] = array(
    'name' => 'administer panelizer node tci_page_life_coaching layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_coaching overview.
  $permissions['administer panelizer node tci_page_life_coaching overview'] = array(
    'name' => 'administer panelizer node tci_page_life_coaching overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_coaching settings.
  $permissions['administer panelizer node tci_page_life_coaching settings'] = array(
    'name' => 'administer panelizer node tci_page_life_coaching settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_tci breadcrumbs.
  $permissions['administer panelizer node tci_page_life_tci breadcrumbs'] = array(
    'name' => 'administer panelizer node tci_page_life_tci breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_tci content.
  $permissions['administer panelizer node tci_page_life_tci content'] = array(
    'name' => 'administer panelizer node tci_page_life_tci content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_tci context.
  $permissions['administer panelizer node tci_page_life_tci context'] = array(
    'name' => 'administer panelizer node tci_page_life_tci context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_tci defaults.
  $permissions['administer panelizer node tci_page_life_tci defaults'] = array(
    'name' => 'administer panelizer node tci_page_life_tci defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_tci layout.
  $permissions['administer panelizer node tci_page_life_tci layout'] = array(
    'name' => 'administer panelizer node tci_page_life_tci layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_tci overview.
  $permissions['administer panelizer node tci_page_life_tci overview'] = array(
    'name' => 'administer panelizer node tci_page_life_tci overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_life_tci settings.
  $permissions['administer panelizer node tci_page_life_tci settings'] = array(
    'name' => 'administer panelizer node tci_page_life_tci settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_meta_dynamics breadcrumbs.
  $permissions['administer panelizer node tci_page_meta_dynamics breadcrumbs'] = array(
    'name' => 'administer panelizer node tci_page_meta_dynamics breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_meta_dynamics content.
  $permissions['administer panelizer node tci_page_meta_dynamics content'] = array(
    'name' => 'administer panelizer node tci_page_meta_dynamics content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_meta_dynamics context.
  $permissions['administer panelizer node tci_page_meta_dynamics context'] = array(
    'name' => 'administer panelizer node tci_page_meta_dynamics context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_meta_dynamics defaults.
  $permissions['administer panelizer node tci_page_meta_dynamics defaults'] = array(
    'name' => 'administer panelizer node tci_page_meta_dynamics defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_meta_dynamics layout.
  $permissions['administer panelizer node tci_page_meta_dynamics layout'] = array(
    'name' => 'administer panelizer node tci_page_meta_dynamics layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_meta_dynamics overview.
  $permissions['administer panelizer node tci_page_meta_dynamics overview'] = array(
    'name' => 'administer panelizer node tci_page_meta_dynamics overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_meta_dynamics settings.
  $permissions['administer panelizer node tci_page_meta_dynamics settings'] = array(
    'name' => 'administer panelizer node tci_page_meta_dynamics settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_student_testimonial breadcrumbs.
  $permissions['administer panelizer node tci_page_student_testimonial breadcrumbs'] = array(
    'name' => 'administer panelizer node tci_page_student_testimonial breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_student_testimonial content.
  $permissions['administer panelizer node tci_page_student_testimonial content'] = array(
    'name' => 'administer panelizer node tci_page_student_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_student_testimonial context.
  $permissions['administer panelizer node tci_page_student_testimonial context'] = array(
    'name' => 'administer panelizer node tci_page_student_testimonial context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_student_testimonial defaults.
  $permissions['administer panelizer node tci_page_student_testimonial defaults'] = array(
    'name' => 'administer panelizer node tci_page_student_testimonial defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_student_testimonial layout.
  $permissions['administer panelizer node tci_page_student_testimonial layout'] = array(
    'name' => 'administer panelizer node tci_page_student_testimonial layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_student_testimonial overview.
  $permissions['administer panelizer node tci_page_student_testimonial overview'] = array(
    'name' => 'administer panelizer node tci_page_student_testimonial overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_student_testimonial settings.
  $permissions['administer panelizer node tci_page_student_testimonial settings'] = array(
    'name' => 'administer panelizer node tci_page_student_testimonial settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_success_stories breadcrumbs.
  $permissions['administer panelizer node tci_page_success_stories breadcrumbs'] = array(
    'name' => 'administer panelizer node tci_page_success_stories breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_success_stories content.
  $permissions['administer panelizer node tci_page_success_stories content'] = array(
    'name' => 'administer panelizer node tci_page_success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_success_stories context.
  $permissions['administer panelizer node tci_page_success_stories context'] = array(
    'name' => 'administer panelizer node tci_page_success_stories context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_success_stories defaults.
  $permissions['administer panelizer node tci_page_success_stories defaults'] = array(
    'name' => 'administer panelizer node tci_page_success_stories defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_success_stories layout.
  $permissions['administer panelizer node tci_page_success_stories layout'] = array(
    'name' => 'administer panelizer node tci_page_success_stories layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_success_stories overview.
  $permissions['administer panelizer node tci_page_success_stories overview'] = array(
    'name' => 'administer panelizer node tci_page_success_stories overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_success_stories settings.
  $permissions['administer panelizer node tci_page_success_stories settings'] = array(
    'name' => 'administer panelizer node tci_page_success_stories settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_trainings breadcrumbs.
  $permissions['administer panelizer node tci_page_trainings breadcrumbs'] = array(
    'name' => 'administer panelizer node tci_page_trainings breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_trainings content.
  $permissions['administer panelizer node tci_page_trainings content'] = array(
    'name' => 'administer panelizer node tci_page_trainings content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_trainings context.
  $permissions['administer panelizer node tci_page_trainings context'] = array(
    'name' => 'administer panelizer node tci_page_trainings context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_trainings defaults.
  $permissions['administer panelizer node tci_page_trainings defaults'] = array(
    'name' => 'administer panelizer node tci_page_trainings defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_trainings layout.
  $permissions['administer panelizer node tci_page_trainings layout'] = array(
    'name' => 'administer panelizer node tci_page_trainings layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_trainings overview.
  $permissions['administer panelizer node tci_page_trainings overview'] = array(
    'name' => 'administer panelizer node tci_page_trainings overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tci_page_trainings settings.
  $permissions['administer panelizer node tci_page_trainings settings'] = array(
    'name' => 'administer panelizer node tci_page_trainings settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories breadcrumbs.
  $permissions['administer panelizer taxonomy_term panopoly_categories breadcrumbs'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories content.
  $permissions['administer panelizer taxonomy_term panopoly_categories content'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories context.
  $permissions['administer panelizer taxonomy_term panopoly_categories context'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories context',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories defaults.
  $permissions['administer panelizer taxonomy_term panopoly_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories defaults',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories layout.
  $permissions['administer panelizer taxonomy_term panopoly_categories layout'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories overview.
  $permissions['administer panelizer taxonomy_term panopoly_categories overview'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories settings.
  $permissions['administer panelizer taxonomy_term panopoly_categories settings'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories settings',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user breadcrumbs.
  $permissions['administer panelizer user user breadcrumbs'] = array(
    'name' => 'administer panelizer user user breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user content.
  $permissions['administer panelizer user user content'] = array(
    'name' => 'administer panelizer user user content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user context.
  $permissions['administer panelizer user user context'] = array(
    'name' => 'administer panelizer user user context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user defaults.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user layout.
  $permissions['administer panelizer user user layout'] = array(
    'name' => 'administer panelizer user user layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user overview.
  $permissions['administer panelizer user user overview'] = array(
    'name' => 'administer panelizer user user overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user settings.
  $permissions['administer panelizer user user settings'] = array(
    'name' => 'administer panelizer user user settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer seo_checker configuration.
  $permissions['administer seo_checker configuration'] = array(
    'name' => 'administer seo_checker configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'seo_checker',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer superfish.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'superfish',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: administer xmlsitemap.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: allow seo check failures.
  $permissions['allow seo check failures'] = array(
    'name' => 'allow seo check failures',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'seo_checker',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass file access.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: clear node feeds.
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear student_testimonials_import feeds.
  $permissions['clear student_testimonials_import feeds'] = array(
    'name' => 'clear student_testimonials_import feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear user feeds.
  $permissions['clear user feeds'] = array(
    'name' => 'clear user feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: configure tablefield.
  $permissions['configure tablefield'] = array(
    'name' => 'configure tablefield',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: convert from courses.
  $permissions['convert from courses'] = array(
    'name' => 'convert from courses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from current_students.
  $permissions['convert from current_students'] = array(
    'name' => 'convert from current_students',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from events.
  $permissions['convert from events'] = array(
    'name' => 'convert from events',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from flexslider_example.
  $permissions['convert from flexslider_example'] = array(
    'name' => 'convert from flexslider_example',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from panopoly_news_article.
  $permissions['convert from panopoly_news_article'] = array(
    'name' => 'convert from panopoly_news_article',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from panopoly_page.
  $permissions['convert from panopoly_page'] = array(
    'name' => 'convert from panopoly_page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from tci_page_coaching_resources.
  $permissions['convert from tci_page_coaching_resources'] = array(
    'name' => 'convert from tci_page_coaching_resources',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from tci_page_event_testimonial.
  $permissions['convert from tci_page_event_testimonial'] = array(
    'name' => 'convert from tci_page_event_testimonial',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from tci_page_get_to_know_us.
  $permissions['convert from tci_page_get_to_know_us'] = array(
    'name' => 'convert from tci_page_get_to_know_us',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from tci_page_life_coaching.
  $permissions['convert from tci_page_life_coaching'] = array(
    'name' => 'convert from tci_page_life_coaching',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from tci_page_life_tci.
  $permissions['convert from tci_page_life_tci'] = array(
    'name' => 'convert from tci_page_life_tci',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from tci_page_meta_dynamics.
  $permissions['convert from tci_page_meta_dynamics'] = array(
    'name' => 'convert from tci_page_meta_dynamics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from tci_page_student_testimonial.
  $permissions['convert from tci_page_student_testimonial'] = array(
    'name' => 'convert from tci_page_student_testimonial',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from tci_page_success_stories.
  $permissions['convert from tci_page_success_stories'] = array(
    'name' => 'convert from tci_page_success_stories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert from tci_page_trainings.
  $permissions['convert from tci_page_trainings'] = array(
    'name' => 'convert from tci_page_trainings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to courses.
  $permissions['convert to courses'] = array(
    'name' => 'convert to courses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to current_students.
  $permissions['convert to current_students'] = array(
    'name' => 'convert to current_students',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to events.
  $permissions['convert to events'] = array(
    'name' => 'convert to events',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to flexslider_example.
  $permissions['convert to flexslider_example'] = array(
    'name' => 'convert to flexslider_example',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to panopoly_news_article.
  $permissions['convert to panopoly_news_article'] = array(
    'name' => 'convert to panopoly_news_article',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to panopoly_page.
  $permissions['convert to panopoly_page'] = array(
    'name' => 'convert to panopoly_page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to tci_page_coaching_resources.
  $permissions['convert to tci_page_coaching_resources'] = array(
    'name' => 'convert to tci_page_coaching_resources',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to tci_page_event_testimonial.
  $permissions['convert to tci_page_event_testimonial'] = array(
    'name' => 'convert to tci_page_event_testimonial',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to tci_page_get_to_know_us.
  $permissions['convert to tci_page_get_to_know_us'] = array(
    'name' => 'convert to tci_page_get_to_know_us',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to tci_page_life_coaching.
  $permissions['convert to tci_page_life_coaching'] = array(
    'name' => 'convert to tci_page_life_coaching',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to tci_page_life_tci.
  $permissions['convert to tci_page_life_tci'] = array(
    'name' => 'convert to tci_page_life_tci',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to tci_page_meta_dynamics.
  $permissions['convert to tci_page_meta_dynamics'] = array(
    'name' => 'convert to tci_page_meta_dynamics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to tci_page_student_testimonial.
  $permissions['convert to tci_page_student_testimonial'] = array(
    'name' => 'convert to tci_page_student_testimonial',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to tci_page_success_stories.
  $permissions['convert to tci_page_success_stories'] = array(
    'name' => 'convert to tci_page_success_stories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: convert to tci_page_trainings.
  $permissions['convert to tci_page_trainings'] = array(
    'name' => 'convert to tci_page_trainings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: create child nodes.
  $permissions['create child nodes'] = array(
    'name' => 'create child nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: create child of any parent.
  $permissions['create child of any parent'] = array(
    'name' => 'create child of any parent',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: create courses content.
  $permissions['create courses content'] = array(
    'name' => 'create courses content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create current_students content.
  $permissions['create current_students content'] = array(
    'name' => 'create current_students content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create events content.
  $permissions['create events content'] = array(
    'name' => 'create events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create fieldable fieldable_panels_pane.
  $permissions['create fieldable fieldable_panels_pane'] = array(
    'name' => 'create fieldable fieldable_panels_pane',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: create flexslider_example content.
  $permissions['create flexslider_example content'] = array(
    'name' => 'create flexslider_example content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create panopoly_news_article content.
  $permissions['create panopoly_news_article content'] = array(
    'name' => 'create panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create panopoly_page content.
  $permissions['create panopoly_page content'] = array(
    'name' => 'create panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create tci_page_coaching_resources content.
  $permissions['create tci_page_coaching_resources content'] = array(
    'name' => 'create tci_page_coaching_resources content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create tci_page_event_testimonial content.
  $permissions['create tci_page_event_testimonial content'] = array(
    'name' => 'create tci_page_event_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create tci_page_get_to_know_us content.
  $permissions['create tci_page_get_to_know_us content'] = array(
    'name' => 'create tci_page_get_to_know_us content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create tci_page_life_coaching content.
  $permissions['create tci_page_life_coaching content'] = array(
    'name' => 'create tci_page_life_coaching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create tci_page_life_tci content.
  $permissions['create tci_page_life_tci content'] = array(
    'name' => 'create tci_page_life_tci content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create tci_page_meta_dynamics content.
  $permissions['create tci_page_meta_dynamics content'] = array(
    'name' => 'create tci_page_meta_dynamics content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create tci_page_student_testimonial content.
  $permissions['create tci_page_student_testimonial content'] = array(
    'name' => 'create tci_page_student_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create tci_page_success_stories content.
  $permissions['create tci_page_success_stories content'] = array(
    'name' => 'create tci_page_success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create tci_page_trainings content.
  $permissions['create tci_page_trainings content'] = array(
    'name' => 'create tci_page_trainings content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: customize nodehierarchy menus.
  $permissions['customize nodehierarchy menus'] = array(
    'name' => 'customize nodehierarchy menus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any audio files.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any courses content.
  $permissions['delete any courses content'] = array(
    'name' => 'delete any courses content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any current_students content.
  $permissions['delete any current_students content'] = array(
    'name' => 'delete any current_students content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any document files.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any events content.
  $permissions['delete any events content'] = array(
    'name' => 'delete any events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any flexslider_example content.
  $permissions['delete any flexslider_example content'] = array(
    'name' => 'delete any flexslider_example content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any image files.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any panopoly_news_article content.
  $permissions['delete any panopoly_news_article content'] = array(
    'name' => 'delete any panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panopoly_page content.
  $permissions['delete any panopoly_page content'] = array(
    'name' => 'delete any panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tci_page_coaching_resources content.
  $permissions['delete any tci_page_coaching_resources content'] = array(
    'name' => 'delete any tci_page_coaching_resources content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tci_page_event_testimonial content.
  $permissions['delete any tci_page_event_testimonial content'] = array(
    'name' => 'delete any tci_page_event_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tci_page_get_to_know_us content.
  $permissions['delete any tci_page_get_to_know_us content'] = array(
    'name' => 'delete any tci_page_get_to_know_us content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tci_page_life_coaching content.
  $permissions['delete any tci_page_life_coaching content'] = array(
    'name' => 'delete any tci_page_life_coaching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tci_page_life_tci content.
  $permissions['delete any tci_page_life_tci content'] = array(
    'name' => 'delete any tci_page_life_tci content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tci_page_meta_dynamics content.
  $permissions['delete any tci_page_meta_dynamics content'] = array(
    'name' => 'delete any tci_page_meta_dynamics content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tci_page_student_testimonial content.
  $permissions['delete any tci_page_student_testimonial content'] = array(
    'name' => 'delete any tci_page_student_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tci_page_success_stories content.
  $permissions['delete any tci_page_success_stories content'] = array(
    'name' => 'delete any tci_page_success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tci_page_trainings content.
  $permissions['delete any tci_page_trainings content'] = array(
    'name' => 'delete any tci_page_trainings content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any video files.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete fieldable fieldable_panels_pane.
  $permissions['delete fieldable fieldable_panels_pane'] = array(
    'name' => 'delete fieldable fieldable_panels_pane',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete own audio files.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own courses content.
  $permissions['delete own courses content'] = array(
    'name' => 'delete own courses content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own current_students content.
  $permissions['delete own current_students content'] = array(
    'name' => 'delete own current_students content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own document files.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own events content.
  $permissions['delete own events content'] = array(
    'name' => 'delete own events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own flexslider_example content.
  $permissions['delete own flexslider_example content'] = array(
    'name' => 'delete own flexslider_example content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own image files.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own panopoly_news_article content.
  $permissions['delete own panopoly_news_article content'] = array(
    'name' => 'delete own panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panopoly_page content.
  $permissions['delete own panopoly_page content'] = array(
    'name' => 'delete own panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tci_page_coaching_resources content.
  $permissions['delete own tci_page_coaching_resources content'] = array(
    'name' => 'delete own tci_page_coaching_resources content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tci_page_event_testimonial content.
  $permissions['delete own tci_page_event_testimonial content'] = array(
    'name' => 'delete own tci_page_event_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tci_page_get_to_know_us content.
  $permissions['delete own tci_page_get_to_know_us content'] = array(
    'name' => 'delete own tci_page_get_to_know_us content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tci_page_life_coaching content.
  $permissions['delete own tci_page_life_coaching content'] = array(
    'name' => 'delete own tci_page_life_coaching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tci_page_life_tci content.
  $permissions['delete own tci_page_life_tci content'] = array(
    'name' => 'delete own tci_page_life_tci content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tci_page_meta_dynamics content.
  $permissions['delete own tci_page_meta_dynamics content'] = array(
    'name' => 'delete own tci_page_meta_dynamics content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tci_page_student_testimonial content.
  $permissions['delete own tci_page_student_testimonial content'] = array(
    'name' => 'delete own tci_page_student_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tci_page_success_stories content.
  $permissions['delete own tci_page_success_stories content'] = array(
    'name' => 'delete own tci_page_success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tci_page_trainings content.
  $permissions['delete own tci_page_trainings content'] = array(
    'name' => 'delete own tci_page_trainings content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own video files.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: download any audio files.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: download any document files.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: download any image files.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: download any video files.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: download own audio files.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: download own document files.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: download own image files.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: download own video files.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit all node parents.
  $permissions['edit all node parents'] = array(
    'name' => 'edit all node parents',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: edit any audio files.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any checklistapi checklist.
  $permissions['edit any checklistapi checklist'] = array(
    'name' => 'edit any checklistapi checklist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: edit any courses content.
  $permissions['edit any courses content'] = array(
    'name' => 'edit any courses content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any current_students content.
  $permissions['edit any current_students content'] = array(
    'name' => 'edit any current_students content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any document files.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any events content.
  $permissions['edit any events content'] = array(
    'name' => 'edit any events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any flexslider_example content.
  $permissions['edit any flexslider_example content'] = array(
    'name' => 'edit any flexslider_example content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any image files.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any panopoly_news_article content.
  $permissions['edit any panopoly_news_article content'] = array(
    'name' => 'edit any panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panopoly_page content.
  $permissions['edit any panopoly_page content'] = array(
    'name' => 'edit any panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tci_page_coaching_resources content.
  $permissions['edit any tci_page_coaching_resources content'] = array(
    'name' => 'edit any tci_page_coaching_resources content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tci_page_event_testimonial content.
  $permissions['edit any tci_page_event_testimonial content'] = array(
    'name' => 'edit any tci_page_event_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tci_page_get_to_know_us content.
  $permissions['edit any tci_page_get_to_know_us content'] = array(
    'name' => 'edit any tci_page_get_to_know_us content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tci_page_life_coaching content.
  $permissions['edit any tci_page_life_coaching content'] = array(
    'name' => 'edit any tci_page_life_coaching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tci_page_life_tci content.
  $permissions['edit any tci_page_life_tci content'] = array(
    'name' => 'edit any tci_page_life_tci content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tci_page_meta_dynamics content.
  $permissions['edit any tci_page_meta_dynamics content'] = array(
    'name' => 'edit any tci_page_meta_dynamics content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tci_page_student_testimonial content.
  $permissions['edit any tci_page_student_testimonial content'] = array(
    'name' => 'edit any tci_page_student_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tci_page_success_stories content.
  $permissions['edit any tci_page_success_stories content'] = array(
    'name' => 'edit any tci_page_success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tci_page_trainings content.
  $permissions['edit any tci_page_trainings content'] = array(
    'name' => 'edit any tci_page_trainings content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any video files.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit fieldable fieldable_panels_pane.
  $permissions['edit fieldable fieldable_panels_pane'] = array(
    'name' => 'edit fieldable fieldable_panels_pane',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit node machine name.
  $permissions['edit node machine name'] = array(
    'name' => 'edit node machine name',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'defaultcontent',
  );

  // Exported permission: edit own audio files.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own courses content.
  $permissions['edit own courses content'] = array(
    'name' => 'edit own courses content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own current_students content.
  $permissions['edit own current_students content'] = array(
    'name' => 'edit own current_students content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own document files.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own events content.
  $permissions['edit own events content'] = array(
    'name' => 'edit own events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own flexslider_example content.
  $permissions['edit own flexslider_example content'] = array(
    'name' => 'edit own flexslider_example content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own image files.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own node parents.
  $permissions['edit own node parents'] = array(
    'name' => 'edit own node parents',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: edit own panopoly_news_article content.
  $permissions['edit own panopoly_news_article content'] = array(
    'name' => 'edit own panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panopoly_page content.
  $permissions['edit own panopoly_page content'] = array(
    'name' => 'edit own panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tci_page_coaching_resources content.
  $permissions['edit own tci_page_coaching_resources content'] = array(
    'name' => 'edit own tci_page_coaching_resources content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tci_page_event_testimonial content.
  $permissions['edit own tci_page_event_testimonial content'] = array(
    'name' => 'edit own tci_page_event_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tci_page_get_to_know_us content.
  $permissions['edit own tci_page_get_to_know_us content'] = array(
    'name' => 'edit own tci_page_get_to_know_us content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tci_page_life_coaching content.
  $permissions['edit own tci_page_life_coaching content'] = array(
    'name' => 'edit own tci_page_life_coaching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tci_page_life_tci content.
  $permissions['edit own tci_page_life_tci content'] = array(
    'name' => 'edit own tci_page_life_tci content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tci_page_meta_dynamics content.
  $permissions['edit own tci_page_meta_dynamics content'] = array(
    'name' => 'edit own tci_page_meta_dynamics content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tci_page_student_testimonial content.
  $permissions['edit own tci_page_student_testimonial content'] = array(
    'name' => 'edit own tci_page_student_testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tci_page_success_stories content.
  $permissions['edit own tci_page_success_stories content'] = array(
    'name' => 'edit own tci_page_success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tci_page_trainings content.
  $permissions['edit own tci_page_trainings content'] = array(
    'name' => 'edit own tci_page_trainings content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own video files.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit seo_checklist checklistapi checklist.
  $permissions['edit seo_checklist checklistapi checklist'] = array(
    'name' => 'edit seo_checklist checklistapi checklist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: export tablefield.
  $permissions['export tablefield'] = array(
    'name' => 'export tablefield',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: import node feeds.
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import student_testimonials_import feeds.
  $permissions['import student_testimonials_import feeds'] = array(
    'name' => 'import student_testimonials_import feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import user feeds.
  $permissions['import user feeds'] = array(
    'name' => 'import user feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: migrate wordpress blogs.
  $permissions['migrate wordpress blogs'] = array(
    'name' => 'migrate wordpress blogs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'wordpress_migrate',
  );

  // Exported permission: migration information.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate_ui',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: rebuild tablefield.
  $permissions['rebuild tablefield'] = array(
    'name' => 'rebuild tablefield',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: save draft.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'save_draft',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: set page title.
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_title',
  );

  // Exported permission: skip seo checks.
  $permissions['skip seo checks'] = array(
    'name' => 'skip seo checks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'seo_checker',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: unlock node feeds.
  $permissions['unlock node feeds'] = array(
    'name' => 'unlock node feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock student_testimonials_import feeds.
  $permissions['unlock student_testimonials_import feeds'] = array(
    'name' => 'unlock student_testimonials_import feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock user feeds.
  $permissions['unlock user feeds'] = array(
    'name' => 'unlock user feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: use ipe with page manager.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use text format panopoly_html_text.
  $permissions['use text format panopoly_html_text'] = array(
    'name' => 'use text format panopoly_html_text',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format panopoly_wysiwyg_text.
  $permissions['use text format panopoly_wysiwyg_text'] = array(
    'name' => 'use text format panopoly_wysiwyg_text',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: view any checklistapi checklist.
  $permissions['view any checklistapi checklist'] = array(
    'name' => 'view any checklistapi checklist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: view checklistapi checklists report.
  $permissions['view checklistapi checklists report'] = array(
    'name' => 'view checklistapi checklists report',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view private files.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view seo_checklist checklistapi checklist.
  $permissions['view seo_checklist checklistapi checklist'] = array(
    'name' => 'view seo_checklist checklistapi checklist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
