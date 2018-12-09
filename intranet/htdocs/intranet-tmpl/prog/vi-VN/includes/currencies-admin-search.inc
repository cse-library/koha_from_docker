[% USE Koha %]
<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1><!-- Begin Currencies Resident Search Box -->
<div id="header_search">
 <div id="currency_search" class="residentsearch">
 <p class="tip">Đơn vị tiền tệ:</p>
 <form action="[% script_name %]" method="post">
 <input class="head-searchbox" type="text" name="description" size="40" value="[% searchfield %]" />
 <input value="Tìm kiếm" class="submit" name="search" type="submit" />
 </form> 
 </div>
 [% INCLUDE 'patron-search-box.inc' %]
 [% IF ( CAN_user_catalogue ) %]
 <div id="catalog_search" class="residentsearch">
 <p class="tip">Nhập từ khóa tìm kiếm:</p>
 <form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
 [% IF ( Koha.Preference('IntranetCatalogSearchPulldown') ) %][% INCLUDE 'search_indexes.inc' %][% END %]
 <input id="search-form" name="q" type="text" size="40" class="head-searchbox form-text" value="" title="Nhập thuật ngữ bạn muốn tìm kiếm." />
 <input value="Tìm kiếm" type="submit" class="submit" />
 </form>
 </div>[% END %]
 <ul>
 <li><a class="keep_text" href="#currency_search">Tìm đơn vị tiền tệ</a></li>
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#circ_search">Ghi mượn</a></li>[% END %]
 [% IF ( CAN_user_catalogue ) %]<li><a class="keep_text" href="#catalog_search">Tìm tài liệu</a></li>[% END %]
 </ul> 
</div>
</div><!-- /gradient -->
<!-- End Currencies Resident Search Box -->
