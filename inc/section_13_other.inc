<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

use Drupal\Core\Url;

/**
 * Generates and returns section 13 for launch_checklist.
 */
function section_13_other($checklist_routes) {

  return [
    // Section 13 Other.
    '#title' => t('Other'),
    '#description' => t('<p>Misc. settings for the Drupal site.</p>'),
    'dns_ttl' => [
      '#title' => t('DNS TTL'),
      '#description' => t('Reduce DNS TTL to 300s (5 min) 24 hours prior to site launch.'),
    ],
    'site_email' => [
      '#title' => t('Website Email Address'),
      '#description' => t('Ensure that the site email address is neither a kanopistudios.com nor kanopi.com email address.'),
      'handbook_page' => [
        '#text' => t('Basic Site Settings'),
        '#url' => Url::fromRoute('system.site_information_settings'),
      ],
    ],
    'cron_job' => [
      '#title' => t('Cron Job'),
      '#description' => t('Ensure that the real cron job is setup and running once per hour.'),
    ],
    'cron_drupal_core' => [
      '#title' => t('Cron Drupal Core'),
      '#description' => t('Ensure that cron in Drupal Core is disabled'),
      'handbook_page' => [
        '#text' => t('Cron Settings'),
        '#url' => Url::fromRoute('system.cron_settings'),
      ],
    ],
    'status_report_errors' => [
      '#title' => t('Status Report Errors'),
      '#description' => t('Resolve any errors (red) on the status report page.'),
      'handbook_page' => [
        '#text' => t('Status Report'),
        '#url' => Url::fromRoute('system.status'),
      ],
    ],
    'status_report_warnings' => [
      '#title' => t('Status Report Warnings'),
      '#description' => t('Resolve any warnings (yellow) on the Status Report page.'),
      'handbook_page' => [
        '#text' => t('Status Report'),
        '#url' => Url::fromRoute('system.status'),
      ],
    ],
    'logging_reporting' => [
      '#title' => t('Logging and Error Reporting'),
      '#description' => t('Check the Logging and Error Reporting setting and set them to not display any errors or warnings on the site. Errors should only be logged in watchdog on production sites.'),
      'handbook_page' => [
        '#text' => t('Logging and Errors'),
        '#url' => Url::fromRoute('system.logging_settings'),
      ],
    ],
  ];
}
