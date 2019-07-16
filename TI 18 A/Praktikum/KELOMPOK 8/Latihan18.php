<?php
include_once("Latihan17.php");
$nim=$_post ['nim'];
$nama=$_post ['nama'];
$jurusan=$_post ['jurusan'];
$angkatan=$_post ['angkatan'];
$alamat=$_post ['alamat'];
$query="insert into mahasiswa (NIM, NAMA,JURUSAN,ANGKATAN,ALAMAT) value('$nama','$jurusan','$angkatan','$alamat')";
$hasil=mysqli_query($conn,$query);
if($hasil) {
echo "data berhasil diinput";
}
else {
echo "input data gagal";
}
?>
