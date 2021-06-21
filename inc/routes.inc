<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

use Drupal\Core\Url;

/**
 * Module routes and URL fallbacks.
 */
function routes() {
  //Array that holds all of the generated routes
  $checklist_routes = [];

  // Home page route.
  $checklist_routes["front_route"] = Url::fromRoute('<front>');

  // Check if module exists.
  $moduleHandler = \Drupal::service('module_handler');

  // EU Cookie Compliance.
  $eu_cookie_compliance = '';
  $eu_cookie_compliance = Url::fromUri('https://www.drupal.org/project/eu_cookie_compliance');
  if ($moduleHandler->moduleExists('eu_cookie_compliance')) {
    $eu_cookie_compliance = Url::fromRoute('eu_cookie_compliance');
  }
  // Google Analytics.
  $google_analytics = '';
  $google_analytics = Url::fromUri('https://www.drupal.org/project/google_analytics');
  if ($moduleHandler->moduleExists('google_analytics')) {
    $google_analytics = Url::fromRoute('google_analytics.admin_settings_form');
  }
  // Google Tag Manager.
  $google_tag = '';
  $google_tag = Url::fromUri('https://www.drupal.org/project/google_tag');
  if ($moduleHandler->moduleExists('google_tag')) {
    $google_tag = Url::fromRoute('google_tag.settings_form');
  }
  // Metatag.
  $metatag = '';
  $metatag = Url::fromUri('https://www.drupal.org/project/metatag');
  if ($moduleHandler->moduleExists('metatag')) {
    $metatag = Url::fromRoute('entity.metatag_defaults.collection');
  }
  // Real AES.
  $real_aes = '';
  $real_aes = Url::fromUri('https://www.drupal.org/project/real_aes');
  if ($moduleHandler->moduleExists('real_aes')) {
    $real_aes = Url::fromRoute('real_aes');
  }
  // Redirect.
  $redirect = '';
  $redirect = Url::fromUri('https://www.drupal.org/project/redirect');
  if ($moduleHandler->moduleExists('redirect')) {
    $redirect = Url::fromRoute('redirect.list');
  }
  // Schema.org Metatag.
  $schema_metatag = '';
  $schema_metatag = Url::fromUri('https://www.drupal.org/project/schema_metatag');
  if ($moduleHandler->moduleExists('schema_metatag')) {
    $schema_metatag = Url::fromRoute('entity.metatag_defaults.collection');
  }
  // Security Kit.
  $seckit = '';
  $seckit = Url::fromUri('https://www.drupal.org/project/seckit');
  if ($moduleHandler->moduleExists('seckit')) {
    $seckit = Url::fromRoute('seckit.settings');
  }
  // Security Review.
  $security_review = '';
  $security_review = Url::fromUri('https://www.drupal.org/project/security_review');
  if ($moduleHandler->moduleExists('security_review')) {
    $security_review = Url::fromRoute('security_review');
  }
  // Simple XML sitemap.
  $simple_sitemap = '';
  $simple_sitemap = Url::fromUri('https://www.drupal.org/project/simple_sitemap');
  if ($moduleHandler->moduleExists('simple_sitemap')) {
    $simple_sitemap = Url::fromRoute('simple_sitemap.sitemaps');
  }
  // Unused modules.
  $unused_modules = '';
  $unused_modules = Url::fromUri('https://www.drupal.org/project/unused_modules');
  if ($moduleHandler->moduleExists('unused_modules')) {
    $simple_sitemap = Url::fromRoute('unused_modules.overview.projects.all');
  }
  // Webform.
  $webform_route = '';
  $webform_route = Url::fromUri('https://www.drupal.org/project/webform');
  if ($moduleHandler->moduleExists('webform')) {
    $webform_route = Url::fromRoute('entity.webform.collection');
  }
  // XML Sitemap.
  $xml_sitemap = '';
  $xml_sitemap = Url::fromUri('https://www.drupal.org/project/xmlsitemap');
  if ($moduleHandler->moduleExists('xmlsitemap')) {
    $xml_sitemap = Url::fromRoute('xmlsitemap.admin_search');
  }

  return $checklist_routes;

}
