# Conexión a MongoDB Atlas
Este archivo README proporcionará instrucciones detalladas sobre cómo ejecutar el código C, C++, C#, Go, Java, Kotlin, JavaScript, PHP, Python, Ruby, Rust,  Scala y Swift proporcionado para conectarse a una base de datos MongoDB en MongoDB Atlas utilizando los controladores respectivos a cada lenguaje.
 
	APORTE REALIZADO POR EL GRUPO 4:
	- Avendaño Meza Ever Frank
	- Lorenzo Ramos Daniel David
	- Castillo Layme Sebastian Fernando
	- Calle Huamantinco Luis Eduardo
 
	SUPERVISADO POR:
	- Arredondo Castillo Gustavo 
	- Manuel Fiestas
# Intructivo
Siga cada uno de los siguientes pasos.

## Crear una cuenta en MongoDB Atlas
Si aún no tiene una cuenta en MongoDB Atlas, sigua estos pasos para crear una cuenta gratuita:

1. Visite el sitio web de MongoDB Atlas: https://www.mongodb.com/cloud/atlas.

2. Haga clic en el botón "Registrarse" o "Comenzar gratis" para crear una cuenta.

3. Completa el formulario de registro con tu información personal y sigue las instrucciones para crear tu cuenta.

## Crear un clúster en MongoDB Atlas
Un clúster en MongoDB Atlas es un conjunto de servidores que alojarán tu base de datos. Sigue los siguientes pasos para crear un clúster en MongoDB Atlas:

1. Inicie sesión en su cuenta de MongoDB Atlas.

2. Haga clic en el botón "Build a Cluster" o "Crear clúster" para crear un nuevo clúster de MongoDB. Puede elegir la opción gratuita (M0) para empezar.

3. Seleccione la nube y la región en la que deseé alojar tu base de datos.

4. Configure las opciones adicionales según sus preferencias.

5. Haga clic en el botón "Create Cluster" o "Crear clúster" para iniciar el proceso de creación. Esto puede llevar unos minutos.

## Configurar acceso a la base de datos
Para conectarte a tu clúster en MongoDB Atlas, debe configurar el acceso a la base de datos siguiendo estos pasos:

1. Haga clic en la pestaña "Database Access" o "Acceso a la base de datos" en el panel de navegación izquierdo.

2. Haga clic en el botón "Add New Database User" o "Agregar nuevo usuario de la base de datos" para crear un usuario que tenga acceso a la base de datos.

3. Complete el formulario para crear un nuevo usuario y asegúrate de anotar las credenciales (nombre de usuario y contraseña) que elija, ya que las necesitará para la conexión.

## Configurar la seguridad del clúster
Para permitir que su aplicación se conecte al clúster, debe configurar la seguridad siguiendo estos pasos:

1. Haga clic en la pestaña "Network Access" o "Acceso a la red" en el panel de navegación izquierdo.

2. Haga clic en el botón "Add IP Address" o "Agregar dirección IP" para agregar tu dirección IP actual. Esto permitirá que su aplicación se conecte al clúster desde tu máquina local.

## Obtener la URI de conexión
La URI de conexión es una cadena de conexión que utilizaremos en el código para establecer la conexión con su base de datos en MongoDB Atlas. Sigua estos pasos para obtener la URI de conexión:

1. Haga clic en la pestaña "Database" o "Base de datos en el panel de navegación izquierdo y luego en el botón "Connect" o "Conectar" junto a tu clúster que deseas enlazar.

2. En la pantalla de conexión, seleccione la opción "Drivers" o "Controladores".

3. Seleccionar el driver según al que desea conectarse y posteriormente vaya a la carpeta del lenguaje, dentro de este repositorio, que desea conectarse al MongoDB Atlas. Dentro de esa carpeta se encontrará un Readme para cada lenguaje que desee. 


#### Ejemplo
Si desea conectarse al MongoDB mediante Node.js seleccione en el menú desplegable debajo de **drivers** la opción de Node.js y en este repositorio ingrese a la carpeta llamada **JavaScript** y continúe con el Readme dentro de esa carpeta.

