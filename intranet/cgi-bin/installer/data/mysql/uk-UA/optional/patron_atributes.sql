-- Useful patron atribute types

-- definitions for custom patron fields known as extended patron attributes
-- TRUNCATE borrower_attribute_types;
--  code                      - код - unique key used to identify each custom field
--  description               - опис - description for each custom field
--  repeatable                - повторюється? - defines whether one patron/borrower can have multiple values for this custom field  (1 for yes, 0 for no) (default 0)
--  unique_id                 - унікальний? - defines if this value needs to be unique (1 for yes, 0 for no) (default 0)
--  opac_display              - показувати в ЕК? - defines if this field is visible to patrons on their account in the OPAC (1 for yes, 0 for no)  (default 0)
--  staff_searchable          - пошук в біб.інт.? - defines if this field is searchable via the patron search in the staff client (1 for yes, 0 for no) (default 0)
--  authorised_value_category - список авторитетних значень - foreign key from authorised_values that links this custom field to an authorized value category (default NULL)
--  display_checkout          -- defines if this field displays in checkout screens (default 0)
--  category_code             -- defines a category for an attribute_type (DEFAULT NULL)
--  class                     -- defines a class for an attribute_type (DEFAULT '')
INSERT INTO borrower_attribute_types
 (code,         description,                  repeatable, unique_id, opac_display,  staff_searchable, authorised_value_category) VALUES
('EDU_INST',   'Навчальний заклад',                                            1, 0, 1, 1, NULL),
('ENROLL_EDU', 'Особа, яка навчається',                                        1, 0, 1, 1, NULL),
('EDU_FORM',   'Форма навчання',                                               1, 0, 1, 1, NULL),
('FACULTY',    'Факультет',                                                    1, 0, 1, 1, NULL),
('CLASS',      'Клас, група',                                                  1, 0, 1, 1, NULL),

('PROFESSION', 'Професія',                                                     1, 0, 1, 1, NULL),
('COMPANY',    'Назва організації, компанії…',                                 1, 0, 1, 1, NULL),
('DEPARTMENT', 'Підрозділ, відділення',                                        1, 0, 1, 1, NULL),
('TITLE_PROF', 'Посада',                                                       1, 0, 1, 1, NULL),

('EDUCATION',  'Освітній рівень',                                              1, 0, 1, 1, NULL),
('DEGREE_EDU', 'Освітньо-кваліфікаційний рівень',                              1, 0, 1, 1, NULL),
('QUALIF_EDU', 'Кваліфікаційна педагогічна категорія',                         1, 0, 1, 1, NULL),
('RANK_EDU',   'Педагогічне звання',                                           1, 0, 1, 1, NULL),
('RANK_ACD',   'Вчене звання',                                                 1, 0, 1, 1, NULL),
('DEGREE_ACD', 'Науковий ступінь',                                             1, 0, 1, 1, NULL),

('ETHNICITY',  'Етнічна приналежність',                                        0, 0, 1, 1, NULL),
('ETHNICNOTE', 'Примітки щодо етнічної приналежності',                         0, 0, 1, 1, NULL),
('NATIONAL',   'Національність',                                               0, 0, 1, 0, NULL),

('OBLAST',     'Область (Україна)',                                            0, 0, 1, 0, NULL),
('REGION',     'Район (ділення області)',                                      0, 0, 1, 0, NULL),
('CITY',       'Місто (більше за с.м.т. й село)',                              0, 0, 1, 0, NULL),
('TOWN',       'Селище міського типу',                                         0, 0, 1, 0, NULL),
('VILLAGE',    'Село, селище, хутір',                                          0, 0, 1, 0, NULL),
('STREET',     'Вулиця (площа, провулок,…)',                                   0, 0, 1, 0, NULL),
('HOUSE',      'Дім (№)',                                                      0, 0, 1, 0, NULL),
('APARTMENT',  'Квартира (№)',                                                 0, 0, 1, 0, NULL),

('PASSP_NO',   'Серія та номер паспорта',                                      0, 0, 0, 0, NULL),
('PASSP_DATE', 'Коли видано паспорт',                                          0, 0, 0, 0, NULL),
('PASSP_ORG',  'Де видано паспорт',                                            0, 0, 0, 0, NULL),
('STUD_NO',    'Номер студентського квитка',                                   0, 0, 0, 0, NULL),
('ASPIRAN_NO', 'Номер аспіратнського посвідчення',                             0, 0, 0, 0, NULL),
('TRANSCR_NO', 'Номер залікової книжки',                                       0, 0, 0, 0, NULL),
('EMPL_NO',    'Номер службового посвідчення',                                 0, 0, 0, 0, NULL),
('DRIVER_NO',  'Номер посвідчення водія',                                      0, 0, 0, 0, NULL),

('FATHER',     'Батько, ПІБ',                                                  1, 0, 1, 1, NULL),
('F_EMAIL',    'Батько, електронна пошта',                                     1, 0, 1, 1, NULL),
('F_PHONE',    'Батько, телефон',                                              1, 0, 1, 1, NULL),
('MOTHER',     'Мати, ПІБ',                                                    1, 0, 1, 1, NULL),
('M_EMAIL',    'Мати, електронна пошта',                                       1, 0, 1, 1, NULL),
('M_PHONE',    'Мати, телефон',                                                1, 0, 1, 1, NULL),

('MIDDL_NAME', 'По батькові, середнє ім’я',                                    0, 0, 1, 1, NULL),

('SHOW_BCODE', 'Показувати штрих-код на зведеному екрані списків примірників', 0, 0, 1, 0, 'YES_NO'),

('IDLDAP',     'Ідентифікатор LDAP',                                           0, 0, 0, 1, NULL);

-- Вилучені поля
-- ('PASSP_PREF', 'Серія паспорта',                       0, 0, 0, 0, 0, NULL),

--                                --- ПОЯСНЕННЯ ---
-- EDUCATION  - „Освітній рівень“
-- DEGREE_EDU - „Освітньо-кваліфікаційний рівень“
-- Стаття 30. Освітні та освітньо-кваліфікаційні рівні
--        В Україні встановлюються такі освітні рівні:
--           початкова загальна освіта; базова загальна середня освіта; повна загальна середня освіта;
--           професійно-технічна освіта; базова вища освіта; повна вища освіта.
--        В Україні встановлюються такі освітньо-кваліфікаційні рівні:
--           кваліфікований робітник; молодший спеціаліст; бакалавр; спеціаліст, магістр.

-- ENROLL_EDU - „Особа, яка навчається“
-- Стаття 53. Особи, які навчаються у вищих навчальних закладах:
--           Студент (слухач), Курсант, Екстерн, Асистент-стажист, Інтерн, Клінічний ординатор, Здобувач,
--           Аспірант (ад'юнкт), Докторант
-- також й інші: учень…

-- TITLE_PROF - „Посада“
--  Стаття 48. Основні посади педагогічних і науково-педагогічних працівників:
--            (І-ІІ) викладач; старший викладач; голова предметної (циклової) комісії; завідуючий відділенням;
--            заступник директора; директор.
--            (III-IV) асистент; викладач; старший викладач; директор бібліотеки; науковий працівник бібліотеки; доцент;
--            професор; завідуючий кафедрою; декан; проректор; ректор.
--  та інші посади ...

-- EDU_FORM - „Форма навчання“
--  Стаття 42. Форми навчання у вищих навчальних закладах:
--            денна (очна); вечірня; заочна, дистанційна; екстернатна.

-- DEGREE_ACD - „Науковий ступінь“
-- RANK_ACD   - „Вчене звання“
--  Стаття 59. Наукові ступені і вчені звання:
--            Науковими ступенями є: кандидат наук; доктор наук.
--            Вченими званнями є: старший науковий співробітник; доцент; професор.
--  та наукові ступені інших країн ... (доктор філософії…)

-- QUALIF_EDU - „Кваліфікаційна педагогічна категорія“
-- 4.2. За результатами   атестації  педагогічним  працівникам  присвоюються кваліфікаційні категорії:
--     "спеціаліст",  "спеціаліст другої  категорії",  "спеціаліст  першої  категорії",  "спеціаліст вищої категорії".

-- RANK_EDU - „Педагогічне звання“
-- 5.1. За результатами атестації педагогічним працівникам,  які досягли високих  показників  у  роботі,
--      присвоюються  педагогічні звання:
--     "викладач-методист", "учитель-методист", "вихователь-методист", "педагог-організатор-методист",
--     "практичний психолог-методист",   "керівник   гуртка   -  методист",  "старший викладач", "старший  учитель"
--     "старший   вихователь",   "майстер виробничого навчання  I категорії",  "майстер виробничого навчання II категорії".
