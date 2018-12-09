<div class="gradient">
 <h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1>

 <!-- Begin main page resident search box -->
 <div id="header_search">
 [% INCLUDE 'patron-search-box.inc' %]
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
 <div id="checkin_search" class="residentsearch">
 <p class="tip">Quét mã vạch để ghi trả tài liệu:</p>
 <form method="post" action="/cgi-bin/koha/circ/returns.pl" autocomplete="off">
 <input name="barcode" class="head-searchbox" id="ret_barcode" size="40" accesskey="r" />
 <input class="submit" type="submit" value="Tìm kiếm" />
 </form>
 </div>
 <div id="renew_search" class="residentsearch">
 <p class="tip">Scan a barcode to renew:</p>
 <form method="post" action="/cgi-bin/koha/circ/renew.pl" autocomplete="off">
 <input class="head-searchbox" name="barcode" id="ren_barcode" size="40" />
 <input value="Tìm kiếm" type="submit" class="submit" />
 </form>
 </div>
 [% END %]

 [% IF CAN_user_borrowers_edit_borrowers %]
 <div id="patron_search" class="residentsearch">
 <p class="tip">Nhập số thẻ hoặc tên của bạn đọc:</p>
 <form action="/cgi-bin/koha/members/member.pl" method="post">
 <input name="searchmember" class="head-searchbox" id="searchmember" size="40" type="text" />
 <input type="hidden" name="quicksearch" value="1" />
 <input type="submit" class="submit" value="Tìm kiếm" />
 </form>
 </div>
 [% END %]

 <ul>
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
 <li><a class="keep_text" href="#circ_search">Ghi mượn</a></li>
 [% END %]
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
 <li><a class="keep_text" href="#checkin_search">Ghi Trả</a></li>
 [% END %]
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
 <li><a class="keep_text" href="#renew_search">Gia hạn</a></li>
 [% END %]
 [% IF CAN_user_borrowers_edit_borrowers %]
 <li><a class="keep_text" href="#patron_search">Tìm bạn đọc</a></li>
 [% END %]
 </ul>

 </div><!-- /#header_search -->
 <!-- End advanced search page resident search box -->

</div><!-- /.gradient -->
