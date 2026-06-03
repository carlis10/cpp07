# CPP07 - C++ Templates

## Descripción

Este módulo introduce el uso de **templates** en C++. Los templates permiten escribir código genérico que puede trabajar con diferentes tipos de datos sin necesidad de duplicar código.

El proyecto está dividido en tres ejercicios:

- **ex00:** Implementación de una función template `swap`, `min` y `max`.
- **ex01:** Implementación de una función template `iter`.
- **ex02:** Creación de una clase template `Array`.

---

## Conceptos aprendidos

- Function Templates
- Class Templates
- Generic Programming
- Sobrecarga de funciones
- Operadores de comparación
- Gestión dinámica de memoria
- Copia profunda (Deep Copy)
- Excepciones
- Canonical Orthodox Form

---

## Estructura del proyecto

```text
CPP07/
├── ex00/
│   ├── whatever.hpp
│   ├── main.cpp
│   └── Makefile
│
├── ex01/
│   ├── iter.hpp
│   ├── main.cpp
│   └── Makefile
│
└── ex02/
    ├── Array.hpp
    ├── Array.tpp
    ├── main.cpp
    └── Makefile
```

---

# ex00 - Templates básicos

## Objetivo

Implementar las siguientes funciones template:

```cpp
swap(T& a, T& b);
min(const T& a, const T& b);
max(const T& a, const T& b);
```

## Ejemplo

```cpp
int a = 2;
int b = 3;

swap(a, b);

std::cout << min(a, b) << std::endl;
std::cout << max(a, b) << std::endl;
```

### Conceptos

- Function templates
- Tipos genéricos
- Comparación mediante operadores

---

# ex01 - Iterador genérico

## Objetivo

Crear una función template:

```cpp
iter(array, length, function);
```

que aplique una función a cada elemento de un array.

## Ejemplo

```cpp
void print(const int& n)
{
    std::cout << n << std::endl;
}

int arr[] = {1, 2, 3, 4, 5};

iter(arr, 5, print);
```

### Conceptos

- Templates con arrays
- Punteros a funciones
- Programación genérica

---

# ex02 - Clase Array

## Objetivo

Implementar una clase template similar a un array dinámico.

### Características

- Constructor por defecto
- Constructor con tamaño
- Constructor de copia
- Operador de asignación
- Destructor
- Operador `[]`
- Gestión de excepciones

## Ejemplo

```cpp
Array<int> numbers(5);

numbers[0] = 42;
numbers[1] = 21;

std::cout << numbers[0] << std::endl;
```

### Acceso fuera de rango

```cpp
try
{
    numbers[10] = 5;
}
catch (std::exception& e)
{
    std::cout << e.what() << std::endl;
}
```

### Conceptos

- Class templates
- Dynamic allocation
- Deep copy
- Exception handling

---

## Compilación

Entrar en el ejercicio deseado:

```bash
cd ex00
make
```

o

```bash
cd ex01
make
```

o

```bash
cd ex02
make
```

---

## Ejecución

```bash
./Template
```

```bash
./iter
```

```bash
./array
```

---

## Normas del proyecto

- Compilación con:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

- Cumplimiento del estándar C++98.
- Sin uso de librerías externas.
- Gestión correcta de memoria.
- Ausencia de fugas de memoria.

---

## Autor

Carlos Raveglia Cuesta.
Proyecto realizado como parte del currículo de la escuela 42.
