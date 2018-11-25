// Go program that demonstrates how to decode a JSON string.
 
package main
 
import (
    "fmt"  
    "encoding/json" // Encoding and Decoding Package
)
 
// JSON Contains a sample String to unmarshal.
 
var JSON = `{
    "name":"Gatare Libère",
    "jobtitle":"Full-Stack Developer",
    "phone":{
        "Telkom":"776-994-038",
        "Safaricom":"711-537-254"
    },
    "email":"gatarelib@gmail.com"
}`
 
func main() {
    // Unmarshal the JSON string into info map variable.
    var info map[string]interface{}
    json.Unmarshal([]byte(JSON),&info)
 
    // Print the output from info map.
    fmt.Println(info["name"])
    fmt.Println(info["jobtitle"])
    fmt.Println(info["email"])
    fmt.Println(info["phone"].(map[string]interface{})["Telkom"]) 
    fmt.Println(info["phone"].(map[string]interface{})["Safaricom"])
}
