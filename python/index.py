import serial # Impotar a serial para comunicação
import time

# Abre a comunicação serial com o Arduino (substitua a porta e a velocidade conforme necessário)
arduino = serial.Serial('COM4', 115200, timeout=1)
time.sleep(2)  # Aguarda a inicialização da porta serial

# Texto a ser enviado para o Arduino
texto = input('Texto: ')  # Esperando o texto
texto += '\n' # Adiciona \n para indicar o final da mensagem

time.sleep(0.1)  # Pequeno atraso antes de enviar os dados

# Envia o texto para o Arduino
arduino.write(texto.encode('utf-8').upper())  # Envia o texto com a codificação necessária

# Fecha a conexão serial
arduino.close()