<?php

/**
 * @file
 * Admin functionality.
 */

/**
 * Administration form.
 *
 * @param array $form
 *   Form definition.
 * @param array $form_state
 *   Form state.
 *
 * @return array
 *   Form definition.
 */
function ding_reservation_settings_admin_form(array $form, array &$form_state) {

  $quick_reservation = array(
    0 => t('Disable quick reservation.'),
    1 => t('Enable quick reservation.'),
  );

  $form['ding_reservation_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Quick reservation settings.'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['ding_reservation_settings']['ding_quick_reservation'] = array(
    '#type' => 'radios',
    '#title' => t('Quick reservation.'),
    '#options' => $quick_reservation,
    '#default_value' => variable_get('ding_quick_reservation', TRUE),
  );

  return system_settings_form($form);
}
