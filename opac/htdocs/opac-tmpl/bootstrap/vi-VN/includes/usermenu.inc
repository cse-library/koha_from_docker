[% USE Koha %]
[% IF ( ( Koha.Preference( 'opacuserlogin' ) == 1 ) && loggedinusername ) %]
 <div id="menu">
 <h4><a href="#" class="menu-collapse-toggle">Your account menu</a></h4>
 <ul class="menu-collapse">
 [% IF ( userview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-user.pl">Thông tin chung</a></li>
 [% IF ( OPACFinesTab ) %]
 [% IF ( accountview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-account.pl">Phí phạt</a></li>
 [% END %]

 [% IF ( userupdateview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-memberentry.pl">Thông tin cá nhân</a></li>
 [% IF Koha.Preference( 'TagsEnabled' ) == 1 %]
 [% IF ( tagsview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-tags.pl?mine=1">Bạn được nhắc đến</a></li>
 [% END %]

 [% IF ( OpacPasswordChange ) %]
 [% IF ( passwdview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-passwd.pl">Đổi mật khẩu</a></li>
 [% END %]

 [% IF EnableOpacSearchHistory %]
 [% IF ( searchhistoryview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-search-history.pl">Lịch sử tìm kiếm</a></li>
 [% END %]

 [% IF ( opacreadinghistory ) %]
 [% IF ( readingrecview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-readingrecord.pl">Bạn đã đọc</a></li>
 [% IF ( OPACPrivacy ) %]
 [% IF ( privacyview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-privacy.pl">your privacy</a></li>
 [% END %]
 [% END # / opacreadinghistory %]

 [% IF Koha.Preference( 'suggestion' ) == 1 %]
 [% IF ( suggestionsview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-suggestions.pl">Đề xuất mua thêm</a></li>
 [% END %]

 [% IF ( EnhancedMessagingPreferences ) %]
 [% IF Koha.Preference( 'EnhancedMessagingPreferencesOPAC' ) %]
 [% IF ( messagingview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-messaging.pl">Tin nhắn</a></li>
 [% END %]
 [% END %]

 [% IF Koha.Preference( 'virtualshelves' ) == 1 %]
 [% IF ( listsview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-shelves.pl?op=list&amp;category=1">your lists</a></li>
 [% END %]

 [% IF Koha.Preference( 'RoutingSerials' ) && logged_in_user && logged_in_user.get_routing_lists.count %]
 [% IF ( routinglistsview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-routing-lists.pl">your routing lists</a></li>
 [% END %]

 [% IF Koha.Preference( 'useDischarge' ) == 1 %]
 [% IF ( dischargeview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-discharge.pl">ask for a discharge</a></li>
 [% END %]

 [% IF Koha.Preference( 'ILLModule' ) == 1 %]
 [% IF ( illrequestsview ) %]
 <li class="active">
 [% ELSE %]
 <li>
 [% END %]
 <a href="/cgi-bin/koha/opac-illrequests.pl">your interlibrary loan requests</a></li>
 [% END %]

 </ul>
 </div>
[% END %]
