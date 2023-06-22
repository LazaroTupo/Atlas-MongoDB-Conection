
require 'mongo'

uri = "mongodb+srv://Lazaro:Khtolr333@cluster0.adhlnkg.mongodb.net/?retryWrites=true&w=majority"

# Set the server_api field of the options object to Stable API version 1
options = { server_api: {version: "1"} }

# Create a new client and connect to the server
client = Mongo::Client.new(uri, options)

# Send a ping to confirm a successful connection
begin
  admin_client = client.use('admin')
  result = admin_client.database.command(ping: 1)
  puts "You successfully connected to MongoDB!"
rescue Mongo::Error::OperationFailure => ex
  puts ex
ensure
  client.close
end
