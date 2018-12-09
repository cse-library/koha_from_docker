<script type="text/javascript">
    /* Strings for translation */
    var MSG_REPLACE_RECORD = _("Please note that this external search could replace the current record.");
    var MSG_DELETE_ALL_ITEMS = _("%s tài liệu đính kèm biểu ghi này. Bạn phải xóa hết tài liệu trước khi xóa biểu ghi.");
    var CONFIRM_RECORD_USED_IN_ORDERS = _("Cảnh báo: Biểu ghi này được sử dụng trong %s đơn hàng.  Việc xóa dữ liệu của bạn có thể gây lỗi trên phân hệ bổ sung. Bạn chắc chắn muốn xóa biểu ghi này?");
    var MSG_RECORD_USED_IN_ORDERS = _("%s đơn hàng sử dụng biểu ghi này. Bạn phải có quyền quản trị đơn hàng mới có thể xóa biểu ghi này.");
    var CONFIRM_IN_DELETED_ORDERS = _("%s đơn hàng bị xóa đang sử dụng biểu ghi này. Bạn chắc chắn muốn xóa biểu ghi này?");
    var MSG_IN_DELETED_ORDERS = _("%s đơn hàng bị xóa đang sử dụng biểu ghi này. Bạn phải có quyền quản trị đơn hàng mới có thể xóa biểu ghi này.");
    var CONFIRM_DELETION_HOLDS = _("%sđặt mượn liên quan đến biểu ghi này. Bạn chắc chắn muốn xóa biểu ghi này?");
    var CONFIRM_RECORD_DELETION = _("Bạn có chắc chắn xóa biểu ghi này không?");
    var MSG_DELETE_ALL_HOLDS = _("%s đặt mượn liên quan đến biểu ghi này. Bạn phải xóa các đặt mượn liên quan trước khi xóa toàn bộ tài liệu đính kèm biểu ghi.");
    var CONFIRM_DELETE_ITEMS = _("Bạn chắc chắn muốn xóa %s tài liệu đính kèm?");
    var MSG_NO_ITEMS = _("Biểu ghi này không có tài liệu.");

    /* Some required variables from the template */
    var biblionumber = [% biblionumber %];
    var count = [% count %];
    var holdcount = [% holdcount %];
    var countorders = [% countorders %];
    var countdeletedorders = [% countdeletedorders %];

    /* provide Z3950 search points */
    function GetZ3950Terms(){
        var strQuery="&frameworkcode=";
        [% FOREACH z3950_search_param IN z3950_search_params %]
            strQuery += "&" + "[% z3950_search_param.name |uri %]" + "=" + "[% z3950_search_param.value |uri %]";
        [% END %]
        return strQuery;
    }
</script>
