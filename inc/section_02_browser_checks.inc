<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

use Drupal\Core\Url;

/**
 * Generates are returns section 2 for launch_checklist.
 */
function section_02_browser_checks() {

  return [
  // Section 2 Browser Checks.
    '#title' => t('Browser Checks'),
    '#description' => t('<p>Verify the look and funcitonality across devices.</p>'),

    'desktop' => [
      '#title' => t('Verify the site looks and behaves as exprected on Desktop'),
      '#description' => t('Test on the latest two versions of browsers, including Google Chrome, Mozilla Firefox, Safari, Internet Explorer, Edge and Opera'),
      'handbook_page' => [
        '#text' => t('Use a Cross Browser Testing Tool like Browserstack'),
        '#url' => Url::fromUri('https://www.browserstack.com/'),
      ],
    ],
    'mobile' => [
      '#title' => t('Verify the site looks and behaves as exprected on mobile'),
      '#description' => t('Testing should also be completed on mobile devices including: Apple iPad, Apple iPhone, Samsung Galaxy SIII, Nexus, Google Nexus 7, Amazon Kindle Fire, Droid Razr 4G, Blackberry, Amazon Silk'),
      'handbook_page' => [
        '#text' => t('Use a Cross Browser Testing Tool like Browserstack'),
        '#url' => Url::fromUri('https://www.browserstack.com/'),
      ],
    ],
  ];
}
