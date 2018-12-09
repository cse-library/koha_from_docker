<div id="reldebarments">
 [% IF ( not debarments.defined || debarments.size < 1 ) %]
 <p>Bạn đọc hiện tại không bị hạn chế tài khoản.</p>
 [% ELSE %]
 <table>
 <thead>
 <tr>
 <th>Type</th>
 <th>Bình luận</th>
 <th>Ngày hết hạn</th>
 <th>Created</th>
 [% IF CAN_user_borrowers_edit_borrowers && CAN_user_circulate_manage_restrictions %]
 <th>&nbsp;</th>
 [% END %]
 </tr>
 </thead>
 <tbody>
 [% FOREACH d IN debarments %]
 <tr>
 <td>
 [% SWITCH d.type %]
 [% CASE 'MANUAL' %]
 Manual
 [% CASE 'OVERDUES' %]
 Overdues
 [% CASE 'SUSPENSION' %]
 Suspension
 [% CASE 'DISCHARGE' %]
 Discharge
 [% END %]
 </td>
 <td>
 [% IF d.comment.search('OVERDUES_PROCESS') %]
 Restriction added by overdues process [% d.comment.remove('OVERDUES_PROCESS ') %]
 [% ELSE %]
 [% d.comment %]
 [% END %]
 </td>
 <td>[% IF d.expiration %] [% d.expiration | $KohaDates %] [% ELSE %] <i>Indefinite</i> [% END %]</td>
 <td>[% d.created | $KohaDates %]</td>
 [% IF CAN_user_borrowers_edit_borrowers && CAN_user_circulate_manage_restrictions %]
 <td>
 <a class="remove_restriction btn btn-default btn-xs" href="/cgi-bin/koha/members/mod_debarment.pl?borrowernumber=[% patron.borrowernumber %]&amp;borrower_debarment_id=[% d.borrower_debarment_id %]&amp;action=del">
 <i class="fa fa-trash"></i> Loại bỏ </a>
 </td>
 [% END %]
 </tr>
 [% END %]
 </tbody>
 </table>
 [% END %]
 [% IF CAN_user_borrowers_edit_borrowers && CAN_user_circulate_manage_restrictions %]
 <p><a href="#" id="add_manual_restriction"><i class="fa fa-plus"></i> Hạn chế tài khoản</a></p>
 <form method="post" action="/cgi-bin/koha/members/mod_debarment.pl" class="clearfix">
 <input type="hidden" name="borrowernumber" value="[% patron.borrowernumber %]" />
 <input type="hidden" name="action" value="add" />
 <fieldset class="rows" id="manual_restriction_form">
 <legend>Hạn chế tài khoản</legend>
 <ol>
 <li><label for="rcomment">Bình luận:</label> <input type="text" id="rcomment" name="comment" /></li>
 <li><label for="rexpiration">Tài khoản hết hạn:</label> <input name="expiration" id="rexpiration" size="10" value="" class="datepicker" />
 <a href="#" class="clear-date" id="clear-date-rexpiration">Xóa</a></li>
 </ol>
 <fieldset class="action"><input type="submit" value="Hạn chế tài khoản" /> <a href="#" class="cancel" id="cancel_manual_restriction">Hủy bỏ</a></fieldset>
 </fieldset>
 </form>
 [% END %]
</div>
