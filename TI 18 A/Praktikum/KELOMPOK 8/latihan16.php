<?php
include_once("latihan14.php");
$query = "SELECT * FROM mahasiswa";
$hasil = mysqli_query($conn,$query);
?>

<html>
<head>
<title> Data Mahasiswa </title>
</head>
<body>
<center>
<h1> Daftar Mahasiswa </h1>
<br>
<a href= "tambahdata.php">Tambah Data </a>
<br>
<table border="1" width = "500px">
<tf>
<th> nim </th>
<th> nama </th>
<th> jurusan </th>
<th> angkatan </th>
<th> alamat </th>
</tr>
<?php
while ($data = mysqli_fetch_array
($hasil) )
{?>
<tr>
<td> <?php echo $data ['nim']; ?> </td>
<td> <?php echo $data ['nama']; ?> </td>
<td> <?php echo $data ['jurusan']; ?> </td>
<td> <?php echo $data ['angkatan']; ?> </td>
<td> <?php echo $data ['alamat']; ?> </td>
<td>
<a href="ubahdata.php"> Ubah </a>
<a href="ubahdata.php"onclick="return confirm('Apakah Anda yakin akan menghapus data ini?')"> hapus </a>
</td>
</tr>
<?php }?>
</table>
</center>
</body>
</html>