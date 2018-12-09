[% USE Koha %]
[% USE Branches %]
<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1><!-- Begin Fund Admin Resident Search Box -->

<div id="header_search">
 <div id="budgets_search" class="residentsearch">
 <p class="tip">Tìm quỹ:</p>
 <form action="/cgi-bin/koha/admin/aqbudgets.pl" method="post">
 <label for="filter_budgetname">Mã quỹ: </label><input class="query" type="text" name="filter_budgetname" id="filter_budgetname" size="20" value="[% filter_budgetname %]" />
 <label for="filter_budgetbranch">Thư viện: </label>
 <select name="filter_budgetbranch" id="filter_budgetbranch" style="width:10em;">
 <option value=""></option>
 [% FOREACH branchloo IN Branches.all( selected => selected_branchcode ) %]
 [% IF branchloo.selected %]
 <option value="[% branchloo.branchcode %]" selected="selected">[% branchloo.branchname %]</option>
 [% ELSE %]
 <option value="[% branchloo.branchcode %]" >[% branchloo.branchname %]</option>
 [% END %]
 [% END %]
 </select>
 <input type="hidden"  name="budget_period_id" value="[% budget_period_id %]" />
 <input value="Tìm kiếm" class="submit" name="filter" type="submit" />
 </form>
 </div>

[% INCLUDE 'patron-search-box.inc' %]

 [% IF ( CAN_user_catalogue ) %]
 <div id="catalog_search" class="residentsearch">
 <p class="tip">Nhập từ khóa tìm kiếm:</p>
 <form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
 [% IF ( Koha.Preference('IntranetCatalogSearchPulldown') ) %][% INCLUDE 'search_indexes.inc' %][% END %]
 <input class="query form-text" title="Nhập thuật ngữ bạn muốn tìm kiếm." value="" type="text" name="q" id="search-form" size="40" />
 <input class="submit" type="submit" value="Tìm kiếm" />
 </form>
 </div>[% END %]
 <ul>
 <li><a class="keep_text" href="#budgets_search">Tìm quỹ</a></li>
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#circ_search">Ghi mượn</a></li>[% END %]
 [% IF ( CAN_user_catalogue ) %]<li><a class="keep_text" href="#catalog_search">Tìm tài liệu</a></li>[% END %]
 </ul>
</div>
</div>
<!-- End Suggestions Resident Search Box -->
