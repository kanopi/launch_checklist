<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

use Drupal\Core\Url;

/**
 * Generates are returns section 3 for launch_checklist.
 */
function section_03_forms() {

  // Check if module exists.
  $moduleHandler = \Drupal::service('module_handler');
  // Webform.
  $webform_route = '';
  $webform_route = Url::fromUri('https://www.drupal.org/project/webform');
  if ($moduleHandler->moduleExists('webform')) {
    $webform_route = Url::fromRoute('entity.webform.collection');
  }

  return [

  // Section 3 Forms.
    '#title' => t('Forms'),
    '#description' => t('<p>Verify forms work as expected.</p>'),

    'email' => [
      '#title' => t('Form emails'),
      '#description' => t('Check all webforms for recipient email and test.'),
      'handbook_page' => [
        '#text' => t('Webform'),
        '#url' => $webform_route,
      ],
    ],
    'confirmation' => [
      '#title' => t('Form confirmation'),
      '#description' => t('Check all webforms for thank you message'),
      'handbook_page' => [
        '#text' => t('Webform'),
        '#url' => $webform_route,
      ],
    ],
    'spam' => [
      '#title' => t('Spam protection'),
      '#description' => t('Ensure Spam prevention measures are in place.'),
    ],
  ];
}
