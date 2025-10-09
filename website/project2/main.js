let dec = document.getElementById('dec');
let inc = document.getElementById('inc');
let rst = document.getElementById('rst');
let res = document.createElement('res');

let count = 0;


dec.onclick = function() {
    count--;
    res=count;
    document.getElementById('count').textContent = count;
    
}

inc.onclick = function() {
    count ++;
    res=count;
    document.getElementById('count').textContent = count;
     textContent=count;
    
}

rst.onclick = function() {
    count = 0;
    res=0;
     document.getElementById('count').textContent = count;
    
    


}

res = count ;
document.getElementById('res').textContent = res;






