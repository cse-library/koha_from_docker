<fieldset class="acqui_basket_add">
 <legend>Tạo đơn hàng</legend>
 [% IF has_budgets %]
 <ul>
 <li>
 <form action="/cgi-bin/koha/acqui/neworderbiblio.pl" method="post">
 <label>Từ biểu ghi hiện tại: <input type="text"  size="25" name="q" />
 </label>
 <input type="hidden" name="booksellerid" value="[% booksellerid %]" />
 <input type="hidden" name="basketno" value="[% basketno %]" />
 <input value="Tìm kiếm" class="submit" type="submit" />
 </form>
 </li>
 <li><a href="/cgi-bin/koha/acqui/newordersuggestion.pl?booksellerid=[% booksellerid %]&amp;basketno=[% basketno %]">Từ đề xuất mua</a></li>
 <li><a href="/cgi-bin/koha/acqui/newordersubscription.pl?booksellerid=[% booksellerid %]&amp;basketno=[% basketno %]">Từ ÂPĐK</a></li>
 <li><a href="/cgi-bin/koha/acqui/neworderempty.pl?booksellerid=[% booksellerid %]&amp;basketno=[% basketno %]">Từ biểu ghi mới</a></li>
 <li><a href="/cgi-bin/koha/acqui/z3950_search.pl?booksellerid=[% booksellerid %]&amp;basketno=[% basketno %]">Từ Z39.50</a></li>
 <li><a href="/cgi-bin/koha/acqui/addorderiso2709.pl?booksellerid=[% booksellerid %]&amp;basketno=[% basketno %]"> Từ tệp tin</a></li>
 [% IF ( CAN_user_circulate ) %]<li><a href="/cgi-bin/koha/circ/reserveratios.pl?booksellerid=[% booksellerid %]&amp;basketno=[% basketno %]">Từ nhan đề có tỷ lệ đặt mượn cao nhất</a></li>[% END %]
 </ul>
 [% ELSE %]
 <div class="dialog alert">
 <p>Bạn không thể tạo đơn hàng. Bạn cần phải <a href="/cgi-bin/koha/admin/aqbudgetperiods.pl">tạo quỹ hoặc ngân sách</a>.</p>
 </div>
 [% END %]
</fieldset>
