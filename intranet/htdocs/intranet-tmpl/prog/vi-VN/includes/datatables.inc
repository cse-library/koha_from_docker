[% USE Asset %]
[% INCLUDE 'format_price.inc' %]
[% Asset.css("css/buttons.dataTables.min.css") %]
[% Asset.js("lib/jquery/plugins/jquery.dataTables.min.js") %]
[% Asset.js("lib/jquery/plugins/dataTables.buttons.min.js") %]
[% Asset.js("lib/jquery/plugins/buttons.colVis.min.js") %]
[% Asset.js("lib/jquery/plugins/jszip.min.js") %]
[% Asset.js("lib/jquery/plugins/buttons.print.min.js") %]
[% Asset.js("lib/jquery/plugins/buttons.html5.min.js") %]
<script type="text/javascript">
//<![CDATA[
    var MSG_DT_FIRST = _("Lần 1");
    var MSG_DT_LAST = _("Trước");
    var MSG_DT_NEXT = _("Tiếp tục");
    var MSG_DT_PREVIOUS = _("Sau");
    var MSG_DT_EMPTY_TABLE = _("Không có dữ liệu hiển thị trong bảng");
    var MSG_DT_INFO = _("Hiển thị từ _START_ tới _END_ trong _TOTAL_");
    var MSG_DT_INFO_EMPTY = _("Không có dữ liệu hiển thị");
    var MSG_DT_INFO_FILTERED = _("(Lọc từ _MAX_)");
    var MSG_DT_LENGTH_MENU = _("Hiển thị trang _MENU_");
    var MSG_DT_LOADING_RECORDS = _("Đang tải...");
    var MSG_DT_PROCESSING = _("Đang xử lý...");
    var MSG_DT_SEARCH = _("Tìm kiếm:");
    var MSG_DT_ZERO_RECORDS = _("Không tìm thấy biểu ghi phù hợp");
    var MSG_DT_ALL = _("Tất cả");
    var CONFIG_EXCLUDE_ARTICLES_FROM_SORT = _("a an the");
    var MSG_DT_COPY_TITLE = _("Copy to clipboard");
    var MSG_DT_COPY_KEYS = _("Press ctrl or ⌘ + C to copy the table data<br>to your system clipboard.<br><br>To cancel, click this message or press escape.");
    var MSG_DT_COPY_SUCCESS_ONE = _("Copied one row to clipboard");
    var MSG_DT_COPY_SUCCESS_X = _("Copied %d rows to clipboard");
//]]>
</script>
[% Asset.js("js/datatables.js") %]
