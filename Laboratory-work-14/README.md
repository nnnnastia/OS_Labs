## Основи керування віртуальними ОС
### 2.1 Створення віртуальної машини через графічний інтерфейс

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/d2d508ba-865d-416f-b0a2-a32f8ce3c069)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/28287420-feff-4a6d-9dfc-625557cae517)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/5d49fc60-e04a-4468-82f9-006a55ff5c57)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/4543090c-ec1b-4d94-b872-6dc9f6dd61d1)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/e96a3f30-79ea-458a-9d93-1be935a1d2e9)

рис. 1, 2, 3, 4, 5 - фрагменти екрану з рішенням завдання 2.1.3 "Створити віртуальну машину, використовуючи графічний інтерфейс та враховуючи наступні значення параметрів:
- назва = «Linux of Surname», де Surname – ваше прізвище транслітерацією, наприклад «Linux of Blazhko»;
- файл ISO-образу = ubuntu-14.04.6-server-i386.iso;
- розмір оперативної пам’яті (Мб) = 10 * group + var, де group – номер вашої групи, var – номер вашого варіанту, наприклад, 10 * 221 + 5 = 2215 Мб;
- кількість ядер процесору = 1;
- розмір жорсткого диску (Мб) = 40 * group, наприклад, 40 * 221 = 8840 Мб = 8,84 Гб;
- правило Port Forwarding на першу мережеву карту, яке буде перенаправляти мережеві пакети для з’єднання через SSH-протокол із guest-ОС (IP-address=10.0.2.15, SSH-
port=22) на IP-адресу=127.0.0.1 з використанням SSH-port=1234.

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/d25fcd2a-4f0c-4933-bb0b-b66fb6257b4d)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/dfb1a3cf-9a53-4b92-87c8-d33f098ca2dd)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/063c7cea-8a91-4f4f-9dad-181f1ffd1eb7)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/05f0a547-213e-4284-8ffe-f37a90e3d71b)

рис. 6, 7, 8, 9 - фрагменти екрану з рішенням завдання 2.1.4 "Запустити віртуальну машину, створену у пункті 2.1.3, та виконати інсталяцію віртуальної ОС, враховуючи параметри:
- hostname = os-surname, наприклад, os-blazhko;
- user account = surname, наприклад, blazhko;
- time zone = Kiev;
- Software = OpenSSH server;"

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/01ac78ee-3fe5-4ad0-8d97-55ca76014d6b)

рис. 10 - фрагмент екрану з рішенням завдання 2.1.5 "Після інсталяції та перезапуску віртуальної машини виконати вхід до віртуальної ОС, використовуючи створений обліковий запис."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/8df1486b-cd3e-4a4b-bdb0-2d959029d9b7)

рис. 11 - фрагмент екрану з рішенням завдання 2.1.6 "Повторити вхід до віртуальної машини через SSH-протокол."

### 2.2 Створення віртуальної машини через інтерфейс командного рядку

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/5dc2258a-667a-4610-ad39-e12b3e1a371b)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/7aea96d6-9c1b-4059-b948-c3103d08e7a4)

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

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/8d761969-cfbf-47be-b6b0-2753f9566fb8)

рис. 14 - фрагмент екрану з рішенням завдання 2.2.2 "Запустити віртуальну машину, створену у пункті 2.2.1, використовуючи інтерфейс командного рядку."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/c8c73b77-35a1-4197-ae54-a1d83d2d9be6)

рис. 15 - фрагмент екрану з рішенням завдання 2.2.3 "Перебуваючи на першому екрані процесу інсталяції віртуальної ОС, призупинити роботу віртуальної машини."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/cf5ab4c9-f985-4bf0-91de-8a0752db3c25)

рис. 16 - фрагмент екрану з рішенням завдання 2.2.4 "Повторно запустити призупинену віртуальну машину, створену у пункті 2.2.1."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/f298ab08-b295-44b2-9df7-d41153268d4f)

рис. 17 - фрагмент екрану з рішенням завдання 2.2.5 "Зупинити віртуальну машину, створену у пункті 2.2.1."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/54192712-85f0-4dbc-aecc-2da14a2f5c0f)

рис. 18 - фрагменти екрану з рішенням завдання 2.2.7 "Зняти з реєстрації віртуальну машину та видалити всі пов’язані з нею файли."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/e64bf073-aeea-42b3-946f-6332976b3cb0)

рис. 19 - фрагмент екрану з рішенням завдання 2.2.7 "Зберегти всі команди створення віртуальної машини у файлі CreateVMSurname.sh, де Surname – ваше прізвище транслітерацією, наприклад «CreateVMBlazhko.sh»;"

### 2.3 Створення групи користувача та облікового запису користувача ОС Linux

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/7c30ae08-9f6d-4d24-9e9f-f3955d7e729c)

рис. 20 - фрагмент екрану з рішенням завдання 2.3.1 "Встановити з’єднання із віртуальною машиною, яка створена у розділі 2.1., через SSH-команду"

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/282e5e7a-5802-465b-8e63-fdc45acc7d48)

рис. 21 - фрагмент екрану з рішенням завдання 2.3.2 "Створити групу користувача, назва якої співпадає з назвою вашої студентської групи транслітерацією, наприклад, AI211"

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/064e759e-eefe-4d75-abbf-5d88384d5b01)

рис. 22 - фрагмент екрану з рішенням завдання 2.3.3 "З використанням не інтерактивної команди створити обліковий запис користувача з урахуванням того, що:
- ім'я користувача співпадає з об’єднаними вашим прізвищем та іменем транслітерацією, наприклад, blazhko_oleksandr;
- каталог користувача співпадає з вашим ім’ям;
- шлях до оболонки командного рядка = /bin/bash
- користувач входить до раніше створеної групи"

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/0af9f327-a36e-4738-a4a9-41310c8b7b81)

рис. 23 - фрагмент екрану з рішенням завдання 2.3.4 "В окремому псевдотерміналі увійти з’єднатися з віртуальною машиною під іменем створеного користувача. Вийти із псевдотерміналу."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/602e636f-c293-445d-9b53-b018e7135fbe)

рис. 24 - фрагмент екрану з рішенням завдання 2.3.5 "Видалити створений обліковий запис користувача."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/89ae11e9-2145-4987-8c86-71f46324a125)

рис. 25 - фрагмент екрану з рішенням завдання 2.3.6 "Видалити створену групу."

### 2.4 Встановлення СКБД PostgrеSQL та налаштування роботи

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/2a8cda40-9191-4a31-acad-20f299560475)

рис. 26 - фрагмент екрану з рішенням завдання 2.4.1 "Використовуючи команду керування програмними пакунками, наприклад, apt, встановити програмний пакунок СКБД PostgrеSQL"

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/5a4fc5e6-a3f5-4e3b-bde8-08882cc485f6)

рис. 27 - фрагмент екрану з рішенням завдань 2.4.2 "Від імені користувача postgres створити БД Surname, де Surname – ваше прізвище транслітерацією." і 2.4.3 "Від імені користувача postgres створити користувача СКБД з іменем Surname, де Surname – ваше прізвище транслітерацією."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/4d0f0e38-bce7-4fe5-a1d2-c9851a8cc586)

рис. 28 - фрагмент екрану з рішенням завдання 2.4.4 "З’єднатися з СКБД PostgrеSQL, використовуючи створеного користувача та БД."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/73ec3f6a-ed95-4c3e-8ff9-83a87c484071)

рис. 29 - фрагмент екрану з рішенням завдання 2.4.5 "Від імені користувача postgres зупинити сервер СКБД."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/c37a82ab-c0d4-4173-98de-76082a3f4a09)

рис. 30 - фрагмент екрану з рішенням завдання 2.4.6 "Видалити програмний пакунок СКБД PostgrеSQL."

### 2.5 Встановлення останньої верcії СКБД PostgreSQL із сирцевих кодів

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/d986a404-1259-41fd-8422-542e4506d070)

рис. 31 - фрагмент екрану з рішенням завдання 2.5.1 "Встановити програмні пакунки, від яких залежить побудова СКБД PostgreSQL версії 15.3 із сирцевих кодів"

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/5ba6dcef-e72a-4e27-8ce7-0991e1853dff)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/6a919b71-d07a-41fb-87de-fa4a053aea93)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/4418a1e5-4cdb-42c9-b90e-fea732c4acda)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/59e0600f-55e3-456d-9d53-d24cc56f1a5f)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/db3bbd1e-8a17-4313-b159-77c61e4824a7)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/28138a24-6149-4cf5-84c0-439bece592de)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/bda5bee7-34d8-4ec4-ba68-b29b9c3baf9b)

рис. 32, 33, 34, 35, 36 - фрагменти екрану з рішенням завдання 2.5.2 "Виконати процес побудови СКБД PostgreSQL версії 15.3 із сирцевих кодів та виконати інсталяцію програм серверу."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/179d2d97-1250-4711-a0a5-f87f486f552f)

рис. 37 - фрагмент екрану з рішенням завдання 2.5.3 "Запустити сервер СКБД PostgreSQL версії 15.3."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/728f9c00-adcb-4d65-ad3a-4c445ab237ac)

рис. 38 - фрагмент екрану з рішенням завдання 2.5.4 "Перевірити з’єднання програми-клієнта із сервером СКБД PostgreSQL, використовуючи параметри зазамовчуванням."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/7ab419ff-64ef-4e1b-b821-2a1443d251a3)

рис. 39 - фрагмент екрану з рішенням завдання 2.5.5 "Зупинити сервер СКБД PostgreSQL."

### 2.6 Керування обмеженням використання ресурсів ОС

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/c5476796-0acc-4dcb-8e63-3e94f475399a)

рис. 40 - фрагмент екрану з рішенням завдання 2.6.1 "Встановити з’єднання із віртуальною машиною, яка створена у розділі 2.1., через SSH-команду від імені користовувача, створеного під час інсталяції віртуальної ОС."

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/2e9a651d-192c-4df0-99d7-6c8b3f9bc37c)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/97a929a7-1fa9-4c7d-b367-0464a0324c18)

![image](https://github.com/oleksandrblazhko/ai224-tkachenko/assets/127306365/29a41d1b-3149-4062-abdb-e57a552cda9f)

рис. 41, 42, 43 - фрагменти екрану з рішенням завдання 2.6.2 "Перевірити роботу команди ulimit за всіма прикладами з таблиці 1 з підрозділу 1.3.5, показавши на екрані:
- приклад кожної команд;
- приклад операції, яка порушує обмеження;
- приклад повідомлення про помилку щодо порушення обмеження."
