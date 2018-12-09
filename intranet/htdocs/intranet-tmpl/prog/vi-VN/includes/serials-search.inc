[% USE Koha %]
<div class="gradient">
 <h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1><!-- Begin Serials Resident Search Box -->
 <div id="header_search">
 <div id="subscription_search" class="residentsearch">
 <p class="tip">Tìm kiếm ÂPĐK:</p>
 <form action="/cgi-bin/koha/serials/serials-search.pl" method="get">
 [% IF ( routing ) %]
 <input type="hidden" name="routing" value="[% routing %]" />
 [% END %]
 <input type="hidden" name="searched" value="1" />
 <label for="ISSN_filter">Số ISSN:</label> <input type="text" size="10" maxlength="11" name="ISSN_filter" id="ISSN_filter" value="[% ISSN_filter | html %]" />

 [% IF (UNIMARC) %]
 <label for="EAN_filter">EAN:</label> <input type="text" size="20" maxlength="40" name="EAN_filter" id="EAN_filter" value="[% EAN_filter | html %]" />
 [% END %]
 <label for="title_filter">Nhan đề:</label> <input type="text" size="20" maxlength="40" name="title_filter" id="title_filter" value="[% title_filter | html %]" />
 <input type="submit" class="submit" value="Tìm kiếm" /> <a href="/cgi-bin/koha/serials/serials-search.pl">Tìm kiếm nâng cao</a>
 </form>
 </div>
 [% INCLUDE 'patron-search-box.inc' %]
 [% IF ( CAN_user_catalogue ) %]
 <div id="catalog_search" class="residentsearch">
 <p class="tip">Nhập từ khóa tìm kiếm:</p>
 <form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
 [% IF ( Koha.Preference('IntranetCatalogSearchPulldown') ) %][% INCLUDE 'search_indexes.inc' %][% END %]
 <input id="search-form" name="q" type="text" size="40" class="head-searchbox form-text" value="" title="Nhập thuật ngữ bạn muốn tìm kiếm." />
 <input value="Tìm kiếm" class="submit" type="submit" />
 </form>
 </div>
 [% END %]
 <ul>
 <li><a href="#subscription_search">Tìm kiếm ÂPĐK</a></li>
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#circ_search">Ghi mượn</a></li>[% END %]
 [% IF ( CAN_user_catalogue ) %]<li><a class="keep_text" href="#catalog_search">Tìm tài liệu</a></li>[% END %]
 </ul>
 </div><!-- /header_search -->
</div><!-- /gradient -->
<!-- End Serials Resident Search Box -->
