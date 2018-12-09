[% INCLUDE 'blocking_errors.inc' %]
[% USE Koha %]
[% USE Borrowers %]
[% USE Branches %]
[% USE AuthorisedValues %]
[% SET NorwegianPatronDBEnable = Koha.Preference( 'NorwegianPatronDBEnable' ) %]
<div id="toolbar" class="btn-toolbar">
 [% IF CAN_user_borrowers_edit_borrowers %]
 [% IF ( guarantor ) %]
 <a id="editpatron" class="btn btn-default btn-sm" href="/cgi-bin/koha/members/memberentry.pl?op=modify&amp;destination=circ&amp;borrowernumber=[% patron.borrowernumber %]&amp;guarantorid=[% guarantor.borrowernumber %]&amp;categorycode=[% patron.categorycode %]">
 [% ELSE %]
 <a id="editpatron" class="btn btn-default btn-sm" href="/cgi-bin/koha/members/memberentry.pl?op=modify&amp;destination=circ&amp;borrowernumber=[% patron.borrowernumber %]&amp;categorycode=[% patron.categorycode %]">
 [% END %]
 <i class="fa fa-pencil"></i> Chỉnh sửa</a>
 [% END %]

 [% IF CAN_user_borrowers_edit_borrowers %]
 [% IF patron.is_adult AND Koha.Preference("borrowerRelationship") %]
 <a id="addchild" class="btn btn-default btn-sm" href="/cgi-bin/koha/members/memberentry.pl?op=add&amp;guarantorid=[% patron.borrowernumber %]"><i class="fa fa-plus"></i> Thêm bạn đọc trẻ em</a>
 [% END %]
 [% IF CAN_user_borrowers_edit_borrowers %]
 <a id="changepassword" class="btn btn-default btn-sm" href="/cgi-bin/koha/members/member-password.pl?member=[% patron.borrowernumber %]"><i class="fa fa-lock"></i> Thay đổi mật khẩu</a>
 [% END %]
 <a id="duplicate" class="btn btn-default btn-sm" href="/cgi-bin/koha/members/memberentry.pl?op=duplicate&amp;borrowernumber=[% patron.borrowernumber %]&amp;categorycode=[% patron.categorycode %]"><i class="fa fa-copy"></i> Sao chép</a>
 [% END %]

 [% IF CAN_user_circulate_circulate_remaining_permissions %]
 <div class="btn-group">
 <button class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown"><i class="fa fa-print"></i> Bản in <span class="caret"></span></button>
 <ul class="dropdown-menu">
 <li><a id="printsummary" href="#">Thông tin tài khoản</a></li>
 <li><a id="printslip" href="#">Thông tin ghi mượn</a></li>
 <li><a id="printquickslip" href="#">Ghi mượn trong ngày</a></li>
 [% IF Borrowers.HasOverdues( patron.borrowernumber ) %]
 <li><a id="print_overdues" href="#">Print overdues</a></li>
 [% END %]
 </ul>
 </div>
 [% END %]

 [% IF ( CAN_user_reserveforothers ) %]
 <a id="searchtohold" class="btn btn-default btn-sm" href="#"><i class="fa fa-search"></i> Tìm kiếm</a>
 [% END %]

 <a id="addnewmessageLabel" href="#add_message_form" data-toggle="modal" class="btn btn-default btn-sm"><i class="fa fa-comment-o"></i> Add message</a>

 <div class="btn-group">
 <button class="btn btn-default btn-sm dropdown-toggle" data-toggle="dropdown">Thêm <span class="caret"></span></button>
 <ul class="dropdown-menu">
 [% IF CAN_user_borrowers_edit_borrowers %]
 <li><a id="renewpatron" href="/cgi-bin/koha/members/setstatus.pl?borrowernumber=[% patron.borrowernumber %]&amp;destination=[% destination %]&amp;reregistration=y">Gia hạn tài khoản</a></li>
 [% ELSE %]
 <li class="disabled"><a data-placement="left" title="Bạn không được phân quyền để gia hạn tài khoản bạn đọc" id="renewpatron" href="#" data-toggle="tooltip">Gia hạn tài khoản</a></li>
 [% END %]
 [% IF ( CAN_user_permissions ) %]
 <li><a id="patronflags" href="/cgi-bin/koha/members/member-flags.pl?member=[% patron.borrowernumber %]">Phân quyền người dùng</a></li>
 [% ELSE %]
 <li class="disabled"><a data-toggle="tooltip" href="#" id="patronflags" title="Bạn không được phân quyền để phân quyền chức năng cho bạn đọc" data-placement="left">Phân quyền người dùng</a></li>
 [% END %]

 [% IF CAN_user_borrowers_edit_borrowers && useDischarge %]
 <li><a href="/cgi-bin/koha/members/discharge.pl?borrowernumber=[% patron.borrowernumber %]">Discharge</a></li>
 [% END %]

 [% IF Koha.Preference('RESTOAuth2ClientCredentials') %]
 [% IF CAN_user_borrowers_edit_borrowers %]
 <li><a id="apikeys" href="/cgi-bin/koha/members/apikeys.pl?patron_id=[% patron.borrowernumber %]">Manage API keys</a></li>
 [% ELSE %]
 <li class="disabled"><a data-toggle="tooltip" data-placement="left" title="You are not authorized to manage API keys" id="apikeys" href="#">Manage API keys</a></li>
 [% END %]
 [% END %]

 [% IF CAN_user_borrowers_edit_borrowers %]
 [% IF ( NorwegianPatronDBEnable == 1 ) %]
 <li><a id="deletepatronlocal" href="#">Delete local</a></li>
 <li><a id="deletepatronremote" href="#">Delete remote</a></li>
 <li><a id="deletepatronboth" href="#">Delete local and remote</a></li>
 [% ELSE %]
 <li><a id="deletepatron" href="#">Xóa</a></li>
 [% END %]
 [% ELSE %]
 <li class="disabled"><a data-toggle="tooltip" id="deletepatron" href="#" title="Bạn không được phân quyền để xóa tài khoản bạn đọc" data-placement="left">Xóa</a></li>
 [% END %]
 [% IF ( patron.is_child ) %]
 <li><a id="updatechild" href="#">Cập nhật Trẻ em - Người lớn</a></li>
 [% ELSE %]
 <li class="disabled"><a data-toggle="tooltip" id="updatechild" href="#" title="Bạn đọc là người lớn" data-placement="left">Cập nhật Trẻ em - Người lớn</a></li>
 [% END %]
 [% IF Koha.Preference('intranetreadinghistory') %]
 [%IF ( privacy == 2 ) %]
 <li class="disabled"><a data-toggle="tooltip" data-placement="left" title="Not allowed by patron's privacy settings" id="exportbarcodes" href="#">Xuất dữ liệu ghi mượn trong ngày</a></li>
 [% ELSE %]
 <li><a id="exportcheckins" href="#">Xuất dữ liệu ghi mượn trong ngày</a></li>
 [% END %]
 [% END %]
 </ul>
 </div>
</div>

<!-- Modal -->
<div id="add_message_form" class="modal" tabindex="-1" role="dialog" aria-labelledby="addnewmessageLabel" aria-hidden="true">
 <div class="modal-dialog">
 <div class="modal-content">
 <form method="post" action="/cgi-bin/koha/circ/add_message.pl" id="message_form" name="message_f">
 <div class="modal-header">
 <h3>Tạo tin nhắn</h3>
 </div>
 <div class="modal-body">
 <div class="form-group">
 <label for="message_type">Gửi tin nhắn cho:</label>
 <select name="message_type" id="message_type">
 <option value="L">Staff - Internal note</option>
 <option value="B">OPAC - [% patron.firstname | html %] [% patron.surname | html %]</option>
 </select>
 </div>
 [% bor_notes = AuthorisedValues.Get( 'BOR_NOTES' ) %]
 [% IF bor_notes %]
 <div class="form-group">
 <label for="select_patron_messages">Nội dung (Chọn theo mẫu hoặc nhập mới): </label>
 <select name="type" id="select_patron_messages">
 <option value="">Chọn ghi chú</option>
 [% FOREACH bor_note IN bor_notes %]
 <option value="[% bor_note.lib %]">[% bor_note.lib %]</option>
 [% END %]
 </select>
 </div>
 [% END %]
 <div class="form-group">
 <textarea rows="3" class="modal-textarea" name="borrower_message" id="borrower_message" ></textarea>
 </div>
 <input type="hidden" name="borrowernumber" value="[% patron.borrowernumber %]" />
 <input type="hidden" name="batch" value="[% batch %]" />
 <input type="hidden" name="branchcode" value="[% LoginBranchcode %]" />
 </div>
 <div class="modal-footer">
 <button class="btn btn-default approve" type="submit"><i class="fa fa-check"></i> Lưu</button>
 <button class="btn btn-default deny cancel" href="#" data-dismiss="modal" aria-hidden="true"><i class="fa fa-times"></i> Hủy bỏ</button>
 </div>
 </form>
 </div>
 </div>
</div>