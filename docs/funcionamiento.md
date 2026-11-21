# Funcionamiento del comedero

1. El sensor PIR detecta movimiento.
2. Si no se ha servido alimento, el servomotor abre
   la compuerta y el LED se enciende.
3. Después de 1,5 segundos, la compuerta se cierra
   y el LED se apaga.
4. La variable dispensado evita repetir la entrega
   mientras el sensor continúa activado.
5. Cuando deja de detectarse movimiento, se reinicia
   la variable y el sistema queda listo para otra detección.
