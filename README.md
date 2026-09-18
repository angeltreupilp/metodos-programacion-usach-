# Métodos de Programación - USACH

Repositorio de apoyo para ejercicios y laboratorios del ramo **Métodos de Programación** de la Universidad de Santiago de Chile.

---

# 🧪 Laboratorio 1 - SensorApp

Programa desarrollado en lenguaje **C** para realizar el análisis de lecturas obtenidas desde un sensor.

El programa contempla los siguientes bloques:

### Bloque I - Captura de datos

- Solicita al usuario la cantidad de lecturas.
- Guarda las lecturas en un arreglo.
- Obtiene el valor máximo.
- Obtiene el valor mínimo.

### Bloque II - Métricas del sensor

- Calcula el promedio de las lecturas.
- Solicita un límite establecido por el usuario.
- Determina si el promedio supera dicho límite.

### Bloque III - Tendencia creciente

- Analiza si las lecturas presentan una secuencia estrictamente creciente.
- La verificación se realiza mediante una función recursiva.

### Bloque IV - División y Conquista

- Obtiene el máximo del arreglo utilizando División y Conquista.
- Compara el máximo con el promedio.
- Muestra la diferencia entre ambos valores.

---

# 💻 Requisitos

Para ejecutar los programas necesitas:

- Visual Studio Code
- Extensión C/C++ de Microsoft
- Compilador GCC
- Git (opcional, pero recomendado)

> ⚠️ Importante: instalar Visual Studio Code y la extensión C/C++ **no instala automáticamente un compilador de C**.

---

# 1️⃣ Instalar Visual Studio Code

Descarga e instala **Visual Studio Code**.

Una vez instalado, abre VS Code.

En la barra lateral izquierda selecciona:

```text
Extensions
```

o utiliza:

```text
Ctrl + Shift + X
```

Busca:

```text
C/C++
```

Instala la extensión desarrollada por **Microsoft**.

---

# 2️⃣ Instalar GCC

Para compilar programas escritos en C necesitamos un compilador.

En Windows se puede utilizar GCC mediante **MinGW / MSYS2**.

Una vez instalado GCC, debemos verificar que Windows lo reconozca.

Abre una terminal y ejecuta:

```bash
gcc --version
```

Si está instalado correctamente debería aparecer algo parecido a:

```text
gcc (GCC) 15.x.x
Copyright ...
```

Si aparece:

```text
'gcc' no se reconoce como un comando...
```

significa que GCC todavía no está instalado correctamente o no se encuentra agregado al PATH de Windows.

---

# 3️⃣ Descargar el proyecto

Existen dos formas.

## Opción A - Descargar ZIP

En GitHub presiona:

```text
Code
```

y luego:

```text
Download ZIP
```

Descomprime el archivo en alguna carpeta de tu computador.

---

## Opción B - Clonar utilizando Git

Si tienes Git instalado, abre una terminal y ejecuta:

```bash
git clone https://github.com/angeltreupilp/metodos-programacion-usach-.git
```

Esto descargará una copia completa del repositorio.

Luego entra a la carpeta:

```bash
cd metodos-programacion-usach-
```

---

# 4️⃣ Abrir el proyecto en Visual Studio Code

Abre Visual Studio Code.

Selecciona:

```text
File
→ Open Folder
```

Selecciona la carpeta donde descargaste el repositorio.

También puedes abrir la carpeta directamente desde una terminal utilizando:

```bash
code .
```

---

# 5️⃣ Abrir la terminal de Visual Studio Code

Dentro de Visual Studio Code puedes abrir una terminal integrada.

Puedes hacerlo desde el menú:

```text
Terminal
→ New Terminal
```

También puedes utilizar el atajo del teclado.

Dependiendo de la distribución del teclado puede ser:

```text
Ctrl + `
```

o en algunos teclados en español:

```text
Ctrl + ñ
```

Se abrirá una terminal en la parte inferior de Visual Studio Code.

Deberías encontrarte dentro de la carpeta del proyecto.

Por ejemplo:

```text
C:\Users\Usuario\Desktop\metodos-programacion-usach
```

---

# 6️⃣ Entrar al Laboratorio 1

Si el proyecto está organizado de la siguiente forma:

```text
metodos-programacion-usach-/
│
├── README.md
│
└── laboratorio-01/
    └── sensorApp.c
```

desde la terminal debes entrar a la carpeta:

```bash
cd laboratorio-01
```

Puedes verificar los archivos utilizando:

```bash
dir
```

En Git Bash también puedes utilizar:

```bash
ls
```

Deberías visualizar:

```text
sensorApp.c
```

---

# 7️⃣ Compilar el programa

Para transformar el código C en un programa ejecutable utiliza GCC.

Ejecuta:

```bash
gcc sensorApp.c -o sensorApp
```

### ¿Qué significa este comando?

```text
gcc
```

es el compilador.

```text
sensorApp.c
```

es nuestro código fuente escrito en C.

```text
-o sensorApp
```

indica el nombre que queremos darle al programa generado.

En Windows se generará automáticamente:

```text
sensorApp.exe
```

Por lo tanto tendremos:

```text
sensorApp.c
sensorApp.exe
```

---

# 8️⃣ Ejecutar el programa

Una vez compilado correctamente podemos ejecutar el programa.

## Desde Git Bash

Ejecuta:

```bash
./sensorApp.exe
```

## Desde PowerShell

Ejecuta:

```powershell
.\sensorApp.exe
```

## Desde CMD

Ejecuta:

```cmd
sensorApp.exe
```

También puedes abrir:

```text
sensorApp.exe
```

directamente desde el Explorador de Windows.

---

# 🔄 Flujo completo

En resumen, una vez que ya tienes todo instalado, normalmente solo necesitarás hacer:

```bash
cd laboratorio-01
```

Compilar:

```bash
gcc sensorApp.c -o sensorApp
```

Ejecutar:

```bash
./sensorApp.exe
```

Es decir:

```text
sensorApp.c
      ↓
     GCC
      ↓
sensorApp.exe
      ↓
   Ejecutar
```

---

# 🛠️ Compilar mostrando advertencias

También puedes utilizar:

```bash
gcc -Wall -Wextra sensorApp.c -o sensorApp
```

Las opciones:

```text
-Wall
-Wextra
```

permiten que GCC muestre más advertencias sobre posibles errores en nuestro código.

Es recomendable utilizarlas mientras estamos programando.

---

# 🔁 ¿Modificaste el código?

Cada vez que modifiques:

```text
sensorApp.c
```

debes volver a compilarlo:

```bash
gcc sensorApp.c -o sensorApp
```

y después volver a ejecutar:

```bash
./sensorApp.exe
```

El archivo `.exe` anterior no se actualiza automáticamente al modificar el archivo `.c`.

---

# 📥 Obtener las últimas modificaciones

Si clonaste previamente este repositorio y quieres obtener los cambios más recientes:

Ubícate en la carpeta principal del proyecto:

```bash
git pull
```

Git descargará las últimas modificaciones disponibles en GitHub.

---

# 📂 Estructura del repositorio

La idea es utilizar este mismo repositorio durante el semestre.

```text
metodos-programacion-usach-/
│
├── README.md
│
├── laboratorio-01/
│   └── sensorApp.c
│
├── laboratorio-02/
│
├── laboratorio-03/
│
└── ejercicios/
```

---

# 📚 Tecnologías utilizadas

- Lenguaje C
- GCC
- Visual Studio Code
- Git
- GitHub

---

# 🎓 Universidad

Universidad de Santiago de Chile  
Ingeniería de Ejecución en Computación e Informática  
Métodos de Programación

---
