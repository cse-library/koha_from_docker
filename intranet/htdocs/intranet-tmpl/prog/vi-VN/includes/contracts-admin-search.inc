[% USE Koha %]
<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1><!-- Begin Patrons Admin Resident Search Box -->

<div id="header_search">
 <div id="contract_description_search" class="residentsearch">
 <p class="tip">Tìm kiếm theo tên hợp đồng hoặc nội dung:</p>
 <form action="[% script_name %]" method="post">
 <input class="head-searchbox" type="text" name="searchfield" size="40" value="[% searchfield %]" />
 <input value="Tìm kiếm" name="search" type="submit" class="submit" />
 </form> 
 </div>

 [% INCLUDE 'patron-search-box.inc' %]

 [% IF ( CAN_user_catalogue ) %]
 <div id="catalog_search" class="residentsearch">
 <p class="tip">Nhập từ khóa tìm kiếm:</p>
 <form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
 [% IF ( Koha.Preference('IntranetCatalogSearchPulldown') ) %][% INCLUDE 'search_indexes.inc' %][% END %]
 <input value="" title="Nhập thuật ngữ bạn muốn tìm kiếm." class="head-searchbox form-text" size="40" id="search-form" type="text" name="q" />
 <input value="Tìm kiếm" class="submit" type="submit" />
 </form>
 </div>[% END %]

 <ul>
 <li><a class="keep_text" href="#contract_description_search">Tìm hợp đồng</a></li>
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#circ_search">Ghi mượn</a></li>[% END %]
 [% IF ( CAN_user_catalogue ) %]<li><a class="keep_text" href="#catalog_search">Tìm tài liệu</a></li>[% END %]
 </ul>
</div>
</div><!-- /gradient -->
<!-- End Patrons Admin Resident Search Box -->
