<p style="margin-top:0pt; margin-bottom:0pt; text-align:center; line-height:normal; font-size:22pt;"><strong><span style="font-family:'Calibri Light'; letter-spacing:-0.5pt;">Projekt 8</span></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;">Napisać program w języku ANSI C umożliwiający przechowywanie i udostępnianie informacji o zbiorze płyt z nagraniami video. Program powinien umożliwiać:</p>
<ul style="margin:0pt; padding-left:0pt;" type="disc">
    <li style="margin-left:10.06pt; line-height:normal; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;">Wprowadzanie informacji.</span></li>
    <li style="margin-left:10.06pt; line-height:normal; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;">Udostępnianie informacji w sposób uporządkowany. </span></li>
    <li style="margin-left:10.06pt; line-height:normal; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;">Wyszukiwanie informacji.</span></li>
    <li style="margin-left:10.06pt; line-height:normal; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;">Archiwizację informacji na dysku oraz wczytywanie danych z dysku. </span></li>
</ul>
<p style="margin-top:0pt; margin-bottom:8pt;">Program powinien być wyposażony w przejrzysty interface użytkownika.</p>
<p style="margin-top:0pt; margin-bottom:8pt;"><em><u>Zakres danych opisujących pojedynczą płytę do uzgodnienia z prowadzącym zajęcia</u></em></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify; line-height:108%; font-size:14pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;">Rekordy opisujące płytę z nagraniem:</span></strong></p>
<p style="margin-top:0pt; margin-bottom:0pt; line-height:normal; font-size:12pt;"><span style="font-family:Consolas;">Tytuł,</span></p>
<p style="margin-top:0pt; margin-bottom:0pt; line-height:normal; font-size:12pt;"><span style="font-family:Consolas;">Reżyseria,</span></p>
<p style="margin-top:0pt; margin-bottom:0pt; line-height:normal; font-size:12pt;"><span style="font-family:Consolas;">Gatunek,</span></p>
<p style="margin-top:0pt; margin-bottom:0pt; line-height:normal; font-size:12pt;"><span style="font-family:Consolas;">Rok produkcji,</span></p>
<p style="margin-top:0pt; margin-bottom:0pt; line-height:normal; font-size:12pt;"><span style="font-family:Consolas;">Muzyka,</span></p>
<p style="margin-top:0pt; margin-bottom:0pt; line-height:normal; font-size:12pt;"><span style="font-family:Consolas;">Czas trwania</span></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify; line-height:108%; font-size:14pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify; line-height:108%; font-size:12pt;"><em><span style="font-family:'Times New Roman';"> </span></em></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify; line-height:108%; font-size:12pt;"><span style="font-family:'Times New Roman';"> </span></p>
<p style="margin:18pt 43.2pt; text-align:center; line-height:108%; border-top:0.75pt solid #5b9bd5; border-bottom:0.75pt solid #5b9bd5; padding-top:10pt; padding-bottom:10pt; font-size:22pt;"><em><span style="color:#5b9bd5;">Instrukcja obsługi:</span></em></p>
<ol style="margin:0pt; padding-left:0pt;" type="1">
    <li style="margin-left:28.26pt; line-height:108%; padding-left:3.89pt; font-size:12pt; font-weight:bold; font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;">Po włączeniu programu ukazuje nam się UI:</li>
</ol>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><img src="https://myfiles.space/user_files/115952_84cfd198e6d079cf/1647818302_sprawozdanie-ansi-c/1647818302_sprawozdanie-ansi-c-1.png" width="298" height="225" alt="Obraz zawierający tekst

Opis wygenerowany automatycznie"></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:8pt;"> </p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><em><span style="letter-spacing:0.25pt;">Dostajemy informację, że baza danych została załadowana (program ma stałą pamięć ładuję dane z pliku przy włączeniu i zapisuje po wyłączeniu zgodnie z menu).</span></em></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"> </p>
<p style="margin-top:0pt; margin-bottom:8pt; line-height:108%; font-size:12pt;"> </p>
<ol start="2" style="margin:0pt; padding-left:0pt;" type="1">
    <li style="margin-left:28.26pt; line-height:108%; padding-left:3.89pt; font-size:12pt; font-weight:bold; font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;">Wyświetlanie obecnego stanu bazy danych:</li>
</ol>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;">Wybieramy 2 z menu:</span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><span style="height:0pt; display:block; position:absolute; z-index:0;"><img src="https://myfiles.space/user_files/115952_84cfd198e6d079cf/1647818302_sprawozdanie-ansi-c/1647818302_sprawozdanie-ansi-c-2.png" width="754" height="150" alt="Obraz zawierający tekst, zrzut ekranu

Opis wygenerowany automatycznie" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;">Wyświetlają nam się wszystkie rekordy zapisane w bazie w sposób chronologiczny.</span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<ol start="3" style="margin:0pt; padding-left:0pt;" type="1">
    <li style="margin-left:28.26pt; margin-bottom:8pt; line-height:108%; padding-left:3.89pt; font-size:12pt; font-weight:bold; font-style:italic; letter-spacing:0.25pt;"><span style="font-style:normal; font-variant:small-caps; color:#5b9bd5;">Dodawanie rekordu do bazy danych:</span></li>
</ol>
<p style="margin-top:0pt; margin-left:32.15pt; margin-bottom:8pt;"><strong><em><span style="letter-spacing:0.25pt;">Wybieramy 1 z menu:</span></em></strong></p>
<p style="margin-top:0pt; margin-left:32.15pt; margin-bottom:0pt;"><img src="https://myfiles.space/user_files/115952_84cfd198e6d079cf/1647818302_sprawozdanie-ansi-c/1647818302_sprawozdanie-ansi-c-3.png" width="337" height="141" alt="Obraz zawierający tekst

Opis wygenerowany automatycznie"><br><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:32.15pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;">Kolejno wprowadzamy parametry opisujące rekord, pamiętamy o tym by zamiast spacji wprowadzić _ i nie używać polskich znaków .</span></em></strong></p>
<p style="margin-top:0pt; margin-left:32.15pt; margin-bottom:8pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><span style="height:0pt; display:block; position:absolute; z-index:1;"><img src="https://myfiles.space/user_files/115952_84cfd198e6d079cf/1647818302_sprawozdanie-ansi-c/1647818302_sprawozdanie-ansi-c-4.png" width="724" height="156" alt="Obraz zawierający tekst

Opis wygenerowany automatycznie" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><strong><em><span style="letter-spacing:0.25pt;">Efekt:</span></em></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:8pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"> </p>
<p style="margin-top:0pt; margin-bottom:8pt;"> </p>
<p style="margin-top:0pt; margin-left:36pt; margin-bottom:0pt; text-align:justify; line-height:108%; font-size:12pt;"><span style="font-family:'Times New Roman';"> </span></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:0pt; text-align:justify;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<ol start="4" style="margin:0pt; padding-left:0pt;" type="1">
    <li style="margin-left:28.26pt; text-align:justify; line-height:108%; padding-left:3.89pt; font-size:12pt; font-weight:bold; font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;">Wyszukiwanie rekordów</li>
</ol>
<p style="margin-top:0pt; margin-left:32.15pt; margin-bottom:0pt;"><strong><em><span style="letter-spacing:0.25pt;">Wybieramy 3 z menu:</span></em></strong></p>
<p style="margin-top:0pt; margin-left:32.15pt; margin-bottom:0pt;"><span style="height:0pt; display:block; position:absolute; z-index:2;"><img src="https://myfiles.space/user_files/115952_84cfd198e6d079cf/1647818302_sprawozdanie-ansi-c/1647818302_sprawozdanie-ansi-c-5.png" width="736" height="88" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-left:32.15pt; margin-bottom:8pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt; line-height:108%; font-size:12pt;"><span style="font-family:'Times New Roman';"> </span></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><em><span style="letter-spacing:0.25pt;"> </span></em></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><em><span style="letter-spacing:0.25pt;">Następnie wprowadzamy interesujący nas tytuł, i otrzymujemy wynik.</span></em></strong></p>
<ol start="5" style="margin:0pt; padding-left:0pt;" type="1">
    <li style="margin-left:28.26pt; margin-bottom:8pt; line-height:108%; padding-left:3.89pt; font-size:12pt; font-weight:bold; font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"><span style="height:0pt; display:block; position:absolute; z-index:3;"><img src="https://myfiles.space/user_files/115952_84cfd198e6d079cf/1647818302_sprawozdanie-ansi-c/1647818302_sprawozdanie-ansi-c-6.png" width="715" height="126" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span>Po wykonaniu interesujących nas czynności możemy bezpiecznie zamknąć program równocześnie aktualizując bazę danych.</li>
</ol>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;">Plik przechowujący:</span></strong><br><img src="https://myfiles.space/user_files/115952_84cfd198e6d079cf/1647818302_sprawozdanie-ansi-c/1647818302_sprawozdanie-ansi-c-7.png" width="605" height="170" alt="Obraz zawierający tekst

Opis wygenerowany automatycznie"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;"> </span></strong></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><strong><span style="font-variant:small-caps; letter-spacing:0.25pt; color:#5b9bd5;">//Gwiazdka to zabezpieczenie końca pliku</span></strong><br><br><em><span style="color:#5b9bd5;"> </span></em></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><em><span style="color:#5b9bd5;"> </span></em></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><em><span style="color:#5b9bd5;"> </span></em></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><em><span style="color:#5b9bd5;"> </span></em></p>
<p style="margin-top:0pt; margin-bottom:8pt;"><em><span style="color:#5b9bd5;"> </span></em></p>
<p style="margin:18pt 43.2pt; text-align:center; line-height:108%; border-top:0.75pt solid #5b9bd5; border-bottom:0.75pt solid #5b9bd5; padding-top:10pt; padding-bottom:10pt; font-size:22pt;"><em><span style="color:#5b9bd5;">Informacje techniczne</span></em></p>
<ul style="margin:0pt; padding-left:0pt;" type="disc">
    <li style="margin-left:28.06pt; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;">Program został napisany z implementacją listy dynamicznej dwukierunkowej (wykorzystanay jest tylko jeden kierunek ,ale zawsze można zrobić upgrade funkcjonalności)</span></li>
    <li style="margin-left:28.06pt; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;">To oznacza ,że ma nie „skończoną pamięć” – zależną od sprzętu ; ponieważ na bieżąco rezerwuje on pamięć.</span></li>
    <li style="margin-left:28.06pt; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;"> </span><span style="font-family:Calibri;">Program jest rozproszony – ma maina, który służy jedynie wywołaniu funkcji.</span></li>
    <li style="margin-left:28.06pt; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;">Składa się z wielu funkcji, które odpowiadają za wykonanie operacji. Ma strukturę części dla łatwości edycji i zgodności ze sztuką programowania.</span></li>
    <li style="margin-left:28.06pt; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;">Program składa się z 3 struktur by utworzyć wcześniej wspomnianą listę dynamiczną(head, węzeł z danymi i z danymi płyt).</span></li>
    <li style="margin-left:28.06pt; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;">Posiada 8 niezależnych funkcji.</span></li>
    <li style="margin-left:28.06pt; margin-bottom:8pt; padding-left:7.94pt; font-family:serif;"><span style="font-family:Calibri;">Wykorzystuję w pełni potencjał wskaźników, używam ich w każdej funkcji.</span></li>
</ul>
<p style="margin-top:0pt; margin-bottom:8pt;"> </p>
<p style="margin-top:0pt; margin-bottom:8pt;"> </p>

