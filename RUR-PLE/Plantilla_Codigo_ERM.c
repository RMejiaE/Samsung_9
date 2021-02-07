/*
 * (Nombre y apellidos del programador o el grupo de trabajo)
 * Eduardo Rodríguez Mejía
 * 
 * (Fecha o periodo)
 * Enero 30 de 2020, 2020-1
 * 
 * (Título)
 * Plantilla de código comentado
 * 
 * (Descripción)
 * Se presenta una opción de plantilla para comentar el código y se mencionan buenas prácticas de programación.
 * 
 */

// Librería del microcontrolador a trabajar. Generalmente esto lo pone la IDE al escoger la familia.
#include <msp430.h> 

// Definiciones generales
/*
 * Identificar los bits a trabajar es una buena costumbre.
 * Las macro (#define) se suelen poner en mayúsculas para distinguirlos de variables en el código.
 * Acostumbrarse a usat Tabulador después de cada macro.
 * #define (espacio) NOMBRE (TAB) valor
 */
#define BIT_0   0b00000001
#define BIT_1   0b00000001
#define BIT_2   0b00000001
#define BIT_3   0b00000001
#define BIT_4   0b00000001
#define BIT_5   0b00000001
#define BIT_6   0b00000001
#define BIT_7   0b00000001

/*
 * Posteriorente se pueden definir elementos para cada periférico o módulo extra a trabajar.
 */

// Definiciones GPIO
/*
 * Se pueden usar definiciones anteriores para definit las nuevas.
 */
#define BOTON   BIT_3
#define LED_0   BIT_0
#define LED_1   BIT_1

// Definiciones ADC
/*
 * Estas dependerán del microcontrolador a trabajar, este es un ejemplo.
 */
#define ADC_SOC 0b01000000
#define ADC_EOC 0b00000001

// Definiciones TIMER
/*
 * Idem, se debe revisar la hoja de datos para la definición adecuada según los registros.
 */
#define TA0_FLG 0b00000010
#define _100_Hz 4000

// Definiciones 7 segmentos
/*
 * Se pueden definir en lógica positiva o negativa.
 * Se definen en lógica positiva para este ejemplo con una codificación del bit menos significativo como el segmento
 * a de manera ascendente.
 */
#define _0  0b00111111
#define _1  0b00000110
#define _2  0b01011011
#define _3  0b01001111
#define _4  0b01100110
#define _5  0b01101101
#define _6  0b01111101
#define _7  0b00000111
#define _8  0b01111111
#define _9  0b01100111
#define _A  0b01011111
#define _B  0b01111100
#define _C  0b00111001
#define _D  0b01011110
#define _E  0b01111001
#define _F  0b01110001

// Declaración de variables
char cont = 0, temp = 0;

// Declaración de funciones
/*
 * Recomendado usar fucniones de configuración mientras de elaboran las bibliotecas de cada módulo.
 */
void Conf_GPIO();
void Conf_ADC();
void Conf_TIMER();
void Conf_UART();
/*
 * Adicionalmente se organizan las funciones a usarse para el desarrollo del programa.
 */
char Vis_7_Seg(char numero);
char Pulsa_Boton(char puerto, char estado);
void Canal_ADC(char canal);

int main(void)
{
    /*
     * El código principal también se comenta para mencionar qué hace cada parte y dar claridad.
     */
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	return 0;
}
// Cuerpo de as funciones
/*
 * Acá se plasma el cuerpo de las funciones y se puede comentar para aclarar.
 */
void Conf_GPIO(){
    // Configuración del puerto 1 como salida.
    P1DIR = (BIT_0 | BIT_1 | BIT_2 | BIT_3 | BIT_4 | BIT_5 | BIT_6 | BIT_7);
    //Configuración de P2.0 a P2.4 como entrada y el resto como salida.
    P2DIR = (BIT_5 | BIT_6 | BIT_7);
}
void Conf_ADC(){
    // Reloj del módulo escalizado en X.
}
void Conf_TIMER(){
    // Base de tiempo de Y ms.
}
void Conf_UART(){
    // Tasa de transmisión de 9600 baudios.
}
char Vis_7_Seg(char numero){
    // Códificación XYZ
    switch(numero){
    case 0:
        break;
    }
}
char Pulsa_Boton(char puerto, char estado){
    // Lectura del estado del puerto para detección de flanco de subida.
}
void Canal_ADC(char canal){
    // Cambio de canal para conversión del ADC.
}