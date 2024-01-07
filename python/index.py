import serial
import time

# Abre a comunicação serial com o Arduino (substitua a porta e a velocidade conforme necessário)
arduino = serial.Serial('COM4', 9600, timeout=1)
time.sleep(2)  # Aguarda a inicialização da porta serial

# Texto a ser enviado para o Arduino
texto = "Ola abcdefg!\n"  # Adiciona \n para indicar o final da mensagem

# Envia o texto para o Arduino
arduino.write(texto.encode())  # Envia o texto com a codificação necessária

# Fecha a conexão serial
arduino.close()