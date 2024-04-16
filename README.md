Uzdevums risināts bez ārējām bibliotēkām.

SERVERIS

Programmējamais uzdevums Serveris
Atmiņa: 5 MB
Laiks: 0.5 second
Ievadfails: server.in
Izvadfails: server.out

Apraksts

Aiz trejdeviņiem kalniem un trejdeviņām jūrām bija valstiņa, kas līdz šim ļoti labi bija iztikusi bez datoriem. Taču vienā jaukā dienā viņi no kāda Bila saņēma sūtījumu ar datoriem, kuru skaits nepārsniedza 20000. Atsūtīja arī speciālistu vārdā Nets, kura uzdevums bija izveidot datortīklu starp visiem datoriem. Tā kā bija solīts katram datoram dot līdzi bezmaksas Vistu (bija tāda OS), valsts iedzīvotāji piekrita datortīkla izveidei. Kāpēc nepiekrist, ja sliktākajā gadījumā taču varēs apēst pa brīvu iedoto putnu, kaut arī baumo, ka Vista jau ir veca un vispār nav ēdama?

Nets uzreiz ķērās pie darba. Tomēr pēc brīža darbi apstājās, jo viņš konstatēja, ka ir nepietiekoši iedots tīkla vadu. Izeja tika atrasta, savienojot datorus tā, lai no katra datora var pa tīklu sasniegt jebkuru citu, nepieciešamības gadījumā citus datorus izmantojot kā starpniekus. Tīkla vadu trūkuma dēļ Nets tīklu veidoja ļoti taupīgi - no katra datora uz jebkuru citu datoru eksistēja tikai viens ceļš.

Uz katra datora tika uzlikta programmatūra, kas 1 milisekundi pēc datu saņemšanas no kāda datora nosūtīja šos datus visiem citiem pa tiešo pieslēgtajiem datoriem. Katrs dators-saņēmējs pats novērtēja, vai atsūtītie dati attiecas uz viņu. Ja dati jau ir bijuši konkrētā datora, tad dators ignorē atkārtotu datu pienākšanu.

Atlika tikai atrisināt problēmu - kuru datoru nokonfigurēt kā serveri, lai servera sūtītie dati visus datorus sasniegtu minimāli iespējamā laikā. Nets pēc vadu (nevis gumijas) stiepšanas jutās tik noguris, ka vairs nespēja tikt galā ar šo uzdevumu. Palīdziet Netam noskaidrot, kurus datorus var izvēlēties kā serveri un cik milisekundēs visi datori būs saņēmuši servera ziņojumu.

Ja datoru skaits ir n no intervāla [1..20000], tad katram datoram ir piešķirts unikāls numurs no 1 līdz n. Ieejas dati vienmēr ir korekti saskaņā ar specifikāciju.

Ieeja:
Pirmā rindiņa satur atsūtīto datoru skaitu.

Nākošajās rindās ir doti visi tiešie savienojumi starp datoriem. Katrā rindā ir tieši divi skaitļi, kas nosaka tieši savienotos datorus.

Pēdējā rinda, kas signalizē par ieejas datu beigām, satur divus skaitļus 0.

Izeja:
Pirmā rinda satur minimālo garantēto laiku, kurā servera ziņojumu var saņemt visi tīkla datori.

Otrā rinda satur visus datoru numurus, kuri var kalpot par serveri. Datoru numurus uzrādīt pieaugošā secībā.
