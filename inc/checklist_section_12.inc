<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

// Use Drupal\Core\Url;.

/**
 * Generates are returns section 12 for launch_checklist.
 */
function populate_section_12() {

  return [

  // Section 12 Drupal Modules.
    '#title' => t('Drupal Modules'),
    '#description' => t('<p>Drupal module settings for the Drupal site.</p>'),

    'cust_modules' => [
      '#title' => t('Custom Modules'),
      '#description' => t('Ensure that custom modules are in a "custom" folder.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'coder_module' => [
      '#title' => t('Coder Module'),
      '#description' => t('Run the Coder module and fix any issues it discovers in the custom modules.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'devel_module' => [
      '#title' => t('Devel Module'),
      '#description' => t('Ensure that the Devel module is disabled on the production site.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
  ];
}
