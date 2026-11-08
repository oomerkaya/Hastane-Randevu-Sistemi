# Hastane Randevu Sistemi

C ile geliştirilmiş, menü tabanlı bir hastane randevu sistemi örneği. Uygulama; hasta bilgisi alma, poliklinik ve doktor seçme, randevu oluşturma ve randevu kayıtları üzerinde temel işlemleri konsol üzerinden gösterir.

## Özellikler

- Hasta adı, soyadı, doğum tarihi ve 11 haneli T.C. kimlik numarası bilgilerini alır.
- 21 poliklinik arasından seçim sunar; seçilen bölüme bağlı doktor listesinden doktor seçtirir.
- Gün, ay ve yıl bilgileriyle randevu tarihi oluşturur.
- Randevu numarasıyla randevuyu görüntüleme, düzenleme ve iptal etme menüleri içerir.
- Sıkça Sorulan Sorular bölümünde randevu, doktor/bölüm, gerekli bilgiler ve ücret gibi konulara ilişkin metinler sunar.
- Bölüm ve doktor listelerini `Kayıtlar` klasöründeki metin dosyalarından görüntüler.

## Teknolojiler

- C
- Standart C kütüphaneleri ve Visual Studio uyumlu `scanf_s` kullanımı
- Yerel metin dosyalarıyla basit kayıt yaklaşımı

## Çalıştırma

1. `Hastane Randevu Sistemi.sln` çözümünü Visual Studio'da açın.
2. C kaynak dosyasının başlangıç projesi olarak seçili olduğunu kontrol edin.
3. Derleyip konsol uygulamasını çalıştırın.
4. Ana menüden **Giriş** seçeneğini seçerek hasta bilgilerinizi girin.

## Kayıt dosyaları

Bölüm ve doktor listeleri ile randevu numarası ve hasta kaydı dosyaları `Hastane Randevu Sistemi/Kayıtlar` altındadır. Kaynak kod bu dosyalara geliştirici bilgisayarındaki sabit bir Windows yolu üzerinden erişiyor. Başka bir bilgisayarda çalıştırırken dosya yollarını kendi proje konumunuza göre güncelleyin.

> Bu depo bir öğrenme/örnek projesidir. Dosya tabanlı kayıt yaklaşımı sınırlıdır; uygulamayı gerçek hasta verileriyle kullanmayın.