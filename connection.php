<?php
$conn = mysqli_connect("localhost", "root", "", "mi");
if (mysqli_connect_error()) {
    echo "error";
} else {
    $sql = "SELECT availability FROM class  WHERE classno = 'S01' ";
    $result = mysqli_query($conn, $sql);
    if (mysqli_error($conn)) {
        echo "error" . mysqli_error($conn);
    } else {
        echo "printing table";

        //code for printing database line
    }
}