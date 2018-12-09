[% USE Koha %]
<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1>
<div id="header_search">
 <div id="syspref_search" class="residentsearch">
 <p class="tip">Tìm tham số hệ thống:</p>
 <form action="/cgi-bin/koha/admin/preferences.pl">
 <input type="hidden" name="tab" value="[% last_tab %]" />
 <input type="hidden" name="op" value="search" />
 <input class="head-searchbox" type="text" size="40" name="searchfield" value="">
 <input value="Tìm kiếm" type="submit" class="submit" />
 </form>
 </div>
 [% INCLUDE 'patron-search-box.inc' %]
 [% IF ( CAN_user_catalogue ) %]
 <div id="catalog_search" class="residentsearch">
<p class="tip">Nhập từ khóa tìm kiếm:</p>
 <form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
 [% IF ( Koha.Preference('IntranetCatalogSearchPulldown') ) %][% INCLUDE 'search_indexes.inc' %][% END %]
 <input value="" title="Nhập thuật ngữ bạn muốn tìm kiếm." class="head-searchbox form-text" size="40" id="search-form" name="q" type="text" />
 <input class="submit" type="submit" value="Tìm kiếm" />
 </form>
 </div>
 [% END %]
 <ul>
 <li><a class="keep_text" href="#syspref_search">Tìm tham số hệ thống</a></li>
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#circ_search">Ghi mượn</a></li>[% END %]
 [% IF ( CAN_user_catalogue ) %]<li><a class="keep_text" href="#catalog_search">Tìm tài liệu</a></li>[% END %]
 </ul>
</div>
</div>
