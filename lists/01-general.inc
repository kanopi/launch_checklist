<?php

/**
 * @file
 * Adds a checklist to launch_checklist.
 */

'01_general' => [
  '#title' => t('General'),
  '#description' => t('<p>General settings for the Drupal site.</p>'),
  'site_information_email' => [
    '#title' => t('Verify the site information uses client email'),
    '#description' => t('The From address in automated emails sent during registration and new password requests, and other notifications.'),
    'handbook_page' => [
      '#text' => t('Site Information Email'),
      '#url' => Url::fromUri('/admin/config/system/site-information'),
    ],
  ],
  'site_information_name' => [
    '#title' => t('Verify the site title tag is correct'),
    '#description' => t('Make sure the Site name field is correct.'),
    'handbook_page' => [
      '#text' => t('Site Information Name'),
      '#url' => Url::fromUri('/admin/config/system/site-information'),
    ],
  ],
  'favicon' => [
    '#title' => t('Favicon'),
    '#description' => t('Verify Favicon is correct.'),
    'handbook_page' => [
      '#text' => t('Front page of site.'),
      '#url' => Url::fromUri('/'),
    ],
  ],
],
