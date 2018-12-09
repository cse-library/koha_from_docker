<fieldset class="rows" id="memberentry_altaddress">
 <legend id="alt_contact_lgd">Thông tin liên hệ thay thế</legend><ol>
[% UNLESS noaltcontactsurname %]
 <li>
 [% IF ( mandatoryaltcontactsurname ) %]
 <label for="altcontactsurname" class="required">
 [% ELSE %]
 <label for="altcontactsurname">
 [% END %] Họ:</label>
 <input type="text" name="altcontactsurname" id="altcontactsurname" value="[% patron.altcontactsurname %]" />
 [% IF ( mandatoryaltcontactsurname ) %]<span class="required">Bắt buộc</span>[% END %]
 </li>
[% END %]
[% UNLESS noaltcontactfirstname %]
 <li>
 [% IF ( mandatoryaltcontactfirstname ) %]
 <label for="altcontactfirstname" class="required">
 [% ELSE %]
 <label for="altcontactfirstname">
 [% END %] Tên:</label>
 <input type="text" name="altcontactfirstname" id="altcontactfirstname" value="[% patron.altcontactfirstname %]" />
 [% IF ( mandatoryaltcontactfirstname ) %]<span class="required">Bắt buộc</span>[% END %]
 </li>
[% END %]
[% UNLESS noaltcontactaddress1 %]
 <li>
 [% IF ( mandatoryaltcontactaddress1 ) %]
 <label for="altcontactaddress1" class="required">
 [% ELSE %]
 <label for="altcontactaddress1">
 [% END %] Địa chỉ :</label>
 <input type="text" name="altcontactaddress1" id="altcontactaddress1" value="[% patron.altcontactaddress1 %]" size="40" />
 [% IF ( mandatoryaltcontactaddress1 ) %]<span class="required">Bắt buộc</span>[% END %]
 </li>
[% END %]
[% UNLESS noaltcontactaddress2 %]
 <li>
 [% IF ( mandatoryaltcontactaddress2 ) %]
 <label for="altcontactaddress2" class="required">
 [% ELSE %]
 <label for="altcontactaddress2">
 [% END %] Địa chỉ 2:</label>
 <input type="text" name="altcontactaddress2" id="altcontactaddress2" value="[% patron.altcontactaddress2 %]" size="40" />
 [% IF ( mandatoryaltcontactaddress2 ) %]<span class="required">Bắt buộc</span>[% END %]
 </li>
[% END %]
[% UNLESS noaltcontactzipcode %]
 <li>
 [% IF ( mandatoryaltcontactzipcode ) %]
 <label for="altcontactzipcode" class="required">
 [% ELSE %]
 <label for="altcontactzipcode">
 [% END %]
 ZIP/Postal code:</label>
 <input type="text" name="altcontactzipcode" id="altcontactzipcode" value="[% patron.altcontactzipcode %]" size="5" />
 [% IF ( mandatoryaltcontactzipcode ) %]<span class="required">Bắt buộc</span>[% END %]
 </li>
[% END %]
[% UNLESS noaltcontactaddress3 %]
 <li>
 [% IF ( mandatoryaltcontactaddress3 ) %]
 <label for="altcontactaddress3" class="required">
 [% ELSE %]
 <label for="altcontactaddress3">
 [% END %] Thành phố:</label>
 <input type="text" name="altcontactaddress3" id="altcontactaddress3" value="[% patron.altcontactaddress3 %]" size="20" />
 [% IF ( mandatoryaltcontactaddress3 ) %]<span class="required">Bắt buộc</span>[% END %]
 </li>
[% END %]
[% UNLESS noaltcontactstate %]
 <li>
 [% IF ( mandatoryaltcontactstate ) %]
 <label for="altcontactstate" class="required">
 [% ELSE %]
 <label for="altcontactstate">
 [% END %] Bang:</label>
 <input type="text" name="altcontactstate" id="altcontactstate" value="[% patron.altcontactstate %]" size="20" />
 [% IF ( mandatoryaltcontactstate ) %]<span class="required">Bắt buộc</span>[% END %]
 </li>
[% END %]
[% UNLESS noaltcontactcountry %]
 <li>
 [% IF ( mandatoryaltcontactcountry ) %]
 <label for="altcontactcountry" class="required">
 [% ELSE %]
 <label for="altcontactcountry">
 [% END %] Quốc gia</label>
 <input type="text" name="altcontactcountry" id="altcontactcountry" value="[% patron.altcontactcountry %]" size="20" />
 [% IF ( mandatoryaltcontactcountry ) %]<span class="required">Bắt buộc</span>[% END %]
</li>
[% END %]
[% UNLESS noaltcontactphone %]
 <li>
 [% IF ( mandatoryaltcontactphone ) %]
 <label for="altcontactphone" class="required">
 [% ELSE %]
 <label for="altcontactphone">
 [% END %] Điện thoại:</label>
 <input type="text" name="altcontactphone" id="altcontactphone" value="[% patron.altcontactphone %]" />
 [% IF ( mandatoryaltcontactphone ) %]<span class="required">Bắt buộc</span>[% END %]
 </li>
[% END %]
</ol>
</fieldset>
