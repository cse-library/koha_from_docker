[% USE Koha %]
<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1><!-- Begin Notices Resident Search Box -->
<div id="header_search">
 <div id="notices_search" class="residentsearch">
 <p class="tip">Tìm kiếm thông báo:</p>
<form action="/cgi-bin/koha/tools/letter.pl" method="post">
 <input class="head-searchbox" type="text" name="searchfield" size="40" value="" />
 <input type="submit" name="search" class="submit" value="Tìm kiếm" />
 </form> 
 </div>
 [% INCLUDE 'patron-search-box.inc' %]
 [% IF ( CAN_user_catalogue ) %]
 <div id="catalog_search" class="residentsearch">
 <p class="tip">Nhập từ khóa tìm kiếm:</p>
 <form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
 [% IF ( Koha.Preference('IntranetCatalogSearchPulldown') ) %][% INCLUDE 'search_indexes.inc' %][% END %]
 <input name="q" type="text" id="search-form" size="40" class="head-searchbox form-text" title="Nhập thuật ngữ bạn muốn tìm kiếm." value="" />
 <input value="Tìm kiếm" class="submit" name="op" type="submit" />
 </form>
 </div>[% END %]
 <ul>
 <li><a class="keep_text" href="#notices_search">Tìm thông báo</a></li>
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#circ_search">Ghi mượn</a></li>[% END %]
 [% IF ( CAN_user_catalogue ) %]<li><a class="keep_text" href="#catalog_search">Tìm tài liệu</a></li>[% END %]
 </ul> 
</div>
</div><!-- /gradient -->
<!-- End Notices Resident Search Box -->
