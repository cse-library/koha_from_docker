<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1>
<!-- Begin Authorities Resident Search Box -->
<div id="header_search" class="residentsearch">
 <div id="mainmain_heading" class="residentsearch">
 <p class="tip">Enter main heading ($a only):</p>
 <form action="/cgi-bin/koha/authorities/authorities-home.pl" method="get">
 <input type="hidden" name="op" value="do_search" />
 <input type="hidden" name="type" value="intranet" />
 <select name="authtypecode">
 [% IF (marcflavour == 'UNIMARC' ) %]<option value="">Tất cả kiểu dữ liệu kiểm soát</option>[% END %]
 [% FOREACH authority_type IN authority_types %]
 [% IF authority_type.authtypecode == authtypecode %]
 <option value="[% authority_type.authtypecode%]" selected="selected">[% authority_type.authtypetext %]</option>
 [% ELSE %]
 <option value="[% authority_type.authtypecode %]">[% authority_type.authtypetext %]</option>
 [% END %]
 [% END %]
 </select>
 <input type="hidden" name="marclist" value="mainmainentry" />
 <input type="hidden" name="and_or" value="and" />
 <input type="hidden" name="excluding" value="" />
 <select name="operator">
 [% IF ( operator == 'contains' ) %]
 <option value="contains" selected="selected">có chứa</option>
 [% ELSE %]
 <option value="contains">có chứa</option>
 [% END %]
 [% IF ( operator == 'start' ) %]
 <option value="start" selected="selected">bắt đầu với</option>
 [% ELSE %]
 <option value="start">bắt đầu với</option>
 [% END %]
 [% IF ( operator == 'is' ) %]
 <option value="is" selected="selected">chính xác là</option>
 [% ELSE %]
 <option value="is">chính xác là</option>
 [% END %]
 </select>
 <input id="value_mainentry" type="text" name="value" value="[% value | html%]" class="head-searchbox" />
 <select name="orderby">
 [% IF ( orderby == 'HeadingAsc' ) %]
 <option value="HeadingAsc" selected="selected">Đề mục A-Z</option>
 [% ELSE %]
 <option value="HeadingAsc">Đề mục A-Z</option>
 [% END %]
 [% IF ( orderby == 'HeadingDsc' ) %]
 <option value="HeadingDsc" selected="selected">Đề mục Z-A</option>
 [% ELSE %]
 <option value="HeadingDsc">Đề mục Z-A</option>
 [% END %]
 [% IF ( orderby == '' && op ) %]
 <option value="" selected="selected">Bất kỳ</option>
 [% ELSE %]
 <option value="">Bất kỳ</option>
 [% END %]
 </select>
 <input class="submit" type="submit" value="Tìm kiếm" />
 </form>
 </div>
 <div id="main_heading" class="residentsearch">
 <p class="tip">Enter main heading:</p>
 <form action="/cgi-bin/koha/authorities/authorities-home.pl" method="get">
 <input type="hidden" name="op" value="do_search" />
 <input type="hidden" name="type" value="intranet" />
 <select name="authtypecode">
 [% IF (marcflavour == 'UNIMARC' ) %]<option value="">Tất cả kiểu dữ liệu kiểm soát</option>[% END %]
 [% FOREACH authority_type IN authority_types %]
 [% IF authority_type.authtypecode == authtypecode %]
 <option value="[% authority_type.authtypecode %]" selected="selected">[% authority_type.authtypetext %]</option>
 [% ELSE %]
 <option value="[% authority_type.authtypecode %]">[% authority_type.authtypetext %]</option>
 [% END %]
 [% END %]
 </select>
 <input type="hidden" name="marclist" value="mainentry" />
 <input type="hidden" name="and_or" value="and" />
 <input type="hidden" name="excluding" value="" />
 <select name="operator">
 [% IF ( operator == 'contains' ) %]
 <option value="contains" selected="selected">có chứa</option>
 [% ELSE %]
 <option value="contains">có chứa</option>
 [% END %]
 [% IF ( operator == 'start' ) %]
 <option value="start" selected="selected">bắt đầu với</option>
 [% ELSE %]
 <option value="start">bắt đầu với</option>
 [% END %]
 [% IF ( operator == 'is' ) %]
 <option value="is" selected="selected">chính xác là</option>
 [% ELSE %]
 <option value="is">chính xác là</option>
 [% END %]
 </select>
 <input id="value_mainentry" type="text" name="value" value="[% value | html%]" class="head-searchbox" />
 <select name="orderby">
 [% IF ( orderby == 'HeadingAsc' ) %]
 <option value="HeadingAsc" selected="selected">Đề mục A-Z</option>
 [% ELSE %]
 <option value="HeadingAsc">Đề mục A-Z</option>
 [% END %]
 [% IF ( orderby == 'HeadingDsc' ) %]
 <option value="HeadingDsc" selected="selected">Đề mục Z-A</option>
 [% ELSE %]
 <option value="HeadingDsc">Đề mục Z-A</option>
 [% END %]
 [% IF ( orderby == '' && op ) %]
 <option value="" selected="selected">Bất kỳ</option>
 [% ELSE %]
 <option value="">Bất kỳ</option>
 [% END %]
 </select>
 <input type="submit" class="submit" value="Tìm kiếm" />
 </form>
 </div>
 <div id="matchheading_search" class="residentsearch">
 <p class="tip">Nhập đề mục bất kỳ:</p>
 <form action="/cgi-bin/koha/authorities/authorities-home.pl" method="get">
 <input type="hidden" name="op" value="do_search" />
 <input type="hidden" name="type" value="intranet" />
 <select name="authtypecode">
 [% IF (marcflavour == 'UNIMARC' ) %]<option value="">Tất cả kiểu dữ liệu kiểm soát</option>[% END %]
 [% FOREACH authority_type IN authority_types %]
 [% IF authority_type.authtypecode == authtypecode %]
 <option value="[% authority_type.authtypecode %]" selected="selected">[% authority_type.authtypetext %]</option>
 [% ELSE %]
 <option value="[% authority_type.authtypecode %]">[% authority_type.authtypetext %]</option>
 [% END %]
 [% END %]
 </select>
 <input type="hidden" name="marclist" value="match" />
 <select name="operator">
 [% IF ( operator == 'contains' ) %]
 <option value="contains" selected="selected">có chứa</option>
 [% ELSE %]
 <option value="contains">có chứa</option>
 [% END %]
 [% IF ( operator == 'start' ) %]
 <option value="start" selected="selected">bắt đầu với</option>
 [% ELSE %]
 <option value="start">bắt đầu với</option>
 [% END %]
 [% IF ( operator == 'is' ) %]
 <option value="is" selected="selected">chính xác là</option>
 [% ELSE %]
 <option value="is">chính xác là</option>
 [% END %]
 </select>
 <input id="value_matchheading" type="text" name="value" value="[% value | html %]" class="head-searchbox" />
 <select name="orderby">
 [% IF ( orderby == 'HeadingAsc' ) %]
 <option value="HeadingAsc" selected="selected">Đề mục A-Z</option>
 [% ELSE %]
 <option value="HeadingAsc">Đề mục A-Z</option>
 [% END %]
 [% IF ( orderby == 'HeadingDsc' ) %]
 <option value="HeadingDsc" selected="selected">Đề mục Z-A</option>
 [% ELSE %]
 <option value="HeadingDsc">Đề mục Z-A</option>
 [% END %]
 [% IF ( orderby == '' && op ) %]
 <option value="" selected="selected">Bất kỳ</option>
 [% ELSE %]
 <option value="">Bất kỳ</option>
 [% END %]
 </select>
 <input value="Tìm kiếm" class="submit" type="submit" />
 </form>
 </div>
 <div id="entire_record" class="residentsearch">
 <p class="tip">Nhập trường dữ liệu kiểm soát bất kỳ:</p>
 <form action="/cgi-bin/koha/authorities/authorities-home.pl" method="get">
 <input type="hidden" name="op" value="do_search" />
 <input type="hidden" name="type" value="intranet" />
 <select name="authtypecode">
 [% IF (marcflavour == 'UNIMARC' ) %]<option value="">Tất cả kiểu dữ liệu kiểm soát</option>[% END %]
 [% FOREACH authority_type IN authority_types %]
 [% IF authority_type.authtypecode == authtypecode %]
 <option value="[% authority_type.authtypecode %]" selected="selected">[% authority_type.authtypetext %]</option>
 [% ELSE %]
 <option value="[% authority_type.authtypecode %]">[% authority_type.authtypetext %]</option>
 [% END %]
 [% END %]
 </select>
 <input type="hidden" name="marclist" value="all" />
 <input type="hidden" name="and_or" value="and" />
 <input type="hidden" name="excluding" value="" />
 <select name="operator">
 [% IF ( operator == 'contains' ) %]
 <option value="contains" selected="selected">có chứa</option>
 [% ELSE %]
 <option value="contains">có chứa</option>
 [% END %]
 [% IF ( operator == 'start' ) %]
 <option value="start" selected="selected">bắt đầu với</option>
 [% ELSE %]
 <option value="start">bắt đầu với</option>
 [% END %]
 [% IF ( operator == 'is' ) %]
 <option value="is" selected="selected">chính xác là</option>
 [% ELSE %]
 <option value="is">chính xác là</option>
 [% END %]
 </select>
 <input id="value_anywhere" type="text" name="value" value="[% value | html %]" class="head-searchbox" />
 <select name="orderby">
 [% IF ( orderby == 'HeadingAsc' ) %]
 <option value="HeadingAsc" selected="selected">Đề mục A-Z</option>
 [% ELSE %]
 <option value="HeadingAsc">Đề mục A-Z</option>
 [% END %]
 [% IF ( orderby == 'HeadingDsc' ) %]
 <option value="HeadingDsc" selected="selected">Đề mục Z-A</option>
 [% ELSE %]
 <option value="HeadingDsc">Đề mục Z-A</option>
 [% END %]
 [% IF ( orderby == '' && op ) %]
 <option value="" selected="selected">Bất kỳ</option>
 [% ELSE %]
 <option value="">Bất kỳ</option>
 [% END %]
 </select>
 <input value="Tìm kiếm" type="submit" class="submit" />
 </form>
 </div>
 <ul>
 <li><a class="keep_text" href="#mainmain_heading">Search main heading ($a only)</a></li>
 <li><a class="keep_text" href="#main_heading">Tìm đề mục chính</a></li>
 <li><a class="keep_text" href="#matchheading_search">Tìm kiếm tất cả đề mục</a></li>
 <li><a class="keep_text" href="#entire_record">Search entire record</a></li>
 </ul>
</div><!-- /header_search -->
</div><!-- /gradient -->
<!-- End Authorities Resident Search Box -->
