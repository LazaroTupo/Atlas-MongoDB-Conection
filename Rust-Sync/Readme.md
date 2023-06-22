# Conexión a MongoDB Atlas con Rust
El siguiente Readme explicará la creación y archivos y ejecución del código para conectarlo a MongoDB Atlas mediante el lenguaje de programación Rust mediante la Synchronous API.

# Ajustes en el main.rs

1. Vaya a la carpeta **src** y dentro abra el archivo en su editor de texto preferido el archivo main.rs.

2. Dentro de la carpeta busque la línea 6 o busque este comando dentro del código **"ClientOptions::parse("mongodb+srv://< username >:< password >@cluster0.adhlnkg.mongodb.net/?retryWrites=true&w=majority")?;"**

3. Cambiar el "< username >" por su usuario del MongoDB Atlas y el "< password >" por la contraseña de ese usuario.

# Ejecución del código

1. Diríjase a su terminal preferida y ubíquese en el directorio donde se encuentra los archivos de la carpeta  **Rust-Sync**

2. Una vez ubicado en el directorio ejecutar el siguiente comando para poder descargar y compilar las dependencias de mongodb y los features del archivo **Cargo.toml**.

		cargo build
3. Una vez terminado el proceso ejecute el siguiente comando para empezar a correr el programa con el driver de Rust 

		cargo run

Si se siguió los pasos entonces en la consola te saldrá el siguiente mensaje indicando que fue un éxito la conexión

		La conexión fue exitosa


