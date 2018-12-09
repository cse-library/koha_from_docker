[% USE Branches %]
<div id="navmenu">
 <div id="navmenulist">

 <ul>
 <li><a href="/cgi-bin/koha/circ/circulation-home.pl">Circulation home</a></li>
 </ul>

 <h5>Phân hệ lưu thông</h5>
 <ul>
 <li><a href="/cgi-bin/koha/circ/circulation.pl">Ghi mượn</a></li>
 <li><a href="/cgi-bin/koha/circ/returns.pl">Ghi Trả</a></li>
 <li><a href="/cgi-bin/koha/circ/renew.pl">Gia hạn</a></li>
 [% IF Branches.InIndependentBranchesMode %]
 <li><a href="/cgi-bin/koha/circ/branchtransfers.pl">Chuyển tài liệu</a></li>
 [% END %]
 [% IF ( AutoLocation ) %][% ELSE %][% IF ( IndependentBranches ) %][% ELSE %]
 <li><a href="/cgi-bin/koha/circ/selectbranchprinter.pl">Chọn thư viện</a></li>
 [% END %][% END %]
 [% IF ( fast_cataloging ) %][% IF ( CAN_user_editcatalogue_fast_cataloging ) %]
 <li><a href="/cgi-bin/koha/cataloguing/addbiblio.pl?frameworkcode=FA">Biên mục nhanh</a></li>
 [% END %][% END %]
 </ul>

 <h5>Circulation reports</h5>
 <ul>
 <li><a href="/cgi-bin/koha/circ/view_holdsqueue.pl">Danh sách bạn đọc đặt mượn đầu tiên trên tài liệu</a></li>
 <li><a href="/cgi-bin/koha/circ/pendingreserves.pl">Đặt mượn chờ đáp ứng</a></li>
 <li><a href="/cgi-bin/koha/circ/waitingreserves.pl">Đặt mượn chờ bạn đọc nhận tài liệu</a></li>
 <li><a href="/cgi-bin/koha/circ/reserveratios.pl">Tỉ lệ đặt mượn</a></li>
 <li><a href="/cgi-bin/koha/circ/transferstoreceive.pl">Nhận tài liệu chuyển về thư viện</a></li>
 [% IF ( CAN_user_circulate_overdues_report ) %]
 <li><a href="/cgi-bin/koha/circ/overdue.pl">Quá hạn</a></li>
 [% END %]
 <li><a href="/cgi-bin/koha/circ/branchoverdues.pl">Tiền phạt quá hạn</a></li>
 [% IF Koha.Preference('OnSiteCheckouts') %]
 <li><a href="/cgi-bin/koha/circ/on-site_checkouts.pl">Pending on-site checkouts</a></li>
 [% END %]
 </ul>

 </div>
</div>
