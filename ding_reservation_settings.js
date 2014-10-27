(function ($) {
  $(document).ready(function () {
    var checkbox_ids = '#edit-profile-provider-alma-field-quick-reservation-und'
      + ', #edit-profile-provider-openruth-field-quick-reservation-und';
    var dropdown_ids = '#edit-profile-provider-alma-field-alma-preferred-branch-und'
      + ', #edit-profile-provider-alma-field-alma-interest-period-und'
      + ', #edit-profile-provider-openruth-openruth-preferred-branch-und'
      + ', #edit-profile-provider-openruth-field-openruth-interest-period-und';

    $(checkbox_ids).click(function () {
      if (Drupal.settings.ding_reservation_settings.quick_reservation === "0") {
        if ($(this).is(':checked')) {
          $(dropdown_ids).attr('disabled', false);
        }
        else {
          $(dropdown_ids).attr('disabled', true);
        }
      }
      else {
        if ($(this).is(':checked')) {
          $(dropdown_ids).attr('disabled', true);
        }
        else {
          $(dropdown_ids).attr('disabled', false);
        }
      }
    });
  });
})(jQuery);
