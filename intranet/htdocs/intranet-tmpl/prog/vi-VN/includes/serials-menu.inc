[% IF ( subscriptionid ) %]
<ul>
<li><a href="serials-collection.pl?subscriptionid=[% subscriptionid %]">Bộ sưu tập APĐK</a></li>
 [% UNLESS closed %]
 [% IF ( routing && CAN_user_serials_routing ) %]
 [% IF ( hasRouting ) %]
 <li><a href="/cgi-bin/koha/serials/routing.pl?subscriptionid=[% subscriptionid %]">Chỉnh sửa danh sách nhận ÂPĐK</a></li>
 [% ELSE %]
 <li><a href="/cgi-bin/koha/serials/routing.pl?subscriptionid=[% subscriptionid %]&amp;op=new">Tạo danh sách nhận</a></li>
 [% END %]
 [% END %]
 [% END %]
</ul>
[% END %]

<ul>
 [% IF ( CAN_user_serials_claim_serials ) %]
 <li><a href="/cgi-bin/koha/serials/claims.pl">Khiếu nại</a></li>
 [% END %]
 [% IF ( CAN_user_serials_check_expiration ) %]
 <li><a href="/cgi-bin/koha/serials/checkexpiration.pl">Kiểm tra ÂPĐK quá hạn</a></li>
 [% END %]
 <li>
 <a href="/cgi-bin/koha/serials/subscription-frequencies.pl">
 Quản lý tần suất </a>
 </li>
 <li>
 <a href="/cgi-bin/koha/serials/subscription-numberpatterns.pl">
 Quản lý mẫu đánh số ÂPĐK </a>
 </li>
 <li><a href="/cgi-bin/koha/serials/add_fields.pl">Add subscription fields</a></li>
</ul>
