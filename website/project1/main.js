const PI = 3.14159;
let rad =0 ;
let circum ;


document.getElementById("mys").onclick = function(){

    rad = Number(document.getElementById("radius").value);
    //rad= Number(rad);
    circum = 2*PI*rad;
    document.getElementById("circum").textContent = circum;

}
