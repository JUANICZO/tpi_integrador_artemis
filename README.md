# Proyecto TPI en C
## Integrantes
Comision ISI C
- Juan Ignacio Cardozo
- Juan Francisco Mendoza Garcia
- Nehemias Parras
- Tomas Pueyo y Pueyo
- Juan Cruz Ramallo

## Escenario
Tras apagar sus motores de ascenso, la nave Orion es inyectada en una órbita terrestre baja, donde realiza un Movimiento Circular Uniforme sobre la superficie terrestre.

## Funcionamiento
1. Demuestra analíticamente que la fuerza gravitatoria actua como fuerza centripeta y permite calcular la velocidad orbital necesaria para mantener el movimiento circular uniforme según una altura dada.
2. Permite calcular cuantos segundos y minutos le toma a la nave orion para completar una orbita alrededor de la tierra.
3. Calcula la aceleración centrípeta de la capsula para mantener su orbita estable.
4. Calcula la desviación lateral instantánea si se activa un propulsor auxiliar en dirección perpendicular a la orbita.

La parte de validaciones nos permite garantizar una experiencia de usuario fluida y evitar que el programa falle o entre en bucles infinitos, implementando filtros estrictos, como por ejemplo si en donde se esperan números se ingresan letras, o si se ingresan tiempos negativos.

## Compilacion y Ejecucion
### Requisitos previos
* Tener instalado un compilador de C, como **GCC** o **Clang**.
* Todas las librerías utilizadas (`stdio.h`, `math.h`, `stdlib.h`, `string.h`, `ctype.h`) forman parte de la biblioteca estándar de C, por lo que no requieren instalaciones adicionales.

### 1. Compilación
Abre una terminal en la carpeta raíz donde se encuentra `main.c` y ejecuta el siguiente comando:
gcc main.c -o programa -lm

### 2. Ejecución
Una vez compilado sin errores, ejecuta el programa según tu sistema operativo:
programa.exe

## Uso de la IA
En cumplimiento con los lineamientos de la cátedra, el equipo ha utilizado herramientas de Inteligencia Artificial Generativa, de manera ética y responsable como apoyo al desarrollo del proyecto. A continuación se detallan las tareas, consultas y el proceso de validación:

1. Herramienta Utilizada
Nombre: Gemini, chatGPT, Cloude Code
Propósito: Apoyo en la organización metodológica, diseño de la arquitectura modular en lenguaje C y resolución de dudas de sintaxis.

2. Tareas Específicas y Consultas (Prompts Realizados)

Organización y división de tareas para el equipo de 5 integrantes:
Prompt / Consulta: "Ayúdame a subdividir el Trabajo Práctico Integrador de la Situación Problema 2 en tareas equitativas para un grupo de 5 personas, asignando roles de arquitectura, cálculos físicos, validaciones y control de versiones."
Uso: Se utilizó para estructurar la hoja de ruta y definir las responsabilidades individuales (Francisco, Tomas, Nehemias, Juan Cruz y Juan Ignacio).

Diseño de la Arquitectura Modular y Archivo de Cabecera (artemis.h):
Prompt / Consulta: "¿Cómo debemos estructurar el archivo de cabecera artemis.h para centralizar las constantes físicas de la Tierra y la estructura ParametrosOrbitales que comparten los distintos módulos?"
Uso: Sirvió como base para unificar los tipos de datos y evitar duplicación de código entre los archivos fuente de los compañeros.

3. Validación y Adaptación del Código
Validación técnica: Todo el código sugerido por la IA fue analizado línea por línea por el grupo. Se realizaron pruebas de compilación utilizando el compilador GCC para garantizar que no existieran advertencias (warnings) ni errores de sintaxis.
Adaptación: Las firmas de las funciones y los nombres de las variables se adaptaron específicamente para que encajaran de forma limpia con los prototipos desarrollados de manera colaborativa por cada integrante (uso de punteros, paso de estructuras por referencia y manejo del búfer de entrada).