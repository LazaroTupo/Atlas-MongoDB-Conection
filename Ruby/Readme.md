# Conexión a MongoDB Atlas con Ruby
El siguiente Readme explicará la ejecución del código para conectarlo a MongoDB Atlas mediante el lenguaje de programación Ruby

## Ajustes en la carpeta main.rb
Una vez que ya tenga la carpeta descargada siga los siguientes pasos en la terminal

1. Ubíquese en el directorio, desde la terminal, en donde se encuentre su archivo **main.rb**

2. Una vez que esté en el directorio ejecute los siguientes comandos, cada uno de manera independiente, cuando termina el proceso del anterior que se haya escrito.

		gem install bson
		gem install mongo
		gem install mongo_ext


## Ajustes en el main.rb

1. Abra el archivo **main.rb** e su editor de código preferido

2. Dentro del archivo busque la línea 4 o busque este comando dentro del código **"uri = "mongodb+srv://< username >:< password >@cluster0.adhlnkg.mongodb.net/?retryWrites=true&w=majority""**

3. Cambiar el "< username >" por su usuario del MongoDB Atlas y el "< password >" por la contraseña de ese usuario.

## Ejecución del código

Vuelva a la terminal y en el mismo directorio del archivo ejecutar la siguiente línea de comando

		ruby main.rb
		
Si todo se siguió de acuerdo a los pasos el programa mostrará en la terminal el texto **"You successfully connected to MongoDB!"** 
Ya está conectado a la base de datos.
