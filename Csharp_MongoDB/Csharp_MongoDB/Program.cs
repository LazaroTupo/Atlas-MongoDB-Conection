using MongoDB.Bson;
using MongoDB.Driver;
using System;

namespace Csharp_MongoDB 
{
    internal class Program
    {
        static void Main(string[] args)
        {   
            var client = new MongoClient("mongodb://localhost:27017"); //Cambiar el URI al database que desea usar
            using (IAsyncCursor<BsonDocument> cursor = client.ListDatabases())
            {
                Console.WriteLine("Nombres de la base de datos seleccionada: \n");
                while (cursor.MoveNext())
                {
                    foreach (var doc in cursor.Current)
                    {
                        Console.WriteLine(doc["name"]);
                    }
                }
            }
        }
    }
}