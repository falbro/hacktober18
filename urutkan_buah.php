
<?php
$buah = array("Manggis", "Nanas", "Anggur", "Ceri");
rsort($buah);

$clength = count($buah);
for($x = 0; $x < $clength; $x++) {
  echo $buah[$x];
  echo "<br>";
}
?>
