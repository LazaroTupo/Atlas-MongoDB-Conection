package id.mongodb_connection;

import com.mongodb.MongoClient;
import com.mongodb.MongoClientURI;
import com.mongodb.MongoException;
import java.util.List;

import javax.swing.JOptionPane;

public class MongoConnection {
    public MongoClient createConnection() {
        //Cambiar la URI por uno propio al database que se desea conectar
        String connectionString = "mongodb://localhost:27017";
        MongoClient mongo = null;

        try {
            mongo = new MongoClient(new MongoClientURI(connectionString));
            List<String> DatabaseNames = mongo.getDatabaseNames();
            JOptionPane.showMessageDialog(null, "Conectado.\nNombres de bases de datos del host:\n"+DatabaseNames.toString());
        } 

        catch (MongoException e){
            JOptionPane.showMessageDialog(null, "Fallo en la conexion.");
        }
        
        return mongo;
    }  
}
