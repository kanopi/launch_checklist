<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

/**
 * Generates the section 04 SEO list..
 */
function section_04_seo() {

  return [
    // Section 4 SEO.
    '#title' => t('SEO'),
    '#description' => t('<p>SEO settings for the Drupal site.</p>'),
    'analytics' => [
      '#title' => t('Analytics'),
      '#description' => t('Verify Google Analytics or similar is installed and correct access has been given'),
      'handbook_page' => [
        '#text' => t('Google Analytics module'),
        '#url' => $google_analytics,
      ],
      'handbook_page_2' => [
        '#text' => t('Google Tag Manager'),
        '#url' => $google_tag,
      ],
    ],
    'xml_sitemap' => [
      '#title' => t('XML Sitemap'),
      '#description' => t('Check that the XML sitemap module is enabled and a sitemap has been created.'),
      'handbook_page' => [
        '#text' => t('XML Sitemap'),
        '#url' => $xml_sitemap,
      ],
      'handbook_page_2' => [
        '#text' => t('Simple Sitemap'),
        '#url' => $simple_sitemap,
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
        '#text' => t('Redirect settings.'),
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
