# Conexión a MongoDB Atlas con Java

Para que se de la conexión al MongoDB con Java, se deben de realizar los siguientes procedimientos:

## Instalación de la dependencia

Para esta ocasión, se usará el IDE de [**Netbeans**](https://netbeans.apache.org/download/index.html) (cualquier versión) por la rapidez al instalar la dependencia.


1. Crear un proyecto como *Java Application*.
1. Dentro de la carpeta del proyecto, haga click derecho en la carpeta de **Dependences** y luego seleccionar la opcion de **Add Dependency**
1. Dentro del buscador solo escriba `mongodb` y seleccione la que tiene el nombre de `org.mongodb : mongodb-driver`.

## Conexión con la API

Una vez ya hecho esto, simplemente debe importar las siguientes librerías:
```
import com.mongodb.MongoClient;
import com.mongodb.MongoClientURI;
```

Y, finalmente, puede ya hacer la conexión como el siguiente ejemplo

```
MongoClient mongo = null;
mongo = new MongoClient(new MongoClientURI("mongodb://localhost:27017")); //URI por defecto
```
Como demostración, se ha hecho una conexión en el presente repositorio que tiene como output la relación de los nombres de bases de datos según la URI mostrada.

![Programa ejecutado](image.png "Ejecución del programa.")

Si ocurre el output mostrado, entonces se encuentra correctamente conectado.
