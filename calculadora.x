/* Archivo rand.x */

/*Estructura que se utilizará para poder recoger parámetros
		dentro de los servicios*/
struct digitos_op{
			float a;
			float b;
};

program CALC_PROG{
 version CALC_VERS{
 float SUMA(digitos_op) = 1;
 float RESTA(digitos_op) = 2;
 float MULTIPLICACION(digitos_op) = 3;
 float DIVISION(digitos_op) = 4;
} = 1;
} = 0x31111111;