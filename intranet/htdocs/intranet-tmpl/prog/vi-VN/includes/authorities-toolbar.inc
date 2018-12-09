[% INCLUDE 'blocking_errors.inc' %]
[% IF ( authid || CAN_user_editauthorities) %]

 <div id="toolbar" class="btn-toolbar">
 [% IF ( CAN_user_editauthorities ) %]
 <div class="btn-group">
 <a class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown" href="#">
 <i class="fa fa-plus"></i> Tạo dữ liệu kiểm soát <span class="caret"></span>
 </a>
 <ul class="dropdown-menu">
 [% IF servers.count > 0 %]
 <li><a id="z3950_new" href="#">Tìm kiếm qua Z39.50</a></li>
 <li role="separator" class="divider"></li>
 [% END %]
 [% FOREACH authority_type IN authority_types %]
 <li><a href="/cgi-bin/koha/authorities/authorities.pl?authtypecode=[% authority_type.authtypecode %]">[% authority_type.authtypetext %]</a></li>
 [% END %]
 </ul>
 </div>
 [% END %]

 [% IF ( authid ) %]
 [% IF ( CAN_user_editauthorities ) %]
 <div class="btn-group">
 <button class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown">
 <i class="fa fa-pencil"></i> Chỉnh sửa <span class="caret"></span>
 </button>
 <ul class="dropdown-menu">
 <li><a id="editAuth" href="/cgi-bin/koha/authorities/authorities.pl?authid=[% authid %]">Sửa biểu ghi</a></li>
 <li><a id="dupAuth" href="/cgi-bin/koha/authorities/authorities.pl?authid=[% authid %]&amp;op=duplicate">Sao chép biểu ghi</a></li>
 [% IF servers.count > 0 %]
 <li><a id="z3950_replace" href="#">Replace record via Z39.50/SRU</a></li>
 [% END %]
 [% UNLESS ( count ) %]
 <li><a href="#" id="delAuth">Xóa biểu ghi</a></li>
 [% END %]
 </ul>
 </div>
 [% END %]

 <div class="btn-group">
 <a class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown" href="#"><i class="fa fa-download"></i> Lưu <span class="caret"></span>
 </a>
 <ul class="dropdown-menu">
 <li><a href="/cgi-bin/koha/authorities/export.pl?format=mads&amp;op=export&amp;authid=[% authid %]">MADS (XML)</a></li>
 <li><a href="/cgi-bin/koha/authorities/export.pl?format=marcxml&amp;op=export&amp;authid=[% authid %]">MARCXML</a></li>
 <li><a href="/cgi-bin/koha/authorities/export.pl?format=marc8&amp;op=export&amp;authid=[% authid %]">MARC (non-Unicode/MARC-8)</a></li>
 <li><a href="/cgi-bin/koha/authorities/export.pl?format=utf8&amp;op=export&amp;authid=[% authid %]">MARC (Unicode/UTF-8)</a></li>
 </ul>
 </div>
 [% END %]
 </div>

[% END %]
