# Atlas-MongoDB-Conection-With-C++

## Armar una build:
Paso 1:
> Instala MSYS2 en https://www.msys2.org/

Paso 2:
Una vez instalado, iremos a nuestro terminal
> Windows + r (Atajo de teclado), luego escribimos cmd y damos a aceptar.

Luego colocaremos
> cd C:\msys64
> mingw64.exe

Se nos abrirá la terminal de MingGW, en la cual escribiremos los siguientes comandos para instalar las dependencias que necesitamos para la conección con mongoDB
> $ pacman --noconfirm -Syu
> 
> $ pacman --noconfirm -S mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake
> 
> $ pacman --noconfirm -S mingw-w64-x86_64-extra-cmake-modules make tar
> 
> $ pacman --noconfirm -S mingw64/mingw-w64-x86_64-cyrus-sasl

## Configurar la build
Ahora usaremos los siguientes comandos
> $ wget https://github.com/mongodb/mongo-c-driver/releases/download/1.24.1/mongo-c-driver-1.24.1.tar.gz
> 
> $ tar xzf mongo-c-driver-1.24.1.tar.gz
> 
> $ cd mongo-c-driver-1.24.1
> 
> $ mkdir cmake-build
> 
> $ cd cmake-build
> 
> $ cmake -DENABLE_AUTOMATIC_INIT_AND_CLEANUP=OFF ..

No olvidar los dos puntos del final. El output final debería ser: 
> -- Build files have been written to: /home/user/mongo-c-driver-1.24.1/cmake-build

Si es diferente, ha debido de ocurrir un error y tendrás que revisar los pasos anteriores.
