[% INCLUDE 'blocking_errors.inc' %]
<div id="toolbar" class="btn-toolbar">
 <div class="btn-group">
 <a class="btn btn-default btn-sm" href="/cgi-bin/koha/rotating_collections/editCollections.pl?action=new"><i class="fa fa-plus"></i> New collection</a>
 </div>

 [% IF ( colId ) %]
 <div class="btn-group">
 <a class="btn btn-default btn-sm" href="/cgi-bin/koha/rotating_collections/transferCollection.pl?colId=[% colId %]"><i class="fa fa-exchange"></i> Chuyển tài liệu</a>
 </div>
 <div class="btn-group">
 <a class="btn btn-default btn-sm" href="/cgi-bin/koha/rotating_collections/editCollections.pl?action=edit&amp;colId=[% colId %]"><i class="fa fa-pencil"></i> Chỉnh sửa</a>
 </div>
 <div class="btn-group">
 <a class="btn btn-default btn-sm confirmdelete" href="/cgi-bin/koha/rotating_collections/editCollections.pl?action=delete&amp;colId=[% colId %]"><i class="fa fa-trash"></i> Xóa</a>
 </div>
 [% END %]
</div>
