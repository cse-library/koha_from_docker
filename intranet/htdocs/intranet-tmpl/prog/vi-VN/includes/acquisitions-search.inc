<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1><!-- Begin Acquisitions Resident Search Box -->
<div id="header_search">
<div id="supplier_search" class="residentsearch">
 <p class="tip">Tìm nhà cung cấp:</p>
 <form name="findsupplier" action="/cgi-bin/koha/acqui/booksellers.pl" method="post">
 <input type="text" size="25" name="supplier" id="supplier" class="focus" />
 <input class="submit" type="submit" value="Tìm kiếm" /></form>
</div>
 <div id="orders_search" class="residentsearch">
 <p class="tip">Tìm đơn hàng:</p>
 
 <form action="/cgi-bin/koha/acqui/histsearch.pl" method="post">
 <label for="title">Nhan đề: </label> <input type="text" id="title" name="title" size="15" value="[% title %]" />
 <label for="searchsupplier">Nhà cung cấp:</label> <input type="text" id="searchsupplier" name="name" size="15" value="[% name|html %]" />
 <input type="hidden" id="do_search" name="do_search" value="do" />
 <span class="filteraction" id="filteraction_off" style="display:none"> <a href="#" class="toggle_element" data-element="#filters,.filteraction">[-]</a></span>
 <span class="filteraction" id="filteraction_on"> <a href="#" class="toggle_element" data-element="#filters,.filteraction">[+]</a></span>
 <input value="Tìm kiếm" type="submit" class="submit" /> <a href="/cgi-bin/koha/acqui/histsearch.pl">Tìm kiếm nâng cao</a>
 <p id="filters" style="display:none">
 <label for="basket">Giỏ đặt hàng: </label><input type="text" name="basket" id="basket" />
 <label for="booksellerinvoicenumber">Số hóa đơn: </label><input type="text" name="booksellerinvoicenumber" id="booksellerinvoicenumber" />
 </p>
 </form>
 </div> 
 <ul id="tabtriggers">
 <li><a href="#supplier_search">Tìm kiếm nhà cung cấp</a></li>
 <li><a href="#orders_search">Tìm kiếm đơn hàng</a></li>
 </ul> 
</div><!-- /header_search -->
</div><!-- /gradient -->
<!-- End Acquisitions Resident Search Box -->
