#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

#define TFT_CS   10
#define TFT_RST  8
#define TFT_DC   9

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  Serial.begin(115200); // Inicializa a comunicação serial
  tft.init(240, 240, SPI_MODE2); // Inicializa o display
  tft.setRotation(2); // Define a orientação do display
  tft.fillScreen(ST77XX_BLACK); // Preenche a tela com a cor preta
  tft.setCursor(10, 10); // Define a posição para escrever o texto inicial
  tft.setTextColor(ST77XX_WHITE); // Define a cor do texto
  tft.setTextSize(3); // Define o tamanho do texto
  tft.setTextWrap(true);
  tft.print("HELLO WORD!"); // Exibe o texto inicial
}

void loop() {
  if (Serial.available() > 0) {
    String receivedText = Serial.readStringUntil('\n');
    tft.fillScreen(ST77XX_BLACK);
    tft.setCursor(10, 10);
    tft.setTextColor(ST77XX_WHITE);
    tft.setTextSize(3);
    tft.setTextWrap(true);
    tft.print(receivedText);
    delay(100); // Espera 10 segundos antes de limpar a tela novamente
    //tft.fillScreen(ST77XX_BLACK);
  }
}