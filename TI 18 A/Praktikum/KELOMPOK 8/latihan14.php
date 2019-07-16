<?php
$conn = mysqli_connect 
("localhost","root","","db_akademik");
if(!$conn) {
echo "koneksi gagal";
die();
}