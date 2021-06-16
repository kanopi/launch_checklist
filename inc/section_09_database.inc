<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

/**
 * Generates are returns section 9 for launch_checklist.
 */
function section_09_database() {

  return [

  // Section 9 Database.
    '#title' => t('Database'),
    '#description' => t('<p>Database settings for the Drupal site.</p>'),

    'database_backup' => [
      '#title' => t('Database Backups'),
      '#description' => t('Ensure that a daily scheduled database backup has been created using backup and migrate and that it is saving at least 7 days worth of backups, but not unlimited backups.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'daily_backup' => [
      '#title' => t('Daily Backup'),
      '#description' => t('Manually test the daily backup to ensure that the backup is generated and saved successfully. Check that the daily backup is running successfully when cron runs.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'aes_module' => [
      '#title' => t('AES Module'),
      '#description' => t('For sites that contain sensitive data, ensure that the AES module is installed and backups are encrypted.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'private_files_directory' => [
      '#title' => t('Private Files Directory'),
      '#description' => t('Check that the Private files directory is actually outside of the document root (eg. outside the public_html folder).'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
  ];
}
