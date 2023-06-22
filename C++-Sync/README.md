# Atlas-MongoDB-Conection-With-C++

## Prerrequisitos
Tener una cuenta en MongoDB Atlas y un cluster creado
>https://www.mongodb.com/developer/products/atlas/free-atlas-cluster/

Microsoft Visual Studio, durante su instalación seleccionaremos “Desktop development with C++.”
>https://visualstudio.microsoft.com/downloads/

Instala CMake desde
>https://cmake.org/download/

Instala Python desde
>https://www.python.org/downloads/


## Instalación de los drivers
### Mongo-c-driver
Dirigete a https://github.com/mongodb/mongo-c-driver/releases e instala la última version, esta será la primera opción que aparece en assets, tal como lo muestra la imagen:

![image](https://github.com/LazaroTupo/Atlas-MongoDB-Conection/assets/123672027/25e6bf89-6107-4a4e-b0a3-763fbd83779b)

Una vez descargado, extrae los archivos, debería aparecer una carpeta como la de abajo:

![image](https://github.com/LazaroTupo/Atlas-MongoDB-Conection/assets/123672027/7e3dd5dd-513b-49cf-9fd5-eb4876248a72)

Mueve esta carpeta a Windows(C:), esto nos facilitará la vida más adelante.

Ahora abre tu terminal, ya sea con el atajo de teclado windows + r y escribiendo cmd o en el buscador de windows.
- Utilizando el comando cd C:\mongo-c-driver-1.24.0 (Esto nos llevará a la carpeta pero dentro de la terminal)
- Crearemos una carpeta con cmake usando el comando mkdir cmake-build
- Entramos a esta carpeta con el comando cd C:\mongo-c-driver-1.24.0\cmake-build
- Una vez dentro ejecutaremos el comando cmake -G "Visual Studio 17 2022" -A x64 -S "C:\mongo-c-driver-1.24.0" -B "C:\mongo-c-driver-1.24.0\cmake-build"

![image](https://github.com/LazaroTupo/Atlas-MongoDB-Conection/assets/123672027/c75193c3-7d22-465e-a86f-a5285ec6a6e1)

- Terminada la configuración y generación de archivos para la build, pasamos a su instalación con el comando cmake --build . --config RelWithDebInfo --target install

![image](https://github.com/LazaroTupo/Atlas-MongoDB-Conection/assets/123672027/abc24d88-b5be-4ba2-9bb1-bbcf80ff43a4)

- Cuando terminé la instalación, tendremos una carpeta llamada mongo-c-driver en

![image](https://github.com/LazaroTupo/Atlas-MongoDB-Conection/assets/123672027/bd1a9952-8434-4035-be6a-f74fd05ce115)

- Moveremos esta carpeta a C:\

### Mongo-cxx-driver




