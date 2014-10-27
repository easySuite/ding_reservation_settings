<?php
/**
 * @file
 *  Admin functionality.
 */

/**
 * Administration form.
 *
 * @param $form
 * @param $form_state
 */
function ding_reservation_settings_admin_form($form, &$form_state) {

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
    '#default_value' => variable_get('ding_quick_reservation', FALSE),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Admin form submit.
 *
 * @see ding_reservation_settings_admin_form().
 */
function ding_reservation_settings_admin_form_submit($form, &$form_state) {
  variable_set('ding_quick_reservation', $form_state['values']['ding_quick_reservation']);
}
