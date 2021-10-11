<?php
$servername = "localhost";
$username = "root";
$password = "Mrityunjay@123";

$con = new mysqli($servername, $username, $password);

if($con->connect_error){
    die("Connection failed: " . $con->connect_error);
}

echo "Connection Successfully\n";

?>  