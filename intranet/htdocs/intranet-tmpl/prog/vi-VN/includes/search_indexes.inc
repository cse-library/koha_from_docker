[% USE Koha %]
<select class="advsearch" name="idx">
 <option value="kw">Từ khóa</option>
 <option value="kw,phr">&nbsp;&nbsp;&nbsp;&nbsp; Cụm từ</option>
 <option value="au">Tác giả</option>
 <option value="au,phr">&nbsp;&nbsp;&nbsp;&nbsp; Cụm từ tên tác giả</option>
 <option value="cpn">&nbsp;&nbsp;&nbsp;&nbsp; Tên tổ chức</option>
 <option value="cfn">&nbsp;&nbsp;&nbsp;&nbsp; Tên hội nghị</option>
 <option value="cpn,phr">&nbsp;&nbsp;&nbsp;&nbsp; Cụm từ hội nghị</option>
 <option value="cfn,phr">&nbsp;&nbsp;&nbsp;&nbsp; Cụm từ hội nghị</option>
 <option value="pn">&nbsp;&nbsp;&nbsp;&nbsp; Cá nhân</option>
 <option value="pn,phr">&nbsp;&nbsp;&nbsp;&nbsp; Cụm từ tên cá nhân</option>
 <option value="ti">Nhan đề</option>
 <option value="ti,phr">&nbsp;&nbsp;&nbsp;&nbsp; Cụm từ nhan đề</option>
 <option value="se">&nbsp;&nbsp;&nbsp;&nbsp; Nhan đề tùng thư</option>
 <option value="su">Chủ đề</option>
 <option value="su,phr">&nbsp;&nbsp;&nbsp;&nbsp; Cụm từ chủ đề</option>
 [% IF ( expanded_options ) %]
 <option value="su-br">&nbsp;&nbsp;&nbsp;&nbsp; Chủ đề và thuật ngữ rộng hơn</option>
 <option value="su-na">&nbsp;&nbsp;&nbsp;&nbsp; Chủ đề và thuật ngữ hẹp hơn</option>
 <option value="su-rl">&nbsp;&nbsp;&nbsp;&nbsp; Chủ đề và thuật ngữ liên quan</option>
 [% END %]
 <option value="bc">Đăng ký cá biệt</option>
 <option value="location">Kho tài liệu</option>
 [% IF ( Koha.Preference('IntranetNumbersPreferPhrase') ) %]
 <option value="sn,phr">Số tiêu chuẩn</option>
 [% ELSE %]
 <option value="sn">Số tiêu chuẩn</option>
 [% END %]
 <option value="nb">&nbsp;&nbsp;&nbsp;&nbsp; Số ISBN</option>
 <option value="ns">&nbsp;&nbsp;&nbsp;&nbsp; Số ISSN</option>
 [% IF ( Koha.Preference('IntranetNumbersPreferPhrase') ) %]
 <option value="callnum,phr">&nbsp;&nbsp;&nbsp;&nbsp; Ký hiệu phân loại</option>
 [% ELSE %]
 <option value="callnum">&nbsp;&nbsp;&nbsp;&nbsp; Ký hiệu phân loại</option>
 [% END %]
 <option value="ln,rtrn">Ngôn ngữ</option>
 <option value="nt">Ghi chú/Bình luận</option>
 [% IF (marcflavour != 'UNIMARC' ) %]
 <option value="curriculum">Chương trình đào tạo</option>
 [% END %]
 <option value="pb">Nhà xuất bản</option>
 <option value="pl">Nơi xuất bản</option>

 [%# Use non-normalized st-year instead of st-numeric, %]
 [%# since pubdate can include 'u' to signify unknown %]
 [%# dates. See "Legal Characters" at: %]
 [%# http://www.loc.gov/marc/bibliographic/bd008a.html %]
 [%# This search is also for date ranges due to the %]
 [%# special Zebra r=r CCL mapping for 'yr' %]
 <option value="yr,st-year">Publication date (yyyy-yyyy)</option>
 <option value="acqdate,st-date-normalized">Ngày bổ sung (yyyy-mm-dd)</option>
</select>
