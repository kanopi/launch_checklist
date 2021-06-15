<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

// use Drupal\Core\Url;

/**
 * Generates are returns section 10 for launch_checklist.
 */
function populate_section_10() {

  return [

  // Section 10 Theme.
    '#title' => t('Theme'),
    '#description' => t('<p>Theme settings for the Drupal site.</p>'),

    'responsive_design' => [
      '#title' => t('Responsive Design'),
      '#description' => t('For responsive designs, check that the theme is responding properly at all resolutions and orientations, and that there are no visual issues.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'custom_js' => [
      '#title' => t('Custom Javascript'),
      '#description' => t('If there are any custom JS files in the theme verify if they should be added to every page.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'theme_structure' => [
      '#title' => t('Theme Structure'),
      '#description' => t('Make sure the theme is well structured and that there are no unused image/css/js files present.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
  ];
}
