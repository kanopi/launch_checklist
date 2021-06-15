<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

// use Drupal\Core\Url;

/**
 * Generates are returns section 7 for launch_checklist.
 */
function populate_section_07() {

  return [

  // Section 7 GDPR and Privacy.
    '#title' => t('GDPR and Privacy'),
    '#description' => t('<p>GDPR and Privacy settings for the Drupal site.</p>'),

    'approved_language' => [
      '#title' => t('Approved Laangauge Notification'),
      '#description' => t('Include the approved language in the notification window.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'privacy_policy' => [
      '#title' => t('Privacy Policy'),
      '#description' => t('Make sure a Privacy Policy exists and that there is a link to it.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'privacy_policy_cookies' => [
      '#title' => t('Privacy Policy Cookies'),
      '#description' => t('Ensure the privacy policy accurately specifies the cookies that the site serves.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'gdpr_testing' => [
      '#title' => t('GDPR Testing'),
      '#description' => t('Perform GDPR testing on the final hosting solution.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
  ];
}
