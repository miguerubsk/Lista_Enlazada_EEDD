# Lista Enlazada EEDD

[![C++](https://img.shields.io/badge/language-C++-blue.svg)](https://isocpp.org/)
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Estado](https://img.shields.io/badge/status-active-brightgreen.svg)]()
<br>
[![Build](https://github.com/miguerubsk/Lista_Enlazada_EEDD/actions/workflows/build.yml/badge.svg)](https://github.com/miguerubsk/Lista_Enlazada_EEDD/actions/workflows/build.yml)
[![CodeQL Advanced](https://github.com/miguerubsk/Lista_Enlazada_EEDD/actions/workflows/codeql.yml/badge.svg)](https://github.com/miguerubsk/Lista_Enlazada_EEDD/actions/workflows/codeql.yml)

## Descripción

Lista Enlazada EEDD es una implementación en C++ de una lista doblemente enlazada genérica, con operaciones de inserción, borrado, unión de listas y recorrido mediante iteradores. Incluye ejemplos de uso con la clase `Cliente` y la clase `Itinerario`, orientado a prácticas de estructuras de datos.

## Tabla de Contenidos

- [Instalación](#instalación)
- [Uso](#uso)
- [Estructura del Proyecto](#estructura-del-proyecto)
- [Contribuir](#contribuir)
- [Licencia](#licencia)
- [Contacto](#contacto)
- [Reconocimientos](#reconocimientos)

## Instalación

1. Clona el repositorio:
   ```sh
   git clone https://github.com/miguerubsk/Lista_Enlazada_EEDD.git
   ```
2. Compila el proyecto con tu compilador C++ favorito:

   ```sh
   g++ main.cpp -o lista_enlazada -std=c++11
   ```

   O usa tu IDE (Code::Blocks, Visual Studio, CLion, etc).

3. Ejecuta el binario generado:
   ```sh
   ./lista_enlazada
   ```

## Uso

- El proyecto implementa una lista doblemente enlazada genérica (`ListaDEnlazada`) con nodos y iteradores.
- Permite insertar y borrar elementos al inicio, final o en una posición específica.
- Incluye ejemplos de uso con objetos `Cliente` e `Itinerario`.
- Puedes modificar el código para probar otras estructuras o tipos de datos.

## Estructura del Proyecto

```
Lista_Enlazada_EEDD/
│
├── Cliente.h              # Definición de la clase Cliente y UTM
├── Itinerario.h           # Definición de la clase Itinerario
├── Itinerario.cpp         # Implementación de la clase Itinerario
├── fecha.h                # Definición de la clase Fecha
├── fecha.cpp              # Implementación de la clase Fecha
├── ListaDEnlazada.h       # Implementación de la lista doblemente enlazada genérica
├── vectordinamico.h       # Implementación de vector dinámico genérico (opcional)
├── main.cpp               # Ejemplo de uso y pruebas
├── LICENSE                # Licencia MIT
└── README.md              # Este archivo
```

## Contribuir

Las contribuciones son bienvenidas. Puedes abrir issues para sugerencias o errores, y enviar pull requests con mejoras o nuevas funcionalidades.

## Licencia

Distribuido bajo la Licencia MIT. Consulta el archivo `LICENSE` para más información.

## Contacto

Miguerubsk - [miguerubsk](https://github.com/miguerubsk)

## Reconocimientos

- [othneildrew/Best-README-Template](https://github.com/othneildrew/Best-README-Template) por la plantilla.
- [shields.io](https://shields.io/) por los badges.
- C++ Standard Library.
