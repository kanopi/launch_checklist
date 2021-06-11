<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

use Drupal\Core\Url;

/**
 * Generates are returns section 4 for launch_checklist.
 */
function populate_section_04() {

  // Check if module exists.
  $moduleHandler = \Drupal::service('module_handler');
  // Google Analytics.
  $google_analytics_route = '';
  $google_analytics_route = Url::fromUri('https://www.drupal.org/project/google_analytics');
  if ($moduleHandler->moduleExists('google_analytics')) {
    $google_analytics_route = Url::fromRoute('google_analytics.admin_settings_form');
  }
  // XML Sitemap.
  $xml_sitemap = '';
  $xml_sitemap = Url::fromUri('https://www.drupal.org/project/xmlsitemap');
  if ($moduleHandler->moduleExists('xmlsitemap')) {
    $xml_sitemap = Url::fromRoute('xmlsitemap.admin_search');
  }
  // Global Redirect.
  $global_redirect = '';
  $global_redirect = Url::fromUri('https://www.drupal.org/project/redirect');
  if ($moduleHandler->moduleExists('redirect')) {
    $global_redirect = Url::fromRoute('redirect.settings');
  }
  // Schema.org Metatag.
  $schema_metatag = '';
  $schema_metatag = Url::fromUri('https://www.drupal.org/project/schema_metatag');
  if ($moduleHandler->moduleExists('schema_metatag')) {
    $schema_metatag = Url::fromRoute('help.page.schema_metatag');
  }

  return [

  // Section 4 SEO.
    '#title' => t('SEO'),
    '#description' => t('<p>SEO settings for the Drupal site.</p>'),

    'analytics' => [
      '#title' => t('Analytics'),
      '#description' => t('Verify Google Analytics or similar is installed and correct access has been given'),
      'handbook_page' => [
        '#text' => t('Google Analytics module'),
        '#url' => $google_analytics_route,
      ],
    ],
    'xml_sitemap' => [
      '#title' => t('XML Sitemap'),
      '#description' => t('Check that the XML sitemap module is enabled and a sitemap has been created.'),
      'handbook_page' => [
        '#text' => t('XML Sitemap'),
        '#url' => $xml_sitemap,
      ],
    ],
    'title_meta_tags' => [
      '#title' => t('Page Titles and Meta Tags'),
      '#description' => t('Ensure that page titles and meta tags are set up.'),
      // 'handbook_page' => [
      // '#text' => t('Front page of site.'),
      // '#url' => $front_route,
      // ],
    ],
    'global_redirect' => [
      '#title' => t('Global Redirect Module'),
      '#description' => t('Ensure that the global redirect module is enabled.'),
      'handbook_page' => [
        '#text' => t('Global Redirect settings.'),
        '#url' => $global_redirect,
      ],
    ],
    'apache_rewrite_rules' => [
      '#title' => t('Apache Rewrite Rules'),
      '#description' => t('Ensure that one of the rewrite rules in the Apache directives is uncommented, so either traffic to www or vice versa.'),
      // 'handbook_page' => [
      // '#text' => t('Front page of site.'),
      // '#url' => $front_route,
      // ],
    ],
    'htaccess_rewrite_rules' => [
      '#title' => t('.htaccess Rewrite Rules'),
      '#description' => t('Ensure that there is a rewrite rule in the .htaccess file which redirects any temporary / alternate urls (eg. wwww.<site-name>.com).'),
      // 'handbook_page' => [
      // '#text' => t('Front page of site.'),
      // '#url' => $front_route,
      // ],
    ],
    'schema_settings' => [
      '#title' => t('Schema.org Settings'),
      '#description' => t('Ensure that the schema.org settings are complete for all content types.'),
      'handbook_page' => [
        '#text' => t('Schema Metatag help page.'),
        '#url' => $schema_metatag,
      ],
    ],
  ];
}
