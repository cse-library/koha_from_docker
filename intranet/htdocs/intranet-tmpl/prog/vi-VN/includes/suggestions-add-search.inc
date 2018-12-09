[% USE Koha %]
<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1><!-- Begin Suggestions Resident Search Box -->
<div id="header_search">
 <div id="suggestions_search" class="residentsearch">
 <p class="tip">Tìm kiếm đề xuất mua:</p>
 <form action="/cgi-bin/koha/acqui/newordersuggestion.pl" method="get">
 <input type="hidden" name="booksellerid" value="[% booksellerid %]" />
 <label for="searchtitle">Nhan đề:</label> <input type="text" id="searchtitle" name="title" size="10" value="[% title %]" />
 <label for="searchauthor">Tác giả:</label> <input type="text" id="searchauthor" name="author" size="10" value="[% author %]" />
 <label for="searchpublishercode">Nhà xuất bản:</label> <input type="text" id="searchpublishercode" name="publishercode" size="10" value="[% publishercode %]" />
 <input value="Tìm kiếm" class="submit" type="submit" />
 </form>
 </div>

 [% INCLUDE 'patron-search-box.inc' %]

 [% IF ( CAN_user_catalogue ) %]
 <div id="catalog_search" class="residentsearch">
 <p class="tip">Nhập từ khóa tìm kiếm:</p>
 <form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
 [% IF ( Koha.Preference('IntranetCatalogSearchPulldown') ) %][% INCLUDE 'search_indexes.inc' %][% END %]
 <input class="head-searchbox form-text" value="" title="Nhập thuật ngữ bạn muốn tìm kiếm." id="search-form" type="text" name="q" size="40" />
 <input value="Tìm kiếm" type="submit" class="submit" />
 </form>
 </div>
 [% END %]
 <ul>
 <li><a href="#suggestions_search">Tìm đề xuất mua</a></li>
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#circ_search">Ghi mượn</a></li>[% END %]
 [% IF ( CAN_user_catalogue ) %]<li><a class="keep_text" href="#catalog_search">Tìm tài liệu</a></li>[% END %]
 </ul>
</div>
</div><!-- /gradient -->
<!-- End Suggestions Resident Search Box -->
