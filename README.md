Çözme(decrypt)programı:
Sabit bir anahtar değeri belirleniyor:
   - `int anahtar = 2;` çözme işlemi için bir anahtar değeri giriyoruz,
"output.txt" dosyası okunur sonra şifrelenmiş diziye kopyalanıyor,
   - `FILE *dosya = fopen("output.txt", "r");` output.txt girdiğimizde okuma modunda açılıyor,
   - `metin = malloc(sizeof(char) * 1024);` 1024 karakterlik bellekden alan ayrılıyor,
   - `fgets(metin, sizeof(metin), dosya);` bu dosyadaki şifrelenen bellek alanında kopyalanıyor,
   - `fclose(dosya);` ifadesiyle dosya kapatılır.
Her karakteri, seçdiğimiz anahtar değeri kadar geri kaydırıyoruz:
   - `for (int i = 0; metin[i] != '\0'; i++) { metin[i] = (metin[i] - anahtar) % 26; }` her karakteri, seçdiğimiz anahtar değeri kadar geri kaydırarak çözdük,
Çözülen yazıyı ekranda yazdırıyoruz:
   - `printf("%s\n", metin);` çözülen yazıyı ekranda yazdırıyoruz,
   - çözülen yazı metni bundan sonra bitiyor.

Ekran çıktısı bu şekilde olur.

    Lcvjytb Cpgt!
veya 

 `Dosya açılamadı.Program ended with exit code: 1`

çıktını verir.
