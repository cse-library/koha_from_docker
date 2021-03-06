[% USE Koha %]
<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1><!-- Begin Circulation Resident Search Box -->

<div id="header_search">
 [% INCLUDE 'patron-search-box.inc' %]
[% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
<div id="checkin_search" class="residentsearch">
 <p class="tip">Quét mã vạch để ghi trả tài liệu:</p>
 <form method="post" action="/cgi-bin/koha/circ/returns.pl" autocomplete="off">
 <input class="head-searchbox" name="barcode" id="ret_barcode" size="40" accesskey="r" />
 <input type="submit" class="submit" value="Tìm kiếm" />
 </form>
</div>
<div id="renew_search" class="residentsearch">
 <p class="tip">Scan a barcode to renew:</p>
 <form method="post" action="/cgi-bin/koha/circ/renew.pl" autocomplete="off">
 <input class="head-searchbox" name="barcode" id="ren_barcode" size="40" />
 <input type="submit" class="submit" value="Tìm kiếm" />
 </form>
</div>
[% END %]
[% IF ( CAN_user_catalogue ) %]
<div id="catalog_search" class="residentsearch">
 <p class="tip">Nhập từ khóa tìm kiếm:</p>
 <form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
 [% IF ( Koha.Preference('IntranetCatalogSearchPulldown') ) %][% INCLUDE 'search_indexes.inc' %][% END %]
 <input class="head-searchbox" type="text" name="q" id="search-form" size="40" accesskey="q" />
 <input value="Tìm kiếm" class="submit" type="submit" />
 </form>
</div>
[% END %]

<ul>
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#circ_search">Ghi mượn</a></li>[% END %]
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#checkin_search">Ghi Trả</a></li>[% END %]
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#renew_search">Gia hạn</a></li>[% END %]
 [% IF ( CAN_user_catalogue ) %]<li><a class="keep_text" href="#catalog_search">Tìm tài liệu</a></li>[% END %]
</ul> 

</div><!-- /header_search -->
</div><!-- /gradient -->
<!-- End Circulation Resident Search Box -->
