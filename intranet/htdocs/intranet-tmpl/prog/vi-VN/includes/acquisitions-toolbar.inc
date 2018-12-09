[% INCLUDE 'blocking_errors.inc' %]
<script type="text/javascript">
//<![CDATA[
function confirm_deletion() {
    if (confirm(_("Bạn chắc chắn muốn xóa nhà cung cấp?"))) {
        window.location="/cgi-bin/koha/acqui/supplier.pl?booksellerid=[% booksellerid %]&op=delete";
    }
}
//]]>
</script>
<div id="toolbar" class="btn-toolbar">
 [% IF ( booksellerid ) %]
 <div class="btn-group">
 <a class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown" href="#"><i class="fa fa-plus"></i> Tạo mới <span class="caret"></span>
 </a>
 <ul class="dropdown-menu">
 [% IF CAN_user_acquisition_order_manage && active %]
 <li><a href="/cgi-bin/koha/acqui/basketheader.pl?booksellerid=[% booksellerid %]&amp;op=add_form">Giỏ đặt hàng</a></li>
 [% END %]
 [% IF CAN_user_acquisition_contracts_manage && active %]
 <li><a href="/cgi-bin/koha/admin/aqcontract.pl?op=add_form&amp;booksellerid=[% booksellerid %]">Hợp đồng</a></li>
 [% END %]
 [% IF ( CAN_user_acquisition_vendors_manage ) %]
 <li><a href="/cgi-bin/koha/acqui/supplier.pl?op=enter">Nhà cung cấp</a></li>
 [% END %]
 </ul>
 </div>
 [% IF ( CAN_user_acquisition_vendors_manage ) %]
 <div class="btn-group"><a class="btn btn-default btn-sm" id="editsupplier" href="/cgi-bin/koha/acqui/supplier.pl?booksellerid=[% booksellerid %]&amp;op=enter"><i class="fa fa-pencil"></i> Chỉnh sửa nhà cung cấp</a></div>
 [% UNLESS ( basketcount OR subscriptioncount ) %]
 <div class="btn-group"><a class="btn btn-default btn-sm" id="deletesupplier" href="javascript:confirm_deletion()"><i class="fa fa-trash"></i> Xóa nhà cung cấp</a></div>
 [% END %]
 [% END %]
 [% IF CAN_user_acquisition_order_receive && basketcount %]
 <div class="btn-group"><a class="btn btn-default btn-sm" id="receive" href="/cgi-bin/koha/acqui/parcels.pl?booksellerid=[% booksellerid %]"><i class="fa fa-inbox"></i> Nhận đơn hàng</a></div>
 [% END %]
 [% ELSE %]
 <div class="btn-group"><a class="btn btn-default btn-sm" href="/cgi-bin/koha/acqui/supplier.pl?op=enter"><i class="fa fa-plus"></i> Tạo nhà cung cấp</a></div>
 [% END %]
</div>
