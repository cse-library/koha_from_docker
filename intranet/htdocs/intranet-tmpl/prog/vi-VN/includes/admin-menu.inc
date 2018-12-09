[% USE Koha %]

<div id="navmenu">
<div id="navmenulist">
<h5>Thông số chung hệ thống</h5>
<ul>
 <li><a href="/cgi-bin/koha/admin/preferences.pl">Thông số chung hệ thống</a></li>
</ul>

<h5>Thông số sơ bản</h5>
<ul>
 <li><a href="/cgi-bin/koha/admin/branches.pl">Thư viện</a></li>
 <li><a href="/cgi-bin/koha/admin/library_groups.pl">Library groups</a></li>
 <li><a href="/cgi-bin/koha/admin/itemtypes.pl">Kiểu tài liệu</a></li>
 <li><a href="/cgi-bin/koha/admin/authorised_values.pl">Giá trị định trước</a></li>
</ul>

<h5>Bạn đọc và lưu thông</h5>
<ul>
 <li><a href="/cgi-bin/koha/admin/categories.pl">để kiểm tra lại.</a></li>
 <li><a href="/cgi-bin/koha/admin/smart-rules.pl">Chính sách lưu thông</a></li>
 <li><a href="/cgi-bin/koha/admin/patron-attr-types.pl">Thuộc tính bạn đọc</a></li>
 <li><a href="/cgi-bin/koha/admin/branch_transfer_limits.pl">Chính sách chuyển tài liệu</a></li>
 <li><a href="/cgi-bin/koha/admin/transport-cost-matrix.pl">Giá vận chuyển tài liệu</a></li>
 <li><a href="/cgi-bin/koha/admin/item_circulation_alerts.pl">Cảnh báo lưu thông</a></li>
 <li><a href="/cgi-bin/koha/admin/cities.pl">Thành phố</a></li>
</ul>

<h5>Tìm kiếm</h5>
<ul>
 <li><a href="/cgi-bin/koha/admin/biblio_framework.pl">Khung mẫu biên mục</a></li>
 <li><a href="/cgi-bin/koha/admin/koha2marclinks.pl">Ánh xạ KOHA_MARC</a></li>
 <li><a href="/cgi-bin/koha/admin/fieldmapping.pl">Từ khóa ánh xạ đến MARC</a></li>
 <li><a href="/cgi-bin/koha/admin/checkmarc.pl">Kiểm tra khung mẫu biên mục MARC</a></li>
 <li><a href="/cgi-bin/koha/admin/authtypes.pl">Kiểu dữ liệu kiểm soát</a></li>
 <li><a href="/cgi-bin/koha/admin/classsources.pl">Khung phân loại</a></li>
 <li><a href="/cgi-bin/koha/admin/matching-rules.pl">Quy tắc kiểm soát biểu ghi</a></li>
 <li><a href="/cgi-bin/koha/admin/oai_sets.pl">Cấu hình bộ OAI</a></li>
 <li><a href="/cgi-bin/koha/admin/items_search_fields.pl">Item search fields</a></li>
 [% IF Koha.Preference('SearchEngine') == 'Elasticsearch' %]
 <li><a href="/cgi-bin/koha/admin/searchengine/elasticsearch/mappings.pl">Search engine configuration</a></li>
 [% END %]
</ul>

<h5>THÔNG SỐ PHÂN HỆ BỔ SUNG</h5>

<ul>
 <li><a href="/cgi-bin/koha/admin/currency.pl">Tiền tệ và tỷ giá</a></li>
 <li><a href="/cgi-bin/koha/admin/aqbudgetperiods.pl">Ngân sách</a></li>
 <li><a href="/cgi-bin/koha/admin/aqbudgets.pl">Quỹ</a></li>
 <li><a href="/cgi-bin/koha/admin/edi_accounts.pl">EDI accounts</a></li>
 <li><a href="/cgi-bin/koha/admin/edi_ean_accounts.pl">Library EANs</a></li>
</ul>

[% IF CAN_user_plugins %]
<h5>Tính năng bổ trợ</h5>

<ul>
 <li><a href="/cgi-bin/koha/plugins/plugins-home.pl">Manage plugins</a></li>
</ul>
[% END %]

<h5>Thông số khác</h5>

<ul>
 <!-- <li><a href="/cgi-bin/koha/admin/printers.pl">Network Printers</a></li> -->
 <li><a href="/cgi-bin/koha/admin/z3950servers.pl">Z39.50/SRU servers</a></li>
 <li><a href="/cgi-bin/koha/admin/didyoumean.pl">Tùy chỉnh riêng?</a></li>
 <li><a href="/cgi-bin/koha/admin/columns_settings.pl">Columns settings</a></li>
 <li><a href="/cgi-bin/koha/admin/audio_alerts.pl">Audio alerts</a></li>
 [% IF Koha.Preference('SMSSendDriver') == 'Email' %]
 <li><a href="/cgi-bin/koha/admin/sms_providers.pl">SMS cellular providers</a></li>
 [% END %]
 <li><a href="/cgi-bin/koha/admin/usage_statistics.pl">Share usage statistics</a></li>
</ul>
</div>
</div>
