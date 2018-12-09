[% INCLUDE 'blocking_errors.inc' %]
<div id="toolbar" class="btn-toolbar">

[% IF ( CAN_user_editcatalogue_edit_catalogue || CAN_user_editcatalogue_edit_items || CAN_user_serials_create_subscription ) %] <div class="btn-group">
 <button class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown"><i class="fa fa-plus"></i> Tạo mới <span class="caret"></span></button>
 <ul class="dropdown-menu">
 [% IF ( CAN_user_editcatalogue_edit_catalogue ) %]
 <li><a id="newbiblio" href="/cgi-bin/koha/cataloguing/addbiblio.pl">Tạo biểu ghi</a></li>
 [% END %]

 [% IF ( CAN_user_editcatalogue_edit_items ) %]
 <li><a id="newitem" href="/cgi-bin/koha/cataloguing/additem.pl?biblionumber=[% biblionumber %]#additema">Tạo bản tài liệu</a></li>
 [% END %]
 [% IF ( CAN_user_serials_create_subscription ) %]
 <li><a id="newsub" href="/cgi-bin/koha/serials/subscription-add.pl?biblionumber_for_new_subscription=[% biblionumber %]">Tạo ÂPĐK</a></li>
 [% END %]

 [% IF ( EasyAnalyticalRecords && CAN_user_editcatalogue_edit_catalogue ) %]
 <li><a href="/cgi-bin/koha/catalogue/detail.pl?biblionumber=[% biblionumber %]&amp;analyze=1">Sửa tài liệu chủ</a></li>
 [% END %]
 [% IF CAN_user_editcatalogue_edit_catalogue && ! EasyAnalyticalRecords %]
 <li><a href="/cgi-bin/koha/cataloguing/addbiblio.pl?parentbiblionumber=[% biblionumber %]">Sao chép biểu ghi</a></li>
 [% END %]
 </ul>
 </div>
[% END %]

[% IF ( CAN_user_editcatalogue_edit_catalogue || CAN_user_editcatalogue_edit_items || CAN_user_tools_items_batchmod || CAN_user_tools_items_batchdel ) or ( frameworkcode == 'FA' and CAN_user_editcatalogue_fast_cataloging ) %]
 <div class="btn-group">
 <button class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown"><i class="fa fa-pencil"></i> Chỉnh sửa <span class="caret"></span></button>
 <ul class="dropdown-menu">
 [% IF CAN_user_editcatalogue_edit_catalogue or ( frameworkcode == 'FA' and CAN_user_editcatalogue_fast_cataloging ) %]
 <li><a id="editbiblio" href="/cgi-bin/koha/cataloguing/addbiblio.pl?biblionumber=[% biblionumber %]">Sửa biểu ghi</a></li>
 [% END %]

 [% IF CAN_user_editcatalogue_edit_items or ( frameworkcode == 'FA' and CAN_user_editcatalogue_fast_cataloging ) %]
 <li><a id="edititems" href="/cgi-bin/koha/cataloguing/additem.pl?biblionumber=[% biblionumber %]">Bản tài liệu</a></li>
 [% END %]

 [% IF ( CAN_user_tools_items_batchmod ) %]
 [% IF ( count ) %]
 <li><a id="batchedit" href="/cgi-bin/koha/tools/batchMod.pl?op=show&amp;biblionumber=[% biblionumber %]&amp;src=CATALOGUING">Sửa bản tài liệu theo lô</a></li>
 [% ELSE %]
 <li class="disabled"><a id="batchedit-disabled" href="#" data-toggle="tooltip" data-placement="left" title="This record has no items">Sửa bản tài liệu theo lô</a></li>
 [% END %]
 [% END %]

 [% IF ( CAN_user_tools_items_batchdel ) %]
 [% IF ( count ) %]
 <li><a id="batchdelete" href="/cgi-bin/koha/tools/batchMod.pl?del=1&amp;op=show&amp;biblionumber=[% biblionumber %]&amp;src=CATALOGUING">Xóa bản tài liệu theo lô</a></li>
 [% ELSE %]
 <li class="disabled"><a id="batchdelete-disabled" href="#" data-toggle="tooltip" data-placement="left" title="This record has no items">Xóa bản tài liệu theo lô</a></li>
 [% END %]
 [% END %]

 [% IF ( CAN_user_editcatalogue_edit_items ) %]<li><a href="/cgi-bin/koha/cataloguing/moveitem.pl?biblionumber=[% biblionumber %]">Lấy tài liệu từ biểu ghi khác</a></li>[% END %]

 [% IF ( EasyAnalyticalRecords ) %][% IF ( CAN_user_editcatalogue_edit_items ) %]<li><a href="/cgi-bin/koha/cataloguing/linkitem.pl?biblionumber=[% biblionumber %]">Tài liệu chủ</a>[% END %][% END %]
 [% IF ( LocalCoverImages || OPACLocalCoverImages) %][% IF ( CAN_user_tools_upload_local_cover_images ) %]<li><a href="/cgi-bin/koha/tools/upload-cover-image.pl?biblionumber=[% biblionumber %]&amp;filetype=image">Thêm ảnh bìa</a>[% END %][% END %]

 [% IF ( CAN_user_editcatalogue_edit_catalogue ) %]
 <li><a id="duplicatebiblio" href="/cgi-bin/koha/cataloguing/addbiblio.pl?biblionumber=[% biblionumber %]&amp;op=duplicate">Sao chép biểu ghi</a></li>
 <li><a href="#" id="z3950copy">Replace record via Z39.50/SRU</a></li>
 [% END %]

 [% IF CAN_user_editcatalogue_edit_catalogue or ( frameworkcode == 'FA' and CAN_user_editcatalogue_fast_cataloging ) %]
 [% IF ( count ) %]
 <li class="disabled"><a id="deletebiblio" href="#" data-toggle="tooltip" data-placement="left" title="[% count %] tài liệu đính kèm với biểu ghi này. Bạn phải xóa tất cả tài liệu trước khi xóa biểu ghi thư mục.">Xóa biểu ghi</a></li>
 [% ELSE %]
 <li><a id="deletebiblio" data-order-manage="[% CAN_user_acquisition_order_manage %]" href="#">Xóa biểu ghi</a></li>
 [% END %]
 [% END %]

 [% IF CAN_user_editcatalogue_delete_all_items or ( frameworkcode == 'FA' and CAN_user_editcatalogue_fast_cataloging ) %]
 [% IF ( count ) %]
 <li><a href="#" id="deleteallitems">Xóa tất cả bản tài liệu</a></li>
 [% ELSE %]
 <li class="disabled"><a href="#" id="deleteallitems-disabled" data-toggle="tooltip" data-placement="left" title="This record has no items">Xóa tất cả bản tài liệu</a></li>
 [% END %]
 [% END %]

 </ul>
 </div>
[% END %]

 <div class="btn-group">
 <button class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown"><i class="fa fa-download"></i> Lưu <span class="caret"></span></button>
 <ul class="dropdown-menu">
 <li><a href="/cgi-bin/koha/catalogue/export.pl?format=bibtex&amp;op=export&amp;bib=[% biblionumber %]">BibTex</a></li>
 <li><a href="#" data-toggle="modal" data-target="#exportModal_">Dublin Core</a></li>
 <li><a href="/cgi-bin/koha/catalogue/export.pl?format=marcxml&amp;op=export&amp;bib=[% biblionumber %]">MARCXML</a></li>
 <li><a href="/cgi-bin/koha/catalogue/export.pl?format=marc8&amp;op=export&amp;bib=[% biblionumber %]">MARC (non-Unicode/MARC-8)</a></li>
 <li><a href="/cgi-bin/koha/catalogue/export.pl?format=utf8&amp;op=export&amp;bib=[% biblionumber %]">MARC (Unicode/UTF-8)</a></li>
 <li><a href="/cgi-bin/koha/catalogue/export.pl?format=marcstd&amp;op=export&amp;bib=[% biblionumber %]">MARC (Unicode/UTF-8, Standard)</a></li>
 <li><a href="/cgi-bin/koha/catalogue/export.pl?format=mods&amp;op=export&amp;bib=[% biblionumber %]">MODS (XML)</a></li>
 <li><a href="/cgi-bin/koha/catalogue/export.pl?format=ris&amp;op=export&amp;bib=[% biblionumber %]">RIS</a></li>
 </ul>
 </div>

[% IF ( virtualshelves && intranetbookbag ) %]
 <div class="btn-group">
 <button class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown">Thêm vào <span class="caret"></span></button>
 <ul class="dropdown-menu">
 <li><a href="#" id="addtocart">Giỏ tài liệu</a></li>
 <li><a href="#" id="addtoshelf">Giá sách ảo</a></li>
 </ul>
 </div>
[% ELSIF ( virtualshelves ) %]
 <div class="btn-group"><a id="addtoshelf" class="btn btn-default btn-sm"><i class="fa fa-list"></i> Thêm vào giá sách ảo</a> </div>
[% ELSIF ( intranetbookbag ) %]
 <div class="btn-group"><a id="addtocart" class="btn btn-default btn-sm"><i class="fa fa-shopping-cart"></i> Thêm vào giỏ tài liệu</a> </div>
[% END %]

 <div class="btn-group"><a id="printbiblio" class="btn btn-default btn-sm"><i class="fa fa-print"></i> Bản in</a></div>

[% IF ( CAN_user_reserveforothers ) %]
 [% UNLESS ( norequests ) %]
 [% IF ( holdfor ) %]
 <div class="btn-group">
 <button class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown">
 <i class="fa fa-sticky-note-o"></i>
 Đặt mượn <span class="caret"></span>
 </button>
 <ul class="dropdown-menu">
 <li><a href="/cgi-bin/koha/reserve/request.pl?biblionumber=[% biblionumber %]">Đặt mượn</a></li>
 <li><a href="/cgi-bin/koha/reserve/request.pl?biblionumber=[% biblionumber %]&amp;findborrower=[% holdfor_cardnumber %]">Đặt mượn cho bạn đọc: [% holdfor_firstname %] [% holdfor_surname %] ([% holdfor_cardnumber %])</a></li>
 </ul>
 </div>
 [% ELSE %]
 <div class="btn-group"><a id="placehold" class="btn btn-default btn-sm" href="/cgi-bin/koha/reserve/request.pl?biblionumber=[% biblionumber %]"><i class="fa fa-sticky-note-o"></i> Đặt mượn</a></div>
 [% END %]
 [% END %]
[% END %]

[% IF Koha.Preference('ArticleRequests') %]
 <div class="btn-group"><a id="placehold" class="btn btn-default btn-sm" href="/cgi-bin/koha/circ/request-article.pl?biblionumber=[% biblionumber %]"><i class="fa fa-file-text-o"></i> Request article</a></div>
[% END %]

</div>

 <!--Modal for Dublin Core-->
 <div class="modal" id="exportModal_" tabindex="-1" role="dialog" aria-labelledby="exportLabelexportModal_" aria-hidden="true">
 <div class="modal-dialog">
 <div class="modal-content">
 <div class="modal-header">
 <button type="button" class="closebtn" data-dismiss="modal" aria-hidden="true">&times;</button>
 <h3 id="exportLabelexportModal_">Exporting to Dublin Core...</h3>
 </div>
 <form method="get" action="/cgi-bin/koha/catalogue/export.pl">
 <div class="modal-body">
 <fieldset>
 <input id="input-simple" type="radio" name="format" value="rdfdc">
 <label for="input-simple">Simple DC-RDF</label>
 <br>
 <input id="input-oai" type="radio" name="format" value="oaidc" checked>
 <label for="input-oai">OAI-DC</label>
 <br>
 <input id="input-srw" type="radio" name="format" value="srwdc">
 <label for="input-srw">SRW-DC</label>
 <br>
 </fieldset>
 </div>
 <div class="modal-footer">
 <button type="submit" class="btn btn-default">Xuất dữ liệu</button>
 <button class="btn btn-link" data-dismiss="modal" aria-hidden="true">Hủy bỏ</button>
 </div>
 <input type="hidden" name="op" value="export" />
 <input type="hidden" name="bib" value="[% biblionumber %]" />
 </form>
 </div>
 </div>
 </div>
