<div id="navmenu">
<div id="navmenulist">
<ul>
 <li><a href="/cgi-bin/koha/tools/tools-home.pl">Công cụ hỗ trợ</a></li>
</ul>
<h5>Bạn đọc và lưu thông</h5>
<ul>
 [% IF ( CAN_user_tools_manage_patron_lists ) %]
 <li><a href="/cgi-bin/koha/patron_lists/lists.pl">Danh sách bạn đọc</a></li>
 [% END %]
 [% IF (CAN_user_clubs) %]
 <li><a href="/cgi-bin/koha/clubs/clubs.pl">Patron clubs</a></li>
 [% END %]
 [% IF ( CAN_user_tools_moderate_comments ) %]
 <li><a href="/cgi-bin/koha/reviews/reviewswaiting.pl">Bình luận</a></li>
 [% END %]
 [% IF ( CAN_user_tools_import_patrons ) %]
 <li><a href="/cgi-bin/koha/tools/import_borrowers.pl">Nhập bạn đọc theo lô</a></li>
 [% END %]
 [% IF ( CAN_user_tools_edit_notices ) %]
 <li><a href="/cgi-bin/koha/tools/letter.pl">Thông báo &amp; Phiếu in</a></li>
 [% END %]
 [% IF ( CAN_user_tools_edit_notice_status_triggers ) %]
 <li><a href="/cgi-bin/koha/tools/overduerules.pl">Thông báo quá hạn</a></li>
 [% END %]
 [% IF ( CAN_user_tools_label_creator ) %]
 <li><a href="/cgi-bin/koha/patroncards/home.pl">Tạo thẻ bạn đọc</a></li>
 [% END %]
 [% IF ( CAN_user_tools_delete_anonymize_patrons ) %]
 <li><a href="/cgi-bin/koha/tools/cleanborrowers.pl">Xóa bạn đọc theo lô/Lịch sử ghi mượn</a></li>
 [% END %]
 [% IF ( CAN_user_tools_edit_patrons ) %]
 <li><a href="/cgi-bin/koha/tools/modborrowers.pl">Thay đổi nhóm bạn đọc theo lô</a></li>
 [% END %]
 [% IF ( CAN_user_tools_moderate_tags ) %]
 <li><a href="/cgi-bin/koha/tags/review.pl">Từ khóa</a></li>
 [% END %]
 [% IF ( CAN_user_tools_batch_upload_patron_images ) %]
 <li><a href="/cgi-bin/koha/tools/picture-upload.pl">Nhập ảnh bạn đọc</a></li>
 [% END %]
</ul>
<h5>Tìm kiếm</h5>
<ul>
 [% IF ( CAN_user_tools_items_batchdel ) %]
 <li><a href="/cgi-bin/koha/tools/batchMod.pl?del=1">Xóa bản tài liệu theo lô</a></li>
 [% END %]
 [% IF ( CAN_user_tools_items_batchmod ) %]
 <li><a href="/cgi-bin/koha/tools/batchMod.pl">Chỉnh sửa bản tài liệu theo lô</a></li>
 [% END %]
 [% IF CAN_user_tools_records_batchdel %]
 <li><a href="/cgi-bin/koha/tools/batch_delete_records.pl">Batch record deletion</a></li>
 [% END %]
 [% IF CAN_user_tools_records_batchmod %]
 <li><a href="/cgi-bin/koha/tools/batch_record_modification.pl">Batch record modification</a></li>
 [% END %]
 [% IF CAN_user_tools_items_batchmod %]
 <li><a href="/cgi-bin/koha/tools/automatic_item_modification_by_age.pl">Automatic item modifications by age</a></li>
 [% END %]
 [% IF ( CAN_user_tools_export_catalog ) %]
 <li><a href="/cgi-bin/koha/tools/export.pl">Xuất dữ liệu</a></li>
 [% END %]
 [% IF ( CAN_user_tools_inventory ) %]
 <li><a href="/cgi-bin/koha/tools/inventory.pl">Kiểm kê kho</a></li>
 [% END %]
 [% IF ( CAN_user_tools_label_creator ) %]
 <li><a href="/cgi-bin/koha/labels/label-home.pl">Tạo nhãn gáy</a></li>
 <li><a href="/cgi-bin/koha/labels/spinelabel-home.pl">Tạo nhanh nhãn gáy</a></li>
 [% END %]
 [% IF ( CAN_user_tools_rotating_collections ) %]
 <li><a href="/cgi-bin/koha/rotating_collections/rotatingCollections.pl">Bộ sưu tập luân phiên</a></li>
 [% END %]
 [% IF ( CAN_user_tools_marc_modification_templates ) %]
 <li><a href="/cgi-bin/koha/tools/marc_modification_templates.pl">Mẫu chỉnh sửa biểu ghi MARC</a></li>
 [% END %]
 [% IF ( CAN_user_tools_stage_marc_import ) %]
 <li><a href="/cgi-bin/koha/tools/stage-marc-import.pl">Duyệt biểu ghi MARC tải lên</a></li>
 [% END %]
 [% IF ( CAN_user_tools_manage_staged_marc ) %]
 <li><a href="/cgi-bin/koha/tools/manage-marc-import.pl">Quản lý biểu ghi MARC được duyệt</a></li>
 [% END %]
 [% IF ( CAN_user_tools_upload_local_cover_images ) %]
 <li><a href="/cgi-bin/koha/tools/upload-cover-image.pl">Thêm ảnh bìa cho biểu ghi</a></li>
 [% END %]
</ul>
<h5>Công cụ bổ trợ</h5>
<ul>
 [% IF ( CAN_user_tools_edit_calendar ) %]
 <li><a href="/cgi-bin/koha/tools/holidays.pl">Lập lịch làm việc</a></li>
 [% END %]
 [% IF ( CAN_user_tools_manage_csv_profiles ) %]
 <li><a href="/cgi-bin/koha/tools/csv-profiles.pl">Mẫu CSV</a></li>
 [% END %]
 [% IF ( CAN_user_tools_view_system_logs ) %]
 <li><a href="/cgi-bin/koha/tools/viewlog.pl">Nhật ký</a></li>
 [% END %]
 [% IF ( CAN_user_tools_edit_news ) %]
 <li><a href="/cgi-bin/koha/tools/koha-news.pl">Tin tức</a></li>
 [% END %]
 [% IF ( CAN_user_tools_schedule_tasks ) %]
 <li><a href="/cgi-bin/koha/tools/scheduler.pl">Lập lịch báo cáo</a></li>
 [% END %]
 [% IF ( CAN_user_tools_edit_quotes ) %]
 <li><a href="/cgi-bin/koha/tools/quotes.pl">Chỉnh sửa trích dẫn trên OPAC</a></li>
 [% END %]
 [% IF ( UseKohaPlugins && CAN_user_plugins_tool ) %]
 <li><a href="/cgi-bin/koha/plugins/plugins-home.pl?method=tool">Tool plugins</a></li>
 [% END %]
 [% IF ( CAN_user_tools_upload_general_files ) %]
 <li><a href="/cgi-bin/koha/tools/upload.pl">Upload any file</a></li>
 [% END %]
 [% IF ( CAN_user_tools_access_files ) %]
 <li><a href="/cgi-bin/koha/tools/access_files.pl">Access files</a></li>
 [% END %]
</ul></div></div>
