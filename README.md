# Proyecto TPI en C

En cumplimiento con los lineamientos de la cátedra, el equipo ha utilizado herramientas de Inteligencia Artificial Generativa (en este caso, **Gemini**) de manera ética y responsable como apoyo al desarrollo del proyecto de la Situación Problema 2 (Órbita LEO). A continuación se detallan las tareas, consultas y el proceso de validación:

### 1. Herramienta Utilizada
* **Nombre:** Gemini, chatGPT, Cloude Code
* **Propósito:** Apoyo en la organización metodológica, diseño de la arquitectura modular en lenguaje C y resolución de dudas de sintaxis.

### 2. Tareas Específicas y Consultas (Prompts Realizados)

* **Organización y división de tareas para el equipo de 5 integrantes:**
  * *Prompt / Consulta:* *"Ayúdame a subdividir el Trabajo Práctico Integrador de la Situación Problema 2 (Órbita LEO) en tareas equitativas para un grupo de 5 personas, asignando roles de arquitectura, cálculos físicos, validaciones y control de versiones."*
  * *Uso:* Se utilizó para estructurar la hoja de ruta y definir las responsabilidades individuales (Francisco, Tomas, Nehemias, Juan Cruz y juan Ignacio).

* **Diseño de la Arquitectura Modular y Archivo de Cabecera (`artemis.h`):**
  * *Prompt / Consulta:* *"¿Cómo debemos estructurar el archivo de cabecera `artemis.h` para centralizar las constantes físicas de la Tierra ($G$, $M_T$, $R_T$) y la estructura `ParametrosOrbitales` que comparten los distintos módulos?"*
  * *Uso:* Sirvió como base para unificar los tipos de datos y evitar duplicación de código entre los archivos fuente de los compañeros.

* **Integración del Menú Principal y Estructura `switch-case` (`main.c`):**
  * *Prompt / Consulta:* *"Genera un menú en `main.c` usando un bucle `do-while` y un selector `switch` para integrar las funciones de cálculos orbitales, aceleración centrípeta, período y propulsores hechas por los integrantes."*
  * *Uso:* Permitió unificar los aportes individuales de todo el grupo en un único flujo de ejecución interactivo por consola.

### 3. Validación y Adaptación del Código
* **Validación técnica:** Todo el código sugerido por la IA fue analizado línea por línea por el grupo. Se realizaron pruebas de compilación utilizando el compilador GCC para garantizar que no existieran advertencias (*warnings*) ni errores de sintaxis.
* **Adaptación:** Las firmas de las funciones y los nombres de las variables se adaptaron específicamente para que encajaran de forma limpia con los prototipos desarrollados de manera colaborativa por cada integrante (uso de punteros, paso de estructuras por referencia y manejo del búfer de entrada).
