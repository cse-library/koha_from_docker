[% INCLUDE 'blocking_errors.inc' %]

<div id="toolbar" class="btn-toolbar">
 <div class="btn-group"><a id="newshelf" class="btn btn-default btn-sm" href="/cgi-bin/koha/virtualshelves/shelves.pl?op=add_form&amp;referer=[% op %]"><i class="fa fa-plus"></i> Tạo giá sách ảo</a></div>

 [% IF shelf AND op == 'view' %]
 [% IF can_manage_shelf %]
 <div class="btn-group">
 <button class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown"><i class="fa fa-pencil"></i> Chỉnh sửa <span class="caret"></span></button>
 <ul class="dropdown-menu">
 <li><a href="/cgi-bin/koha/virtualshelves/shelves.pl?op=edit_form&amp;shelfnumber=[% shelf.shelfnumber %]&amp;referer=[% op %]">Sửa giá sách ảo</a></li>
 <li><a id="deleteshelf" href="/cgi-bin/koha/virtualshelves/shelves.pl?op=delete&amp;shelfnumber=[% shelf.shelfnumber %]">Xóa giá sách ảo</a></li>
 </ul>
 </div>
 [% END %]

 <div class="btn-group">
 <button class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown"><i class="fa fa-download"></i> Tải giá sách ảo <span class="caret"></span></button>
 <ul class="dropdown-menu">
 <li><a href="/cgi-bin/koha/virtualshelves/downloadshelf.pl?format=iso2709&amp;shelfid=[% shelf.shelfnumber %]">iso2709</a></li>
 <li><a href="/cgi-bin/koha/virtualshelves/downloadshelf.pl?format=ris&amp;shelfid=[% shelf.shelfnumber %]">RIS</a></li>
 <li><a href="/cgi-bin/koha/virtualshelves/downloadshelf.pl?format=bibtex&amp;shelfid=[% shelf.shelfnumber %]">BibTex</a></li>
 [% FOREACH csv_profile IN csv_profiles %]
 <li><a href="/cgi-bin/koha/virtualshelves/downloadshelf.pl?format=[% csv_profile.export_format_id %]&amp;shelfid=[% shelf.shelfnumber %]">CSV - [% csv_profile.profile %]</a></li>
 [% END %]
 </ul>
 </div>
 <div class="btn-group"><a class="btn btn-default btn-sm" href="#" id="sendlist"><i class="fa fa-envelope"></i> Gửi giá sách ảo</a></div>
 <div class="btn-group"><a class="btn btn-default btn-sm" id="printlist" target="_blank" href="/cgi-bin/koha/virtualshelves/shelves.pl?op=view&amp;shelfnumber=[% shelf.shelfnumber %]&amp;print=1"><i class="fa fa-print"></i> In</a></div>
 [% END %]
</div>
