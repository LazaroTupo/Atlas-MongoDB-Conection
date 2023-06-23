#Conexión a MongoDB Atlas con Python
Este archivo README proporcionará instrucciones detalladas sobre cómo ejecutar el código Python proporcionado para conectarse a una base de datos MongoDB en MongoDB Atlas utilizando el controlador oficial de MongoDB para Python.

Aporte realizado por el Grupo 4:
Avendaño Meza Ever Frank
Lorenzo Ramos Daniel David
Castillo Layme Sebastian Fernando
Calle Huamantinco Luis Eduardo
Supervisado por:
Arredondo Castillo Gustavo
Fiestas Manuel
Instructivo
Sigue cada uno de los siguientes pasos.

###Configurar acceso a la base de datos
Para conectarte a tu clúster en MongoDB Atlas, debes configurar el acceso a la base de datos siguiendo estos pasos:

1.Haz clic en la pestaña "Database Access" o "Acceso a la base de datos" en el panel de navegación izquierdo.

2.Haz clic en el botón "Add New Database User" o "Agregar nuevo usuario de la base de datos" para crear un usuario que tenga acceso a la base de datos.

3.Completa el formulario para crear un nuevo usuario y asegúrate de anotar las credenciales (nombre de usuario y contraseña) que elijas, ya que las necesitarás para la conexión.

###Configurar la seguridad del clúster
Para permitir que tu aplicación se conecte al clúster, debes configurar la seguridad siguiendo estos pasos:

1.Haz clic en la pestaña "Network Access" o "Acceso a la red" en el panel de navegación izquierdo.

2.Haz clic en el botón "Add IP Address" o "Agregar dirección IP" para agregar tu dirección IP actual. Esto permitirá que tu aplicación se conecte al clúster desde tu máquina local.

###Obtener la URI de conexión
La URI de conexión es una cadena de conexión que utilizaremos en el código para establecer la conexión con tu base de datos en MongoDB Atlas. Sigue estos pasos para obtener la URI de conexión:

Haz clic en la pestaña "Clusters" o "Clústeres" en el panel de navegación izquierdo y luego en el botón "Connect" o "Conectar" junto a tu clúster.

En la pantalla de conexión, selecciona la opción "Connect your application" o "Conectar tu aplicación".

Selecciona el driver "Python" y copia la URI de conexión proporcionada. Debería tener un formato similar a este: 'mongodb+srv://<username>:<password>@<cluster-name>.mongodb.net/<database>?retryWrites=true&w=majority'
Asegúrate de reemplazar <username> y <password> con las credenciales del usuario que creaste en el paso anterior. No será necesario reemplazar <cluster-name> y <database> ya que vendrán modificados por defecto con el clúster y la base de datos a los que estás conectando.

Ahora que has creado una cuenta en MongoDB Atlas, configurado un clúster y obtenido la URI de conexión, estás listo para ejecutar el código y establecer la conexión con tu base de datos en MongoDB Atlas.

###Descargar el código
Clone o descarga el código fuente desde el repositorio correspondiente. Puedes seguir estos pasos para clonar el repositorio utilizando Git:

1.Abre la terminal de Git.

2.Navega hasta el directorio donde deseas clonar el repositorio.

3.Ejecuta el siguiente comando para clonar el repositorio: 'git clone <URL_DEL_REPOSITORIO>'
Reemplaza <URL_DEL_REPOSITORIO> con la URL del repositorio que deseas clonar. Por ejemplo: 'git clone https://github.com/tu-usuario/tu-repositorio'
Esto creará una copia local del repositorio en tu sistema.

###Configurar la URI de conexión
Abre el archivo app.py en tu IDE de preferencia y busca la siguiente línea de código:
uri = "mongodb+srv://<username>:<password>@<cluster-name>.mongodb.net/<database>?retryWrites=true&w=majority"
Reemplaza la URI de conexión con la que obtuviste de MongoDB Atlas. Asegúrate de que la URI esté entre comillas dobles y tenga el formato correcto. Recuerda reemplazar <username> y <password> con los valores correctos.

###Ejecutar el código
Una vez que hayas configurado la URI de conexión, estás listo para ejecutar el código y establecer la conexión con tu base de datos en MongoDB Atlas.

Sigue estos pasos para ejecutar el código Python:

1.Abre una terminal y navega hasta el directorio donde se encuentra el código.

2.Ejecuta el siguiente comando para ejecutar el script: 'python app.py'
Si todo está configurado correctamente, verás un mensaje de confirmación que indica que te has conectado exitosamente a MongoDB Atlas.

¡Felicitaciones! Ahora estás conectado a tu base de datos MongoDB en MongoDB Atlas utilizando Python.