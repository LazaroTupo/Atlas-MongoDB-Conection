# Atlas-MongoDB-Conection-With-C++

## Armar una build:
Paso 1:
Instala MSYS2 en https://www.msys2.org/

Paso 2:
Una vez instalado, iremos a nuestro terminal
    > Windows + r (Atajo de teclado), luego escribimos cmd y damos a aceptar.
    > Colocamos cmd en el buscador de windows y le hacemos click.

Luego colocaremos
    1. cd C:\msys64
    2. mingw64.exe

Se nos abrirá la terminal de MingGW, en la cual escribiremos los siguientes comandos para instalar las dependencias que necesitamos para la conección con mongoDB
    1. $ pacman --noconfirm -Syu
    2. $ pacman --noconfirm -S mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake
    3. $ pacman --noconfirm -S mingw-w64-x86_64-extra-cmake-modules make tar
    4. $ pacman --noconfirm -S mingw64/mingw-w64-x86_64-cyrus-sasl

## Configurar la build
Ahora usaremos los siguientes comandos
    1. $ wget https://github.com/mongodb/mongo-c-driver/releases/download/1.24.1/mongo-c-driver-1.24.1.tar.gz
    2. $ tar xzf mongo-c-driver-1.24.1.tar.gz
    3. $ cd mongo-c-driver-1.24.1
    4. $ mkdir cmake-build
    5. $ cd cmake-build
    6. $ cmake -DENABLE_AUTOMATIC_INIT_AND_CLEANUP=OFF ..

No olvidar los dos puntos, el output final debería ser: 
-- Build files have been written to: /home/user/mongo-c-driver-1.24.1/cmake-build

Si es algo diferente, ha debido de ocurrir un error y tendrás que revisar los pasos anteriores.
