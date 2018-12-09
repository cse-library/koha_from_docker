[% IF patron_messages.count OR opacnote %]
 <div class="alert alert-info">
 <h3>Tin nhắn của bạn</h3>
 <ul>
 [% FOREACH message IN patron_messages %]
 <li>
 <strong>[% message.message %]</strong><br>
 &nbsp;&nbsp;&nbsp;<i>Được gửi vào ngày [% message.message_date | $KohaDates %] từ [% Branches.GetName(message.branchcode) %]</i>
 </li>
 [% END %]

 [% IF ( opacnote ) %]<li>[% opacnote %]</li>[% END %]
 </ul>
 </div>
[% END %]
