# Veri-Yapilari
MinGW C++ ortamında derlenen bir program yazılacaktır.
Bu ödevde tek yönlü bağlı listeler kullanarak tam sayılar üzerinde çeşitli işlemler yapılması
istenmektedir.
Uygulamanız Sayilar.txt dosyası içerisindeki tam sayıları okuyacaktır. (Dosya içerisindeki sayı adedi değişebilir). Sayılar arasında tek bir boşluk bulunacaktır.

Her bir sayı bir bağlı listede tutulacaktır. Okunan sayının basamakları listenin düğümleri olacaktır.
Aşağıda 75142 sayısının bir bağlı liste içerisindeki düğümlerle temsil edilmesi gösterilmektedir.
• Her bir basamağın tutulacağı düğüm sınıfı Basamak isminde olacaktır.
• Basamakları bir arada tutacak olan liste sınıfının ismi Sayi olacaktır

Ekran çıktısında ilk olarak her
bir sayısı temsil eden liste ve düğümleri yatay olarak aşağıdaki gibi ekrana çıkartılacaktır. Bütün sayı
listeleri ekrana çıkartıldıktan sonra programın kontrol menüsü ekrana çıkartılmalıdır. Buradaki menü
kullanıcıdan seçim istemektedir.

1-Tek basamaklari basa al
2-Basamaklari tersle
3-En buyuk cikar
4-Cikis

Sayi listelerini tutmak için SayilarListesi isimli bir bağlı liste sınıfı tasarlanacaktır. Bu listenin her bir
düğümünde bir Sayi listesi barındırılacaktır. SayilarListesi listesinin düğümleri içinde Dugum isimli bir
sınıf tasarlanması gerekmektedir. Bu sınıfın barındıracağı elemanların içeriği Şekil 7’de verilmiştir.

Uygulama çalıştığında, Kullanıcı 1 değerini
seçtiğinde her bir Sayi listesindeki basamak düğümlerinin tek değer tutanları listenin başına
taşınmalıdır. Taşınan düğümünün adresi değişmemelidir. Yani
düğümlerinin değerlerinin değiştirilmesi kabul edilmeyecektir. Düğümlerin listede konum
değiştirmesi gerekmektedir.

Kullanıcı 2.seçeneği seçtiğinde Sayıların basamak düğümleri sondan başa gelecek şekilde yer
değiştirmelidir. Bir önceki seçenekte olduğu gibi düğümlerin verilerini değiştirmek yeterli değildir.
Düğümlerin listedeki konumu değişmelidir.düğümlerin listedeki konumları değişse de hafızadaki konumları
değişmemektedir.

Son olarak kullanıcı 3. Seçeneği seçerse SayilarListesi içerisindeki en büyük Sayi listeden
çıkartılmalıdır.
