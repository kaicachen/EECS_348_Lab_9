function change_styles(){
	var redValue = document.getElementById("red-input").value;
	var greenValue = document.getElementById("green-input").value;
	var blueValue = document.getElementById("blue-input").value;
	var bgRedValue = document.getElementById("bg-red-input").value;
	var bgGreenValue = document.getElementById("bg-green-input").value;
	var bgBlueValue = document.getElementById("bg-blue-input").value;
	var borderWidthValue = document.getElementById("border-width-input").value;
	var paragraph = document.getElementById("paragraph");
  
	//paragraph.style.color = "rgb(" + redValue + "," + greenValue + "," + blueValue + ")";
	paragraph.style.borderColor = `rgb(${redValue},${greenValue},${blueValue})`;
	//paragraph.style.backgroundColor = "rgb(" + bgRedValue + "," + bgGreenValue + "," + bgBlueValue + ")";
	paragraph.style.backgroundColor = `rgb(${bgRedValue},${bgGreenValue},${bgBlueValue})`;
	paragraph.style.borderWidth = borderWidthValue + "px";
}

function password_compare() {
	var password1 = document.getElementById("password1").value;
	var password2 = document.getElementById("password2").value;

	if (password1.length < 8) {
        alert("The length of the first password is less than 8 letters")
    } else if (password2.length < 8) {
        alert("The length of the second password is less than 8 letters")
    } else if (password1 != password2) {
        alert("The passwords do not match")
    } else {
        alert("The passwords match")
    }
}