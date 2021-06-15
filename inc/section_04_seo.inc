<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

use Drupal\Core\Url;

/**
 * Generates the section 04 SEO list..
 */
function section_04_seo() {

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
  $redirect = '';
  $redirect = Url::fromUri('https://www.drupal.org/project/redirect');
  if ($moduleHandler->moduleExists('redirect')) {
    $redirect = Url::fromRoute('redirect.list');
  }
  // Metatag.
  $metatag = '';
  $metatag = Url::fromUri('https://www.drupal.org/project/metatag');
  if ($moduleHandler->moduleExists('metatag')) {
    $metatag = Url::fromRoute('entity.metatag_defaults.collection');
  }
  // Schema.org Metatag.
  $schema_metatag = '';
  $schema_metatag = Url::fromUri('https://www.drupal.org/project/schema_metatag');
  if ($moduleHandler->moduleExists('schema_metatag')) {
    $schema_metatag = Url::fromRoute('entity.metatag_defaults.collection');
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
        // @todo can we add other modules here?
      ],
    ],
    'xml_sitemap' => [
      '#title' => t('XML Sitemap'),
      '#description' => t('Check that the XML sitemap module is enabled and a sitemap has been created.'),
      'handbook_page' => [
        '#text' => t('XML Sitemap'),
        '#url' => $xml_sitemap,
        // @todo can we add other modules here?
      ],
    ],
    'title_meta_tags' => [
      '#title' => t('Page Titles and Meta Tags'),
      '#description' => t('Ensure that page titles and meta tags are set up.'),
      'handbook_page' => [
        '#text' => t('Metatag'),
        '#url' => $metatag,
      ],
    ],
    'schema_settings' => [
      '#title' => t('Schema.org Settings'),
      '#description' => t('Ensure that the schema.org settings are complete for all content types.'),
      'handbook_page' => [
        '#text' => t('Schema Metatag'),
        '#url' => $schema_metatag,
      ],
    ],
    'redirect' => [
      '#title' => t('Redirect Module'),
      '#description' => t('Ensure that the redirect module is enabled.'),
      'handbook_page' => [
        '#text' => t('Global Redirect settings.'),
        '#url' => $redirect,
      ],
    ],
    'rewrite_rules' => [
      '#title' => t('Rewrite Rules'),
      '#description' => t('Verify that rewrite rules (Apache, nginx, or host settings) force all traffic to https and www or non-www.'),
    ],
    'rewrite_rules_alt' => [
      '#title' => t('Rewrite Rules for Alternate URLs'),
      '#description' => t('Verify that rewrite rules (Apache, nginx, or host settings) force any temporary / alternate urls (eg. wwww.<site-name>.com) to the primary url.'),
    ],
  ];
}
