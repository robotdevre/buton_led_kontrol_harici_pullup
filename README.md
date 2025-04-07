# buton-led-harici-pullup ![Wokwi CI](https://github.com/robotdevre/buton_led_kontrol_harici_pullup/actions/workflows/wokwi.yml/badge.svg)

Bu proje, Arduino Uno kartı ile harici **pull-up** direnç kullanılarak bir buton yardımıyla LED kontrolünü sağlar. Butona basıldığında LED yanar, bırakıldığında söner. Bu devrede dahili `INPUT_PULLUP` yerine dışarıdan bir direnç ile butonun kararlı çalışması sağlanır. Başlangıç seviyesi için uygun bir dijital giriş uygulamasıdır.

---

## 🔧 Kullanılan Malzemeler

- Arduino Uno  
- 1 x LED (Kırmızı)  
- 1 x 220 Ohm direnç (LED için)  
- 1 x 10k Ohm direnç (Buton için - harici pull-up)  
- 1 x Buton  
- Jumper kablolar  

---

## 🎯 Proje Amacı

- `digitalRead()` fonksiyonu ile dijital giriş okuma  
- Harici **pull-up** direnci ile buton kararlılığı sağlama  
- Butona basıldığında LED’in yakılması  
- Temel devre kurma ve I/O kontrolünü kavrama  

---

## 📷 Devre Şeması

📁 `diagram.json` dosyasında Wokwi uyumlu devre şeması bulunmaktadır.  
🔗 [Projeyi Wokwi'de görmek için tıklayın](https://wokwi.com/projects/426611688871783425)

---

## 💡 Kod

```cpp
const int buttonPin = 7;
const int ledPin = 13;
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT); // Dahili pull-up YOK!
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH); // Butona basılınca LED yanar
  } else {
    digitalWrite(ledPin, LOW); // Bırakılınca söner
  }
}
``` 
---

## 📫 Benimle İletişime Geç / Takip Et

Eğer proje hakkında bir fikrin varsa, soruların olursa ya da sadece selam vermek istersen; aşağıdaki kanallardan bana ulaşabilir ya da sosyal medya hesaplarımdan takip edebilirsin:

- 📧 [E-posta](mailto:info@robotdevre.com)  
- 📷 [Instagram](https://www.instagram.com/robotdevre/)  
- 🌐 [Web Sitesi](https://robotdevre.com/)  
- 🎥 [YouTube](https://www.youtube.com/@robotdevre)  
- 💼 [LinkedIn](https://www.linkedin.com/in/ugur-kerim-sirke/)  
- 🐦 [X (Twitter)](https://x.com/robotdevre)
