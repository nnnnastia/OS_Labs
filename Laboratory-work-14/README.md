## Основи керування віртуальними ОС
### 2.1 Створення віртуальної машини через графічний інтерфейс

<img width="876" height="438" alt="image" src="https://github.com/user-attachments/assets/9d0102a4-f371-4cc7-879a-018bfcfe4982" />

<img width="875" height="428" alt="image" src="https://github.com/user-attachments/assets/b3f12423-8e88-4b08-a7cd-c235fdee3a42" />

<img width="882" height="438" alt="image" src="https://github.com/user-attachments/assets/8a0c28c2-df15-4a89-aca6-d08449757d53" />

<img width="885" height="436" alt="image" src="https://github.com/user-attachments/assets/9733b78d-6d80-458d-bf72-bbd03417dd0b" />

<img width="713" height="326" alt="image" src="https://github.com/user-attachments/assets/f145b3f5-6dd2-42d5-bacd-fe0159f61392" />

рис. 1, 2, 3, 4, 5 - фрагменти екрану з рішенням завдання 2.1.3 "Створити віртуальну машину, використовуючи графічний інтерфейс та враховуючи наступні значення параметрів:
- назва = «Linux of Surname», де Surname – ваше прізвище транслітерацією, наприклад «Linux of Blazhko»;
- файл ISO-образу = ubuntu-14.04.6-server-i386.iso;
- розмір оперативної пам’яті (Мб) = 10 * group + var, де group – номер вашої групи, var – номер вашого варіанту, наприклад, 10 * 221 + 5 = 2215 Мб;
- кількість ядер процесору = 1;
- розмір жорсткого диску (Мб) = 40 * group, наприклад, 40 * 221 = 8840 Мб = 8,84 Гб;
- правило Port Forwarding на першу мережеву карту, яке буде перенаправляти мережеві пакети для з’єднання через SSH-протокол із guest-ОС (IP-address=10.0.2.15, SSH-
port=22) на IP-адресу=127.0.0.1 з використанням SSH-port=1234.

<img width="832" height="279" alt="image" src="https://github.com/user-attachments/assets/577f182d-a49c-45ea-8b57-aa01eb511c1e" />

<img width="816" height="237" alt="image" src="https://github.com/user-attachments/assets/4f8bf06e-9eaa-47ad-a435-cfa79a8ea6e3" />

<img width="315" height="228" alt="image" src="https://github.com/user-attachments/assets/ef0e0a22-3bbf-4b12-8dbc-4cedd805b50c" />

<img width="841" height="392" alt="image" src="https://github.com/user-attachments/assets/d29e1f3f-e63d-4568-8178-ca6a92691347" />

рис. 6, 7, 8, 9 - фрагменти екрану з рішенням завдання 2.1.4 "Запустити віртуальну машину, створену у пункті 2.1.3, та виконати інсталяцію віртуальної ОС, враховуючи параметри:
- hostname = os-surname, наприклад, os-blazhko;
- user account = surname, наприклад, blazhko;
- time zone = Kiev;
- Software = OpenSSH server;"

<img width="661" height="488" alt="image" src="https://github.com/user-attachments/assets/4c0d0bee-2584-4def-abfc-c93a2538a2eb" />

рис. 10 - фрагмент екрану з рішенням завдання 2.1.5 "Після інсталяції та перезапуску віртуальної машини виконати вхід до віртуальної ОС, використовуючи створений обліковий запис."

<img width="812" height="650" alt="image" src="https://github.com/user-attachments/assets/4d7c6de2-2b05-4706-9d01-71323538468e" />

рис. 11 - фрагмент екрану з рішенням завдання 2.1.6 "Повторити вхід до віртуальної машини через SSH-протокол."

### 2.2 Створення віртуальної машини через інтерфейс командного рядку

<img width="842" height="606" alt="image" src="https://github.com/user-attachments/assets/1a04790d-517e-41c6-a6b9-a5821a2a3df6" />

<img width="603" height="65" alt="image" src="https://github.com/user-attachments/assets/bacc0b70-1f04-41eb-a86e-9b479bfb056d" />

рис. 12, 13 - фрагменти екрану з рішенням завдання 2.2.1 "Створити віртуальну машину, використовуючи інтерфейс командного рядку та враховуючи наступні значення параметрів:
- назва = «Linux of Surname 2», де Surname – ваше прізвище транслітерацією, наприклад «Linux of Blazhko»;
- файл ISO-образу = ubuntu-14.04.6-server-i386.iso;
- розмір оперативної пам’яті (Мб) = 10 * group + var, де group – номер вашої групи, var – номер вашого варіанту, наприклад, 10 * 221 + 5 = 2215 Мб;
- кількість ядер процесору = 1;
- розмір оперативної пам’яті графічної карти (Мб) = 100 + group2, останні дві цифри номеру групи, наприклад, 100 + 21 = 121 Мб;
- перша мережева карта з конфігурацією NAT;
- правило Port Forwarding на першу мережеву карту, яке буде перенаправляти мережеві пакети для з’єднання через SSH-протокол із guest-ОС (IP-address=10.0.2.15, SSH-port=22) на IP-адресу=127.0.0.1 з використанням SSH-port=1234;
- контролер IntelAHCI з інтерфейсом sata-типу за назвою SurnameSATA, Surname ваше прізвище транслітерацією, наприклад «BlazhkoSATA»;
- контролер PIIX4 з інтерфейсом ide-типу за назвою SurnameIDE, де Surname – ваше прізвище транслітерацією, наприклад «BlazhkoIDE»;
- віртуальне сховище даних, розміщене у файлі з назвою DiskSurname.vdi, наприклад, DiskBlazhko.vdi, та розміром (Мб) = 40 * group, наприклад, 40 * 221 = 8840 Мб;
- ISO-файл ubuntu-14.04.6-server-i386.iso з інсталяцією ОС Linux

<img width="800" height="576" alt="image" src="https://github.com/user-attachments/assets/811c97f7-6e0f-4db8-a074-a2b921ee88cd" />

рис. 14 - фрагмент екрану з рішенням завдання 2.2.2 "Запустити віртуальну машину, створену у пункті 2.2.1, використовуючи інтерфейс командного рядку."

<img width="582" height="66" alt="image" src="https://github.com/user-attachments/assets/92abfb85-3cdf-494c-b18e-26b628ab2377" />

рис. 15 - фрагмент екрану з рішенням завдання 2.2.3 "Перебуваючи на першому екрані процесу інсталяції віртуальної ОС, призупинити роботу віртуальної машини."

<img width="715" height="557" alt="image" src="https://github.com/user-attachments/assets/ede51eb1-5d9f-4191-bc70-f82340e7ac9b" />

рис. 16 - фрагмент екрану з рішенням завдання 2.2.4 "Повторно запустити призупинену віртуальну машину, створену у пункті 2.2.1."

<img width="596" height="68" alt="image" src="https://github.com/user-attachments/assets/8da20034-09c5-48fc-876a-5cf88c466a6a" />

рис. 17 - фрагмент екрану з рішенням завдання 2.2.5 "Зупинити віртуальну машину, створену у пункті 2.2.1."

<img width="579" height="60" alt="image" src="https://github.com/user-attachments/assets/cd048c66-b258-40c3-a373-5e3177f5258b" />

рис. 18 - фрагменти екрану з рішенням завдання 2.2.7 "Зняти з реєстрації віртуальну машину та видалити всі пов’язані з нею файли."

<img width="791" height="698" alt="image" src="https://github.com/user-attachments/assets/5405b24e-d90e-4f0c-90a5-5ded643f1c50" />

рис. 19 - фрагмент екрану з рішенням завдання 2.2.7 "Зберегти всі команди створення віртуальної машини у файлі CreateVMSurname.sh, де Surname – ваше прізвище транслітерацією, наприклад «CreateVMBlazhko.sh»;"

### 2.3 Створення групи користувача та облікового запису користувача ОС Linux

<img width="723" height="497" alt="image" src="https://github.com/user-attachments/assets/77a29eb1-664f-4bb1-877b-c1c376c2c6da" />

рис. 20 - фрагмент екрану з рішенням завдання 2.3.1 "Встановити з’єднання із віртуальною машиною, яка створена у розділі 2.1., через SSH-команду"

<img width="219" height="35" alt="image" src="https://github.com/user-attachments/assets/b902dcba-c80c-4ef2-96d9-00beda378385" />

рис. 21 - фрагмент екрану з рішенням завдання 2.3.2 "Створити групу користувача, назва якої співпадає з назвою вашої студентської групи транслітерацією, наприклад, AI211"

<img width="1011" height="89" alt="image" src="https://github.com/user-attachments/assets/ac53677e-d280-4a74-9aab-66689f00a5d2" />

рис. 22 - фрагмент екрану з рішенням завдання 2.3.3 "З використанням не інтерактивної команди створити обліковий запис користувача з урахуванням того, що:
- ім'я користувача співпадає з об’єднаними вашим прізвищем та іменем транслітерацією, наприклад, blazhko_oleksandr;
- каталог користувача співпадає з вашим ім’ям;
- шлях до оболонки командного рядка = /bin/bash
- користувач входить до раніше створеної групи"

<img width="466" height="105" alt="image" src="https://github.com/user-attachments/assets/7f66b896-824c-491a-8365-e86fadd9c527" />

рис. 23 - фрагмент екрану з рішенням завдання 2.3.4 "В окремому псевдотерміналі увійти з’єднатися з віртуальною машиною під іменем створеного користувача. Вийти із псевдотерміналу."

<img width="526" height="28" alt="image" src="https://github.com/user-attachments/assets/fb3840dd-7fe7-4cae-ad72-944acfce792c" />

рис. 24 - фрагмент екрану з рішенням завдання 2.3.5 "Видалити створений обліковий запис користувача."

<img width="526" height="28" alt="image" src="https://github.com/user-attachments/assets/da1cadb0-bf60-4f18-a1c7-48f37e698fd6" />

рис. 25 - фрагмент екрану з рішенням завдання 2.3.6 "Видалити створену групу."

### 2.4 Встановлення СКБД PostgrеSQL та налаштування роботи

<img width="657" height="278" alt="image" src="https://github.com/user-attachments/assets/ed12bd3d-58d4-48fd-b66e-6e71b6574ef1" />

рис. 26 - фрагмент екрану з рішенням завдання 2.4.1 "Використовуючи команду керування програмними пакунками, наприклад, apt, встановити програмний пакунок СКБД PostgrеSQL"

<img width="418" height="41" alt="image" src="https://github.com/user-attachments/assets/6fddd8e7-aa88-4156-a6e7-49f268f93370" />

рис. 27 - фрагмент екрану з рішенням завдань 2.4.2 "Від імені користувача postgres створити БД Surname, де Surname – ваше прізвище транслітерацією." і 2.4.3 "Від імені користувача postgres створити користувача СКБД з іменем Surname, де Surname – ваше прізвище транслітерацією."

<img width="497" height="101" alt="image" src="https://github.com/user-attachments/assets/ae1931e7-dab6-4677-8ef5-7ceafc2d628f" />

рис. 28 - фрагмент екрану з рішенням завдання 2.4.4 "З’єднатися з СКБД PostgrеSQL, використовуючи створеного користувача та БД."

<img width="570" height="73" alt="image" src="https://github.com/user-attachments/assets/9cb2bd10-0b29-432c-a902-dea15f56345c" />

рис. 29 - фрагмент екрану з рішенням завдання 2.4.5 "Від імені користувача postgres зупинити сервер СКБД."

<img width="662" height="193" alt="image" src="https://github.com/user-attachments/assets/18d4a718-f480-4ec8-94af-6f92cd09e993" />

рис. 30 - фрагмент екрану з рішенням завдання 2.4.6 "Видалити програмний пакунок СКБД PostgrеSQL."

### 2.5 Встановлення останньої верcії СКБД PostgreSQL із сирцевих кодів

<img width="756" height="436" alt="image" src="https://github.com/user-attachments/assets/1609b31c-d07d-4196-80a5-c0bcbb4520ac" />

рис. 31 - фрагмент екрану з рішенням завдання 2.5.1 "Встановити програмні пакунки, від яких залежить побудова СКБД PostgreSQL версії 15.3 із сирцевих кодів"

<img width="662" height="193" alt="image" src="https://github.com/user-attachments/assets/a8652783-39f3-4a80-b6ba-40e86bef8901" />

<img width="756" height="436" alt="image" src="https://github.com/user-attachments/assets/7f11fa26-665b-4819-9439-28a89321e297" />

<img width="1280" height="182" alt="image" src="https://github.com/user-attachments/assets/a3cb8b78-6ab4-4224-a6f0-5116ac1efe99" />

<img width="711" height="52" alt="image" src="https://github.com/user-attachments/assets/ea32b7c6-fef8-47df-ba8b-8d66d931bdeb" />

<img width="539" height="57" alt="image" src="https://github.com/user-attachments/assets/ab87a1e7-3182-4486-b3af-7d11fe4bbca1" />

<img width="959" height="57" alt="image" src="https://github.com/user-attachments/assets/8f53d8f0-67b3-4b6e-9f6a-9c583b9f2871" />

<img width="674" height="107" alt="image" src="https://github.com/user-attachments/assets/3f69d7c2-c7b3-4526-adaf-26e3393207b3" />

рис. 32, 33, 34, 35, 36 - фрагменти екрану з рішенням завдання 2.5.2 "Виконати процес побудови СКБД PostgreSQL версії 15.3 із сирцевих кодів та виконати інсталяцію програм серверу."

<img width="1068" height="182" alt="image" src="https://github.com/user-attachments/assets/e35a7cff-ea28-4740-8941-b25468c3d17a" />

рис. 37 - фрагмент екрану з рішенням завдання 2.5.3 "Запустити сервер СКБД PostgreSQL версії 15.3."

<img width="289" height="97" alt="image" src="https://github.com/user-attachments/assets/75fcacc2-08a1-46f4-994e-29fbf793805d" />

рис. 38 - фрагмент екрану з рішенням завдання 2.5.4 "Перевірити з’єднання програми-клієнта із сервером СКБД PostgreSQL, використовуючи параметри зазамовчуванням."

<img width="1071" height="225" alt="image" src="https://github.com/user-attachments/assets/422c2b11-26a2-4b1f-ac3a-786c5a0ccbff" />

рис. 39 - фрагмент екрану з рішенням завдання 2.5.5 "Зупинити сервер СКБД PostgreSQL."

### 2.6 Керування обмеженням використання ресурсів ОС

<img width="632" height="457" alt="image" src="https://github.com/user-attachments/assets/d6671f55-aca9-4506-89ef-80dcd01422a3" />

рис. 40 - фрагмент екрану з рішенням завдання 2.6.1 "Встановити з’єднання із віртуальною машиною, яка створена у розділі 2.1., через SSH-команду від імені користовувача, створеного під час інсталяції віртуальної ОС."

<img width="914" height="285" alt="image" src="https://github.com/user-attachments/assets/69ffceef-2f98-4b45-9a25-27bc4b7ad1ea" />

<img width="453" height="126" alt="image" src="https://github.com/user-attachments/assets/40e721ad-548f-42b7-9b60-9fd463ca2c5f" />

<img width="366" height="57" alt="image" src="https://github.com/user-attachments/assets/9a789dec-2180-4cb3-9931-cdaf5ed7cfb4" />

рис. 41, 42, 43 - фрагменти екрану з рішенням завдання 2.6.2 "Перевірити роботу команди ulimit за всіма прикладами з таблиці 1 з підрозділу 1.3.5, показавши на екрані:
- приклад кожної команд;
- приклад операції, яка порушує обмеження;
- приклад повідомлення про помилку щодо порушення обмеження."
