<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

use Drupal\Core\Url;

/**
 * Generates are returns section 8 for launch_checklist.
 */
function populate_section_08() {

  return [

  // Section 8 Performance and Security.
    '#title' => t('Performance and Security'),
    '#description' => t('<p>Performance and Security settings for the Drupal site.</p>'),

    'load_testing' => [
      '#title' => t('Load Testing'),
      '#description' => t('Run load tests to ensure the site can easily withstand traffic spikes.'),
      // @todo what is the route?
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'xhprof_performance' => [
      '#title' => t('Profiling Pages with XHProf'),
      '#description' => t('Profiling pages using XHProf to root out any performance killing bottlenecks.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'page_caching' => [
      '#title' => t('Page Caching'),
      '#description' => t('Ensure that page caching is enabled.'),
      'handbook_page' => [
        '#text' => t('Site Performance Settings'),
        '#url' => Url::fromRoute('system.admin_content'),
      ],
    ],
    'css_aggregation' => [
      '#title' => t('CSS Aggregation and Compression'),
      '#description' => t('Ensure that CSS aggregation and compression is enabled.'),
      'handbook_page' => [
        '#text' => t('Site Performance Settings'),
        '#url' => Url::fromRoute('system.admin_content'),
      ],
    ],
    'js_aggregation' => [
      '#title' => t('JS aggregation'),
      '#description' => t('Ensure that JS aggregation is enabled.'),
      'handbook_page' => [
        '#text' => t('Site Performance Settings'),
        '#url' => Url::fromRoute('system.admin_content'),
      ],
    ],
    'visibility' => [
      '#title' => t('Visibility'),
      '#description' => t('Check the visibility setting for every enabled block and make sure that the visibility (pages/content types/roles/users) is restricted appropriately.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'php_filter' => [
      '#title' => t('PHP Filter'),
      '#description' => t('Ensure that the PHP filter is disabled.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'block_caching' => [
      '#title' => t('Block Caching'),
      '#description' => t('Ensure that block caching is turned on, if possible.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'min_max_cache' => [
      '#title' => t('Min/Max Cache Lifetime'),
      '#description' => t('Ensure that the minimum/maximium cache lifetime are set if/as necessary.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'unused_modules' => [
      '#title' => t('Unused Modules'),
      '#description' => t('Ensure that all modules not in use are disabled and uninstalled.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'dev_modules' => [
      '#title' => t('Development Modules'),
      '#description' => t('Ensure that development modules (eg. Views/UI/Rules UI) are disabled. The UI modules should only be enabled when they are actually being used and disabled again afterwards.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'tracking_modules' => [
      '#title' => t('Tracking Modules'),
      '#description' => t('Ensure modules such as Statistics and Tracker (and any other logging modules) are disabled (unless absolutely necessary or as requested by a client) to reduce overhead on every page load.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'upload_fields' => [
      '#title' => t('Audit Upload Fields'),
      '#description' => t('Audit fields that allow for upload and make sure they do not allow the following unsafe extensions: flv, swf, exe, html, htm, php, phtml, py, js, vb, vbe, vbs.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'base_url' => [
      '#title' => t('Base URL'),
      '#description' => t('Ensure that the settings.php file includes a defined base URL.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'security_kit' => [
      '#title' => t('Security Kit Module'),
      '#description' => t('Install the security kit module and configure appropriately for security hardening.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'security_review' => [
      '#title' => t('Security Review Module'),
      '#description' => t('Evaluate the site using the security review module.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'views_permissions' => [
      '#title' => t('Views Permissions'),
      '#description' => t('Ensure that views have defined permissions.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'linux_permissions' => [
      '#title' => t('Linux Permissions'),
      '#description' => t('Ensure that linux permissions on files and private-files directories are correct.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
    'settings_php' => [
      '#title' => t('Permissions in settings.php'),
      '#description' => t('Ensure permissions in the settings.php files are correct.'),
      // 'handbook_page' => array(
      // '#text' => t( 'Google Analytics module' ),
      // '#url' => $google_anaytics_route,
    ],
  ];
}
