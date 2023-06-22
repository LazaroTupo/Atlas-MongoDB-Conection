#include <iostream>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>

int main() {
    // Initialize the MongoDB driver
    mongocxx::instance instance{};

    // Set up the MongoDB connection URI
    mongocxx::uri uri("mongodb+srv://username:password@clustername.mongodb.net/database?retryWrites=true&w=majority");

    try {
        // Connect to MongoDB Atlas
        mongocxx::client client(uri);

        // Access the database and collection
        mongocxx::database db = client["mydatabase"];
        mongocxx::collection coll = db["mycollection"];

        // Insert a document
        bsoncxx::builder::stream::document document{};
        document << "name" << "John"
                 << "age" << 30;

        coll.insert_one(document.view());

        // Find documents
        mongocxx::cursor cursor = coll.find({});

        // Iterate over the result set
        for (auto&& doc : cursor) {
            std::cout << bsoncxx::to_json(doc) << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "MongoDB connection error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}