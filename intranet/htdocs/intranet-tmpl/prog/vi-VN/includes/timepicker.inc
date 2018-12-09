<script type="text/javascript">
    //<![CDATA[

        /* Localization of the timepicker plugin */
        jQuery(function($){
            $.timepicker.regional[''] = {
                currentText: _("Hiện tại"),
                closeText: _("Thoát"),
                amNames: [_("AM"), _("A")],
                pmNames: [_("PM"), _("P")],
                timeSuffix: "",
                timeOnlyTitle: _("Choose time"),
                timeText: _("Thời gian"),
                hourText: _("Giờ"),
                minuteText: _("Phút"),
                secondText: _("Lần 2"),
                millisecText: _("Mili giây"),
                microsecText: _("Micro giây"),
                timezoneText: _("Múi giờ"),
                [% IF ( bidi ) %] isRTL: true [% ELSE %] isRTL: false [% END %]
            };
            $.timepicker.setDefaults($.timepicker.regional['']);
        });

    //]]>
</script>
