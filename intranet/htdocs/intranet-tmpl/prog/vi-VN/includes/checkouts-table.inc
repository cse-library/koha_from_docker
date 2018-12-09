[% USE Koha %]
<div id="checkouts">
 [% IF ( issuecount ) %]
 <div id="issues-table-loading-message">
 <p>
 <a id="issues-table-load-now-button" href="#" class="btn btn-default"><i class="fa fa-book"></i> Show checkouts</a>
 </p>
 </div>
 <form name="issues" action="/cgi-bin/koha/tools/export.pl" method="post" class="checkboxed">
 <table id="issues-table" style="width: 100% !Important;">
 <thead>
 <tr>
 <th scope="col">&nbsp;</th>
 <th scope="col">&nbsp;</th>
 <th scope="col">Ngày hết hạn</th>
 <th scope="col">Ngày hết hạn</th>
 <th scope="col">Nhan đề</th>
 <th scope="col">Kiểu tài liệu</th>
 <th scope="col">Kho tài liệu</th>
 <th scope="col">Thư viện chính</th>
 <th scope="col">Ngày ghi mượn</th>
 <th scope="col">Nơi ghi mượn</th>
 <th scope="col">Ký hiệu phân loại</th>
 <th scope="col">Phí</th>
 <th scope="col">Tiền phạt</th>
 <th scope="col">Giá tiền</th>
 <th scope="col">Gia hạn <p class="column-tool"><a href="#" id="CheckAllRenewals">Chọn tất cả</a> | <a href="#" id="UncheckAllRenewals">Bất kỳ</a></p></th>
 <th scope="col">Ghi trả <p class="column-tool"><a href="#" id="CheckAllCheckins">Chọn tất cả</a> | <a href="#" id="UncheckAllCheckins">Bất kỳ</a></p></th>
 <th scope="col">Xuất dữ liệu <p class="column-tool"><a href="#" id="CheckAllExports">Chọn tất cả</a> | <a href="#" id="UncheckAllExports">Bất kỳ</a></p></th>
 </tr>
 </thead>
 [% INCLUDE 'checkouts-table-footer.inc' %]
 </table>

 <label for="issues-table-load-immediately">Always show checkouts immediately</label>
 <input id="issues-table-load-immediately" type="checkbox" />

 <div id="issues-table-actions">
 <fieldset class="action">
 [% IF ( CAN_user_circulate_override_renewals ) %]
 [% IF CAN_user_circulate_override_renewals && Koha.Preference( 'AllowRenewalLimitOverride' ) %]
 <label for="override_limit">Ghi đè chính sách:</label>
 <input type="checkbox" name="override_limit" id="override_limit" value="1" />
 [% END %]
 [% END %]
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
 <button class="btn btn-default" id="RenewCheckinChecked"><i class="fa fa-check"></i> Renew or check in selected items</button>
 <button class="btn btn-default" id="RenewAll"><i class="fa fa-book"></i> Gia hạn tất cả</button>
 [% END %]
 </fieldset>

 [% IF Koha.Preference('ExportCircHistory') %]
 <fieldset>
 <label for="issues-table-output-format"><b>Xuất dữ liệu ghi mượn theo định dạng:</b></label>
 <select name="issues-table-output-format" id="issues-table-output-format">
 <option value="iso2709_995">ISO2709 kèm tài liệu</option>
 <option value="iso2709">ISO2709 không kèm tài liệu</option>
 [% IF csv_profiles.size %]
 <option value="csv">CSV</option>
 [% END %]
 </select>

 [% IF csv_profiles.size %]
 <select name="csv_profile_id">
 [% FOREACH csv_profile IN csv_profiles %]
 <option value="[% csv_profile.export_format_id %]">[% csv_profile.profile %]</option>
 [% END %]
 </select>
 [% END %]
 <label for="export_remove_fields">Không xuất trường:</label> <input value="[% Koha.Preference('ExportRemoveFields') %]" title="Sử dụng chuẩn dữ liệu ISO2709" id="export_remove_fields" name="export_remove_fields" type="text" />
 <input type="hidden" name="op" value="export" />
 <input type="hidden" id="output_format" name="output_format" value="iso2709" />
 <input type="hidden" id="dont_export_item" name="dont_export_item" value="0" />
 <input type="hidden" id="record_type" name="record_type" value="bibs" />
 <button class="btn btn-default btn-sm" id="export_submit"><i class="fa fa-download"></i> Xuất dữ liệu</button>
 </fieldset>
 [% END %]
 </div>
 </form>
 [% ELSE %]
 <p>Hiện tại bạn đọc không mượn tài liệu của thư viện.</p>
 [% END %]
</div>
