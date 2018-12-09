[% USE Asset %]
[% USE AudioAlerts %]
[%# Prevent XFS attacks -%]
[% UNLESS popup %]
 <script type="text/javascript">
       if (self === top) {
           var antiClickjack = document.getElementById("antiClickjack");
           antiClickjack.parentNode.removeChild(antiClickjack);
       } else {
           top.location = self.location;
       }
    </script>
[% END %]

[% Asset.js("lib/jquery/jquery-2.2.3.min.js") %]
[% Asset.js("lib/jquery/jquery-migrate-1.3.0.min.js") %]
[% Asset.js("lib/jquery/jquery-ui-1.11.4.min.js") %]
[% Asset.js("lib/shortcut/shortcut.js") %]
[% Asset.js("lib/jquery/plugins/jquery.cookie.min.js") %]
[% Asset.js("lib/jquery/plugins/jquery.highlight-3.js") %]
[% Asset.js("lib/bootstrap/bootstrap.min.js") %]
[% Asset.js("lib/jquery/plugins/jquery.validate.min.js") %]
<!-- koha core js -->
[% Asset.js("js/staff-global.js") %]
[% Asset.js("js/commons.js") %]

[% INCLUDE 'validator-strings.inc' %]
[% IF ( IntranetUserJS ) %]
 <script type="text/javascript">
    //<![CDATA[
    [% IntranetUserJS %]
    //]]>
    </script>
[% END %]

[% IF ( virtualshelves || intranetbookbag ) %]
<script type="text/javascript">
    //<![CDATA[
        var MSG_BASKET_EMPTY = _("Giỏ tài liệu trống");
        var MSG_RECORD_IN_BASKET = _("Tài liệu này đã có trong giỏ tài liệu của bạn");
        var MSG_RECORD_ADDED = _("Tài liệu này đã được thêm vào giỏ tài liệu của bạn");
        var MSG_NRECORDS_ADDED = _("%s item(s) added to your cart");
        var MSG_NRECORDS_IN_BASKET = _("%s already in your cart");
        var MSG_NO_RECORD_SELECTED = _("Không có tài liệu nào được chọn");
        var MSG_NO_RECORD_ADDED = _("No item was added to your cart (already in your cart)!");
        var MSG_CONFIRM_DEL_BASKET = _("Bạn chắc chắn muốn xóa giỏ tài liệu của bạn?");
        var MSG_CONFIRM_DEL_RECORDS = _("Bạn chắc chắn muốn loại bỏ các tài liệu đã chọn?");
        var MSG_IN_YOUR_CART = _("Items in your cart: %s");
        var MSG_NON_RESERVES_SELECTED = _("Một hoặc một số tài liệu đã chọn không thể đặt mượn.");
        var MSG_ITEM_NOT_IN_CART = _("Thêm vào giỏ tài liệu");
        var MSG_ITEM_IN_CART = _("In your cart");
        var MSG_RECORD_REMOVED = _("The item has been removed from your cart");
    //]]>
    </script>

 [% Asset.js("js/basket.js") %]
[% END %]

[% IF LocalCoverImages %]
 [% Asset.js("js/localcovers.js") %]
 <script type="text/javascript">
        //<![CDATA[
            var NO_LOCAL_JACKET = _("Không có ảnh bìa");
        //]]>
    </script>
[% END %]

[% IF Koha.Preference('AudioAlerts') || AudioAlertsPage %]
 <script type="text/javascript">
        //<![CDATA[
            var AUDIO_ALERT_PATH = '[% interface %]/[% theme %]/sound/';
            var AUDIO_ALERTS = JSON.parse( '[% AudioAlerts.AudioAlerts | replace( "'", "\\'" ) | replace( '"', '\\"' ) %]' );
        //]]>

        $( document ).ready(function() {
            if ( AUDIO_ALERTS ) {
                for ( var k in AUDIO_ALERTS ) {
                    var alert = AUDIO_ALERTS[k];
                    if ( $( alert.selector ).length ) {
                        playSound( alert.sound );
                        break;
                    }
                }
            }
        });
    </script>
[% END %]

[% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
 [% IF ( CircAutocompl ) %]
 <script type="text/javascript">
            $(document).ready(function(){
                var obj = $( "#findborrower" ).autocomplete({
                    source: "/cgi-bin/koha/circ/ysearch.pl",
                    minLength: 3,
                    select: function( event, ui ) {
                        $( "#findborrower" ).val( ui.item.cardnumber );
                        $("#patronsearch").submit();
                        return false;
                    }
                }).data( "ui-autocomplete" );
                if( obj ) {
                    obj._renderItem = function( ul, item ) {
                        return $( "<li></li>" )
                        .data( "ui-autocomplete-item", item )
                        .append( "<a>" + item.surname + ", " + item.firstname + " (" + item.cardnumber + ") <small>" + item.dateofbirth + " " + item.address + " " + item.city + " " + item.zipcode + " " + item.country + "</small></a>" )
                        .appendTo( ul );
                    };
                }
            });
        </script>
 [% END %]
[% END %]
