# Comedero Inteligente para Gatos

Proyecto del curso EL-1200 Introducción a la Electrónica.
Instituto Tecnológico de Costa Rica, II semestre de 2026.

## Integrantes
Cristopher Barquero Badilla

## Descripción
Este proyecto simula un comedero automático para gatos
mediante un ESP32, un sensor PIR, un servomotor y un LED.

Su objetivo es dispensar alimento al detectar movimiento
y evitar entregas repetidas mientras el sensor siga activado.

## Funcionamiento
- El sensor PIR detecta movimiento.
- El servomotor abre la compuerta durante 1,5 segundos
  y después la cierra.
- El LED se enciende mientras se dispensa alimento.
- La variable booleana dispensado evita repetir la entrega.
- Al dejar de detectarse movimiento, el sistema queda
  preparado para otra detección.

## Conexiones
| Componente | Pin de señal del ESP32 |
|---|---|
| Sensor PIR | GPIO 2 |
| Servomotor | GPIO 13 |
| LED con resistencia de 220 ohmios | GPIO 5 |

Las conexiones de alimentación y tierra se muestran
en el siguiente diagrama de la simulación.

![Diagrama de conexiones](docs/esquema.png)

## Simulación en Wokwi
https://wokwi.com/projects/479811074346710017

## Código
Los archivos del proyecto están en la carpeta firmware:
- sketch.ino: código del ESP32.
- diagram.json: circuito y conexiones de Wokwi.
- libraries.txt: bibliotecas necesarias.

Biblioteca utilizada: ESP32Servo.

## Documentación
[Explicación del funcionamiento](docs/funcionamiento.md)

## Materiales
[Lista de materiales](bom/materiales.md)

## Evidencia
[Enlace al video del funcionamiento](media/evidencia.md)

![Comedero en funcionamiento](media/simulacion.png)

## Mejoras futuras
- Incorporar horarios de alimentación.
- Agregar un sensor para conocer la cantidad
  de alimento disponible.
