from pymongo.mongo_client import MongoClient
from pymongo.server_api import ServerApi

uri = "mongodb+srv://everavendano:JdDvOxadD4CljReV@cluster0.3qwcyjh.mongodb.net/?retryWrites=true&w=majority"


client = MongoClient(uri, server_api=ServerApi('1'))


try:
    client.admin.command('ping')
    print("You successfully connected to MongoDB!")
except Exception as e:
    print("Failed to connect to MongoDB")


client.close()
