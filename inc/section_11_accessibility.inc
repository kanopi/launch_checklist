<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

use Drupal\Core\Url;

/**
 * Generates are returns section 11 for launch_checklist.
 */
function section_11_accessibility() {

  return [
    // Section 11 Accessibility.
    '#title' => t('Accessibility'),
    '#description' => t('<p>Accessibility settings for the Drupal site.</p>'),
    'alt_tags' => [
      '#title' => t('Image Alt Tags'),
      '#description' => t('Ensure that all images have alt tags.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'color_contrast' => [
      '#title' => t('Color Contrast'),
      '#description' => t('Ensure that colors have the proper contrast to meet accessibility requirements.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'links' => [
      '#title' => t('Links'),
      '#description' => t('Make sure links are specific to what will happen when clicked (ie: "Read More" and "Click Here" are too vague)'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'headings' => [
      '#title' => t('Headings'),
      '#description' => t('Ensure headings are properly assigned.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'accessibility_checker' => [
      '#title' => t('Accessibility Checker'),
      '#description' => t('Run an accessibility checker, such as WAVE or Axe, to check for any outstanding accessibility issues.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'accessibility_checklist' => [
      '#title' => t('Accessibility Checklist'),
      '#description' => t('For a more comprehensive accessibility check, visit the A11y Project Checklist.'),
      'handbook_page' => [
        '#text' => t('The A11y Project Checklist'),
        '#url' => Url::fromUri('https://www.a11yproject.com/checklist/'),
      ],
    ],
  ];
}
