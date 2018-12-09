[%- USE KohaPlugins -%]
[% USE Asset %]
[% UNLESS ( is_popup ) %]
 [% SET OpacLangSelectorMode = Koha.Preference('OpacLangSelectorMode') %]
 [% IF ( opaccredits ) %]
 <div class="container-fluid">
 <div class="row-fluid">
 <div class="span12">
 <div id="opaccredits" class="noprint">
 [% opaccredits %]
 </div>
 </div>
 </div>
 </div>
 [% END #/ opaccredits %]

 [% IF ( OpacKohaUrl ) %]
 <div class="container-fluid">
 <div class="row-fluid">
 <div class="span12">
 <div id="koha_url" class="clearfix noprint">
 <p>Powered by
 [% IF template.name.match('opac-main.tt') %]
 <a class="koha_url" href="http://koha-community.org">Koha</a>
 [% ELSE %]
 <a class="koha_url" rel="nofollow" href="http://koha-community.org">Koha</a>
 [% END %]</p>
 </div>
 </div> <!-- /.span12 -->
 </div> <!-- /.row-fluid -->
 </div> <!-- /.container-fluid -->
 [% END # / OpacKohaUrl %]

</div> <!-- / #wrap in masthead.inc -->
[% IF OpacLangSelectorMode == 'both' || OpacLangSelectorMode == 'footer' %]
 [% IF ( opaclanguagesdisplay ) %]
 [% IF ( languages_loop && opaclanguagesdisplay ) %]
 [% UNLESS ( one_language_enabled ) %]
 <div id="changelanguage" class="navbar navbar-fixed-bottom navbar-static-bottom noprint">
 <div class="navbar-inner">
 <ul id="i18nMenu" class="nav">
 <li><p class="lang navbar-text"><strong>Ngôn ngữ:&nbsp;</strong></p></li>
 [% FOREACH languages_loo IN languages_loop %]
 [% IF ( languages_loo.group_enabled ) %]
 [% IF ( languages_loo.plural ) %]
 <li class="dropdown">
 <a data-toggle="dropdown" class="dropdown-toggle sublangs" id="show[% languages_loo.rfc4646_subtag %]" href="#">[% IF ( languages_loo.native_description ) %][% languages_loo.native_description %][% ELSE %][% languages_loo.rfc4646_subtag %][% END %] <b class="caret"></b></a>
 <ul id="sub[% languages_loo.rfc4646_subtag %]" class="dropdown-menu">
 [% FOREACH sublanguages_loo IN languages_loo.sublanguages_loop %]
 [% IF ( sublanguages_loo.enabled ) %]
 [% IF ( sublanguages_loo.sublanguage_current ) %]
 <li> <p>[% sublanguages_loo.native_description %] [% sublanguages_loo.script_description %] [% sublanguages_loo.region_description %] [% sublanguages_loo.variant_description %] ([% sublanguages_loo.rfc4646_subtag %])</p></li>
 [% ELSE %]
 <li><a href="/cgi-bin/koha/opac-changelanguage.pl?language=[% sublanguages_loo.rfc4646_subtag %]"> [% sublanguages_loo.native_description %] [% sublanguages_loo.script_description %] [% sublanguages_loo.region_description %] [% sublanguages_loo.variant_description %] ([% sublanguages_loo.rfc4646_subtag %])</a></li>
 [% END %]
 [% END # / IF sublanguages_loo.enabled %]
 [% END # / FOREACH sublanguages_loo %]
 </ul>
 </li> <!-- / .more -->
 [% ELSE %]
 [% IF ( languages_loo.group_enabled ) %]
 [% IF ( languages_loo.current ) %]
 <li class="active"><p class="navbar-text">[% IF ( languages_loo.native_description ) %][% languages_loo.native_description %][% ELSE %][% languages_loo.rfc4646_subtag %][% END %]</p></li>
 [% ELSE %]
 <li><a href="/cgi-bin/koha/opac-changelanguage.pl?language=[% languages_loo.rfc4646_subtag %]">[% IF ( languages_loo.native_description ) %][% languages_loo.native_description %][% ELSE %][% languages_loo.rfc4646_subtag %][% END %]</a></li>
 [% END %]
 [% END # / IF languages_loo.current %]
 [% END # / IF ( languages_loo.plural ) %]
 [% END # / IF ( languages_loo.group_enabled ) %]
 [% END # / FOREACH languages_loo IN languages_loop %]
 </ul> <!-- / #i18menu -->
 </div> <!-- / .navbar-inner -->
 </div> <!-- / #changelanguage -->
 [% END # / UNLESS ( one_language_enabled ) %]
 [% END # / IF ( languages_loop && opaclanguagesdisplay ) %]
 [% END # / IF opaclanguagesdisplay %]
[% END %]
[% END # / UNLESS is_popup %]


<!-- JavaScript includes -->
[% Asset.js("lib/jquery/jquery.js") %]
[% Asset.js("lib/jquery/jquery-ui.js") %]
<script>
// Resolve name collision between jQuery UI and Twitter Bootstrap
$.widget.bridge('uitooltip', $.ui.tooltip);
</script>
[% Asset.js("lib/bootstrap/js/bootstrap.min.js") %]
[% Asset.js("js/global.js") %]
<script>
    Modernizr.load([
        // Test need for polyfill
        {
            test: window.matchMedia,
            nope: "[% Asset.url('lib/media.match.min.js') %]"
        },
        // and then load enquire
        "[% Asset.url('lib/enquire.min.js') %]",
        "[% Asset.url('js/script.js') %]",
    ]);

    // Fix for datepicker in a modal
    $.fn.modal.Constructor.prototype.enforceFocus = function () {};
</script>
[% IF ( OPACAmazonCoverImages || SyndeticsCoverImages ) %]
<script>//<![CDATA[
        var NO_AMAZON_IMAGE = _("Không có ảnh bìa");
    //]]>
</script>
[% Asset.js("js/amazonimages.js") %]
[% END %]

[% Asset.js("lib/emoji-picker/js/config.js") %]
[% Asset.js("lib/emoji-picker/js/util.js") %]
[% Asset.js("lib/emoji-picker/js/jquery.emojiarea.js") %]
[% Asset.js("lib/emoji-picker/js/emoji-picker.js") %]

<script>
    //<![CDATA[
    var MSG_CONFIRM_AGAIN = _("Cảnh báo: Hành động này không thể được khôi phục lại. Xin xác nhận lại một lần nữa")
    var MSG_DELETE_SEARCH_HISTORY = _("Bạn chắc chắn muốn xóa lịch sử tìm kiếm của mình?");
    var MSG_NO_SUGGESTION_SELECTED = _("No suggestion was selected");
    [% IF Koha.Preference( 'opacbookbag' ) == 1 or Koha.Preference( 'virtualshelves' ) == 1 %]
        var MSG_BASKET_EMPTY = _("Giỏ tài liệu trống");
        var MSG_RECORD_IN_BASKET = _("The item is already in your cart");
        var MSG_RECORD_ADDED = _("The item has been added to your cart");
        var MSG_RECORD_REMOVED = _("The item has been removed from your cart");
        var MSG_NRECORDS_ADDED = _(" tài liệu đã được thêm vào giỏ tài liệu của bạn");
        var MSG_NRECORDS_IN_BASKET = _("đã có trong giỏ tài liệu của bạn");
        var MSG_NO_RECORD_SELECTED = _("Không có tài liệu nào được chọn");
        var MSG_NO_RECORD_ADDED = _("Không có tài liệu được thêm vào giỏ tài liệu của bạn");
        var MSG_CONFIRM_DEL_BASKET = _("Bạn chắc chắn muốn xóa giỏ tài liệu của bạn?");
        var MSG_CONFIRM_DEL_RECORDS = _("Bạn chắc chắn muốn loại bỏ các tài liệu đã chọn?");
        var MSG_ITEM_IN_CART = _("Trong giỏ tài liệu");
        var MSG_IN_YOUR_CART = _("Tài liệu trong giỏ tài liệu của bạn: ");
        var MSG_ITEM_NOT_IN_CART = _("Thêm vào giỏ tài liệu");
    [% END %]
    [% IF ( Koha.Preference( 'opacuserlogin' ) == 1 ) && ( Koha.Preference( 'TagsEnabled' ) == 1 ) %]
        var MSG_TAGS_DISABLED = _("Xin lỗi, các từ khóa không được kích hoạt trong hệ thống của bạn.");
        var MSG_TAG_ALL_BAD = _("Lỗi! Từ khóa của bạn chứa ký tự không phù hợp. Bạn không thể tạo từ khóa  này. Bạn vui lòng thử lại với từ khóa khác.");
        var MSG_ILLEGAL_PARAMETER = _("Lỗi! Thông số không phù hợp");
        var MSG_TAG_SCRUBBED = _("Ghi chú: Từ khóa của bạn có chứa ký tự không phù hợp nên đã bị loại bỏ. Từ khóa đã được thêm như là ");
        var MSG_ADD_TAG_FAILED = _("Error! Adding tags failed at");
        var MSG_ADD_TAG_FAILED_NOTE = _("Lưu ý: Bạn chỉ có thể thêm một từ khóa cho một tài liệu. Bạn vui lòng kiểm tra 'Từ khóa' để xem các từ khóa hiện tại của bạn.");
        var MSG_DELETE_TAG_FAILED = _("Lỗi! Bạn không thể xóa từ khóa");
        var MSG_DELETE_TAG_FAILED_NOTE = _("Lưu ý: Bạn chỉ được phép xóa các từ khóa bạn tạo ra.")
        var MSG_LOGIN_REQUIRED = _("Bạn phải đăng nhập để thêm từ khóa.");
        var MSG_TAGS_ADDED = _("Từ khóa đã nhập: ");
        var MSG_TAGS_DELETED = _("Từ khóa đã nhập: ");
        var MSG_TAGS_ERRORS = _("Lỗi: ");
        var MSG_MULTI_ADD_TAG_FAILED = _("Không thể thêm từ khóa nữa.");
        var MSG_NO_TAG_SPECIFIED = _("Không có từ khóa nào được khai báo.");
    [% END %]
    [% IF ( OPACAmazonCoverImages || SyndeticsCoverImages ) %]
        $(window).load(function() {
            verify_images();
         });
    [% END %]
    $(".print-large").on("click",function(){
        window.print();
        return false;
    });
    $("#ulactioncontainer > ul > li > a.addtoshelf").on("click",function(){
        Dopop('opac-addbybiblionumber.pl?biblionumber=[% biblionumber | html %]');
        return false;
    });
    $(".addrecord").on("click",function(){
        addRecord('[% biblionumber | html %]');
        return false;
    });
    $(".cartRemove").on("click",function(){
        delSingleRecord('[% biblionumber | html %]');
        return false;
    });
    $(".clearsh").on("click", function(){
        return confirmDelete(MSG_DELETE_SEARCH_HISTORY);
    });
    //]]>
</script>

[% IF Koha.Preference( 'opacbookbag' ) == 1 %]
 [% Asset.js("js/basket.js") %]
[% ELSIF ( Koha.Preference( 'virtualshelves' ) == 1 ) %]
 [% Asset.js("js/basket.js") %]
[% ELSE %]
 <script>var readCookie;</script>
[% END %]

[% IF Koha.Preference( 'opacuserlogin' ) == 1 %][% IF Koha.Preference( 'TagsEnabled' ) == 1 %][% Asset.js("js/tags.js") %][% END %][% ELSE %][% END %]
[% IF ( GoogleJackets ) %]
 [% Asset.js("js/google-jackets.js") %]
 <script>
        //<![CDATA[
        var NO_GOOGLE_JACKET = _("Không có ảnh bìa");
        //]]>
    </script>
[% END %]
[% IF ( Koha.Preference('Coce') && Koha.Preference('CoceProviders') ) %]
 [% Asset.js("js/coce.js") %]
 <script>
        //<![CDATA[
        var NO_COCE_JACKET = _("Không có ảnh bìa");
        //]]>
    </script>
[% END %]

[% IF OpenLibraryCovers || OpenLibrarySearch %]
 [% Asset.js("js/openlibrary.js") %]
 <script>
    //<![CDATA[
    var NO_OL_JACKET = _("Không có ảnh bìa");
    var OL_PREVIEW = _("Xem trước");
    //]]>
    </script>
[% END %]

[% IF OPACLocalCoverImages %]
 [% Asset.js("js/localcovers.js") %]
 <script>
    //<![CDATA[
    var NO_LOCAL_JACKET = _("Không có ảnh bìa");
    //]]>
    </script>
[% END %]

[% IF ( BakerTaylorEnabled ) %]
 [% Asset.js("js/bakertaylorimages.js") %]
 <script>
        //<![CDATA[
        var NO_BAKERTAYLOR_IMAGE = _("Không có ảnh bìa");
        $(window).load(function(){
            bt_verify_images();
        });
        //]]>
    </script>
[% END %]
[% IF ( GoogleIndicTransliteration ) %]
 <script src="https://www.google.com/jsapi"></script>
 [% Asset.js("js/googleindictransliteration.js") %]
[% END %]

[% IF Koha.Preference( 'OpacNewsLibrarySelect' ) %]
<script>
    $("#news-branch-select").change(function() {
        $( "#news-branch-select" ).submit();
    });
</script>
[% END %]

[% Asset.js("lib/jquery/plugins/jquery.cookie.min.js") %]
<script>
$(document).ready(function() {
    if($('#searchsubmit').length) {
        $(document).on("click", '#searchsubmit', function(e) {
            jQuery.removeCookie("form_serialized", { path: '/'});
            jQuery.removeCookie("form_serialized_limits", { path: '/'});
            jQuery.removeCookie("num_paragraph", { path: '/'});
            jQuery.removeCookie("search_path_code", { path: '/'});
        });
    }

    window.emojiPicker = new EmojiPicker({
      emojiable_selector: '[data-emojiable=true]',
      assetsPath: '[% interface %]/lib/emoji-picker/img/',
      popupButtonClasses: 'fa fa-smile-o'
    });
    window.emojiPicker.discover();
});
</script>
[% PROCESS jsinclude %]
[% IF ( OPACUserJS ) %]
 <script>
        //<![CDATA[
        [% OPACUserJS %]
        //]]>
    </script>
[% END %]
[% IF SCO_login %]
 [% SET SCOUserJS = Koha.Preference('SCOUserJS') %]
 [% IF ( SCOUserJS ) %]
 <script>
            //<![CDATA[
            [% SCOUserJS %]
            //]]>
        </script>
 [% END %]
[% END %]
[% KohaPlugins.get_plugins_opac_js %]
</body>
</html>
