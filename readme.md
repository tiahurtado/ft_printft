# *Este proyecto ha sido creado como parte del currículo de 42 por <sehurtad>.*

# ft_printf

## Descripción

**ft_printf** consiste en reimplementar la función `printf()` de la biblioteca estándar de C.

El objetivo principal del proyecto es comprender el funcionamiento de las **funciones variádicas**, aprender a procesar listas de argumentos de longitud variable y desarrollar una implementación modular capaz de reproducir el comportamiento de `printf` para las conversiones requeridas.

A diferencia de la implementación original de la libc, este proyecto no gestiona el sistema de *buffering* interno de `printf`, centrándose únicamente en el análisis del formato, la obtención de los argumentos y su impresión.

---

## Conversiones implementadas

| Conversión | Descripción                                                   |
| ---------- | ------------------------------------------------------------- |
| `%c`       | Imprime un único carácter.                                    |
| `%s`       | Imprime una cadena de caracteres.                             |
| `%p`       | Imprime la dirección de memoria de un puntero en hexadecimal. |
| `%d`       | Imprime un entero decimal con signo.                          |
| `%i`       | Imprime un entero decimal con signo.                          |
| `%u`       | Imprime un entero decimal sin signo.                          |
| `%x`       | Imprime un número hexadecimal en minúsculas.                  |
| `%X`       | Imprime un número hexadecimal en mayúsculas.                  |
| `%%`       | Imprime el carácter `%`.                                      |

---

## Estructura del proyecto

```text
.
├── ft_printf.c
├── process_format.c
├── ft_printf.h
├── src/
│   ├── print_char.c
│   ├── print_string.c
│   ├── print_int.c
│   ├── print_unsigned.c
│   ├── print_hex.c
│   └── print_pointer.c
├── libft/
└── Makefile
```

La implementación está dividida en tres niveles principales:

* **ft_printf()**: recorre la cadena de formato e inicializa la lista de argumentos variádicos.
* **process_format()**: interpreta cada especificador de formato y delega la impresión en la función correspondiente.
* **print_***: cada tipo de conversión está implementado en una función independiente, facilitando el mantenimiento y la ampliación del proyecto.

---

## Compilación

Compilar la librería:

```bash
make
```

Eliminar archivos objeto:

```bash
make clean
```

Eliminar archivos objeto y la librería:

```bash
make fclean
```

Compilar de nuevo el proyecto:

```bash
make re
```

Si el proyecto incluye un programa de pruebas:

```bash
make test
./test
```

---

## Ejemplo de uso

```c
#include "ft_printf.h"

int main(void)
{
	ft_printf("Hola %s\n", "42");
	ft_printf("Número: %d\n", 42);
	ft_printf("Hexadecimal: %x\n", 255);
	return (0);
}
```

---

## Valor de retorno

Al igual que la función original, `ft_printf()` devuelve el número total de caracteres escritos en la salida estándar.

Ejemplo:

```c
int len;

len = ft_printf("Hola");
```

El contenido de `len` será:

```text
4
```

---

## Diseño e implementación

La implementación sigue una arquitectura modular basada en la separación de responsabilidades.

La función principal (`ft_printf`) únicamente se encarga de:

* Inicializar la lista de argumentos variádicos.
* Recorrer la cadena de formato.
* Delegar el procesamiento de cada conversión.

Cada especificador (`%c`, `%s`, `%d`, etc.) dispone de una función propia encargada exclusivamente de obtener el argumento correspondiente, imprimirlo y devolver el número de caracteres escritos.

Las conversiones numéricas reutilizan funciones auxiliares comunes para evitar duplicar código, facilitando futuras ampliaciones como la implementación de los *bonus*.

Esta organización mejora la legibilidad, simplifica el mantenimiento y facilita las tareas de depuración.

---

## Funciones autorizadas

* `malloc`
* `free`
* `write`
* `va_start`
* `va_arg`
* `va_copy`
* `va_end`

---

## Recursos

### Documentación

Comandos útiles:

```bash
man 3 printf
man stdarg
man 2 write
```

---

## Uso de Inteligencia Artificial

La IA se ha utilizado únicamente como herramienta de apoyo durante el aprendizaje.

Su uso se ha limitado a:

* Resolver dudas sobre funciones variádicas;
* Comprender conceptos relacionados con la implementación.
* La realizacion del readme

Todo el código, las decisiones de diseño, las pruebas y la depuración han sido desarrollados manualmente.

---

## Conclusiones

Este proyecto permite comprender en profundidad el funcionamiento interno de una de las funciones más utilizadas de la biblioteca estándar de C.

Además de introducir el uso de funciones variádicas, refuerza conceptos fundamentales como la modularización, la reutilización de código, el tratamiento de diferentes representaciones numéricas y el diseño de bibliotecas reutilizables para futuros proyectos del currículo de 42.
