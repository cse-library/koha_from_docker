<div id="navmenu">
<div id="navmenulist">

<h5>Chạy báo cáo</h5>
<ul>
 [% IF ( CAN_user_reports_execute_reports ) %]<li><a href="/cgi-bin/koha/reports/guided_reports.pl?phase=Use%20saved">Báo cáo được lưu lại</a></li>[% END %]
</ul>
<h5>Từ điển báo cáo</h5>
<ul>
<li><a href="/cgi-bin/koha/reports/dictionary.pl?phase=View%20Dictionary">Xem từ điển</a></li>
</ul>
<h5>Nguồn tham khảo</h5>
<ul>
<li><a href="http://wiki.koha-community.org/wiki/SQL_Reports_Library" target="blank">Báo cáo mẫu Koha</a></li>
<li><a href="http://schema.koha-community.org/" target="blank">Sơ đồ dữ liệu Koha</a></li>
</ul>
</div>
</div>
