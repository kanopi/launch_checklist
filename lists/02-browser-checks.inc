<?php

/**
 * @file
 * Adds a checklist to launch_checklist.
 */

'i_suck' => [
  '#title' => t('I suck'),
  '#description' => t('<p>Gain these skills to pass the <em><a href="http://headrush.typepad.com/creating_passionate_users/2005/10/getting_users_p.html">suck threshold</a></em> and start being creative with Drupal.</p>'),
  'install_configure' => [
    '#title' => t('Installation and configuration of Drupal core'),
    '#description' => t('Prepare for installation, run the installation script, and take the steps that should be done after the installation script has completed.'),
    'handbook_page' => [
      '#text' => t('Installation Guide'),
      '#url' => Url::fromUri('http://drupal.org/documentation/install'),
    ],
  ],
  'node_system' => [
    '#title' => t('Node system'),
    '#description' => t('Perform a variety of operations on one or more nodes.'),
    'handbook_page' => [
      '#text' => t('Manage nodes'),
      '#url' => Url::fromUri('http://drupal.org/node/306808'),
    ],
  ],
  'block_system' => [
    '#title' => t('Block system'),
    '#description' => t('Create blocks and adjust their appearance, shape, size and position.'),
    'handbook_page' => [
      '#text' => t('Working with blocks (content in regions)'),
      '#url' => Url::fromUri('http://drupal.org/documentation/modules/block'),
    ],
  ],
  'users' => [
    '#title' => t('Users, roles and permissions'),
    '#description' => t('Create and manage users and access control.'),
    'handbook_page' => [
      '#text' => t('Managing users'),
      '#url' => Url::fromUri('http://drupal.org/node/627158'),
    ],
  ],
  'contrib' => [
    '#title' => t('Installing contributed themes and modules'),
    '#description' => t('Customize Drupal to your tastes by adding modules and themes.'),
    'handbook_page' => [
      '#text' => t('Installing modules and themes'),
      '#url' => Url::fromUri('http://drupal.org/documentation/install/modules-themes'),
    ],
  ],
],
