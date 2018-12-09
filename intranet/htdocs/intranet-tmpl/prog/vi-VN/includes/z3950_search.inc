<script type="text/javascript">
//<![CDATA[

    var MSG_CHOOSE_Z3950 = _("Please choose at least one external target");

[% IF ( total_pages ) %]
    var interface = "[% interface %]";
    var theme = "[% theme %]";
    var MSG_LOADING = _("Đang tải");

function validate_goto_page(){
    var page = $('#goto_page').val();
    if(isNaN(page)) {
        alert(_("Số trang được nhập vào không phải là số."));
        return false;
    }
    else if(page < 1 || page > [% total_pages %] ) {
        alert(_("Số trang bạn nhập vào phải là con số giữa 1 và %s.").format([% total_pages %]));
        return false;
    }
    else {
        return true;
    }
}
[% END %]

//]]>
</script>
