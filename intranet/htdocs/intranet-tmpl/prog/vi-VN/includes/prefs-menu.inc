<div id="menu">
<ul>
[% IF ( acquisitions ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Phân hệ bổ sung" href="/cgi-bin/koha/admin/preferences.pl?tab=acquisitions">Phân hệ bổ sung</a></li>
[% IF ( admin ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=admin" title="Quản trị hệ thống">Quản trị hệ thống</a></li>
[% IF ( authorities ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Thiết lập thông số dữ liệu kiểm soát" href="/cgi-bin/koha/admin/preferences.pl?tab=authorities">Dữ liệu kiểm soát</a></li>
[% IF ( cataloguing ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=cataloguing" title="Phân hệ biên mục">Phân hệ biên mục</a></li>
[% IF ( circulation ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Phân hệ lưu thông" href="/cgi-bin/koha/admin/preferences.pl?tab=circulation">Phân hệ lưu thông</a></li>
[% IF ( enhanced_content ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=enhanced_content" title="Thiết lập nội dung nâng cao">NỘI DUNG NÂNG CAO</a></li>
[% IF ( i18n_l10n ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Thiết lập thông số ngôn ngữ hiển thị" href="/cgi-bin/koha/admin/preferences.pl?tab=i18n_l10n">NGÔN NGỮ HIỂN THỊ</a></li>
[% IF ( local_use ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/systempreferences.pl">Sử dụng nội bộ</a></li>
[% IF ( logs ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=logs" title="Chế độ ghi Log">Nhật ký hệ thống</a></li>
[% IF ( opac ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Thiết lập thông số giao diện OPAC" href="/cgi-bin/koha/admin/preferences.pl?tab=opac">Giao diện OPAC</a></li>
[% IF ( patrons ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=patrons" title="Bạn đọc">Bạn đọc</a></li>
[% IF ( searching ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=searching" title="TÌM KIẾM">TÌM KIẾM</a></li>
[% IF ( serials ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=serials" title="Ấn phẩm định kỳ">Ấn phẩm định kỳ</a></li>
[% IF ( staff_client ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=staff_client" title="GIAO DIỆN NHÂN VIÊN">GIAO DIỆN NHÂN VIÊN</a></li>
[% IF ( tools ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Công cụ bổ trợ" href="/cgi-bin/koha/admin/preferences.pl?tab=tools">Công cụ bổ trợ</a></li>
[% IF ( web_services ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=web_services" title="Thiết lập thông số dịch vụ WEB">Thiết lập thông số dịch vụ WEB</a></li>
</ul>
</div>
