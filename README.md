# konvolusyon
ilk olarak  filtre toplamını buluyorum çünkü bir sabit değişmicek ve 0 olması durumunda onu 1 eşitliyorum ki herhangi bir sorunla karşılaşmayalım.
Sonra konvolusyon işlemine başlıyorum burda 4 tane for döngüsü kullanıyorum çünkü temelde 2 şer satır ve sutunu ayrı ayrı değerlendiriyorum.
Result matrisini oluşturduktan ve yazdırdıktan sonra fonksiyonu kapatıyorum.
Eğer matrisin satır veya sütun boyutlarından herhangi biri 0 veya daha küçükse ya da filtreleme matrisinin boyutu (k), ana matrisin satır veya sütun boyutlarından büyükse  (bu durum taşmalara sebep olacağından)  ya da k 0 dan küçük veya eşitse işlem başlatılmadan önce kullanıcıya bir uyarı mesajı gönderiliyor ve program sonlandırılıyor.
