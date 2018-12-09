[% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]
 <div id="circ_search" class="residentsearch">
 <p class="tip">Nhập số thẻ hoặc tên của bạn đọc:</p>
 <form action="/cgi-bin/koha/circ/circulation.pl" id="patronsearch" method="post">
 [% IF ( CircAutocompl ) %]
 <div class="autocomplete">
 <input autocomplete="off" id="findborrower" name="findborrower" size="40" class="head-searchbox focus" type="text" />
 <input class="submit" id="autocsubmit" type="submit" value="Tìm kiếm" />
 [% IF ( stickyduedate ) %]
 <input type="hidden" name="duedatespec" value="[% duedatespec %]" />
 <input type="hidden" name="stickyduedate" value="[% stickyduedate %]" />
 [% END %]
 </div>
 [% ELSE %]
 <input id="findborrower" name="findborrower" size="40" class="head-searchbox focus" type="text" />
 [% IF ( stickyduedate ) %]
 <input type="hidden" name="duedatespec" value="[% duedatespec %]" />
 <input type="hidden" name="stickyduedate" value="[% stickyduedate %]" />
 [% END %]
 <input value="Tìm kiếm" type="submit" class="submit" />
 [% END %]
 </form>
 </div>
 [% END %]
