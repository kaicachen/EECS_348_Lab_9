<!DOCTYPE html>
<html>
<head>
	<title>EECS 348 Lab Seven</title>
</head>
<body>
	<h1>EECS 348 Lab Seven</h1><br>
	<h2>Multiplication Table</h2>
	<?php
		if (isset($_POST["number"])) {
			$number = (int) $_POST["number"];
			echo "<table border=1>";
			echo "<tr><th></th>";
			for ($i = 1; $i <= $number; $i++) {
				echo "<th>$i</th>";
			}
			echo "</tr>";
			for ($i = 1; $i <= $number; $i++) {
				echo "<tr>";
				echo "<th>$i</th>";
				for ($j = 1; $j <= $number; $j++) {
					echo "<td>" . ($i * $j) . "</td>";
				}
				echo "</tr>";
			}
			echo "</table>";
		} else {
			echo "<p>Please enter a number.</p>";
		}
	?>
</body>
</html>