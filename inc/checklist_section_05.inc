<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

use Drupal\Core\Url;

/**
 * Generates are returns section 5 for launch_checklist.
 */
function populate_section_05() {

  // Check if module exists.
  $moduleHandler = \Drupal::service('module_handler');

  return [

  // Section 5 User Permissions.
    '#title' => t('User Permissions'),
    '#description' => t('<p>User Permission settings for the Drupal site.</p>'),

    'manager_permissions' => [
      '#title' => t('Manager Permissions'),
      '#description' => t('Ensure managers have the ability to manage users.'),
      'handbook_page' => [
        '#text' => t('Site User Roles'),
        '#url' => Url::fromRoute('entity.user_role.collection'),
      ],
    ],
    'user_sign_up_settings' => [
      '#title' => t('User Sign Up Settings'),
      '#description' => t("Check user sign up settings and ensure users can't sign up without approval."),
      'handbook_page' => [
        '#text' => t('Registration and Cancellation Settings'),
        '#url' => Url::fromRoute('entity.user.admin_form'),
      ],
    ],
    'all_user_permissions' => [
      '#title' => t('All User Permissions'),
      '#description' => t('Check all user permissions and ensure all roles have relevant permissions.'),
      'handbook_page' => [
        '#text' => t('Site User Permissions'),
        '#url' => Url::fromRoute('user.admin_permissions'),
      ],
    ],
    'relevant_roles' => [
      '#title' => t('Relevant Roles'),
      '#description' => t('Ensure all (relevant) roles have the ability to login and logout.'),
      'handbook_page' => [
        '#text' => t('Site User Roles'),
        '#url' => Url::fromRoute('entity.user_role.collection'),
      ],
    ],
  ];
}
