function sum(n){
let s = 0 ;
for (i = 0 ;i<n+1;++i){
console.log(s)
s+=i;
}
return s
}


let k = sum(12);
console.log(k);