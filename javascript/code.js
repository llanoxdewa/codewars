const print = (...val) => console.log(`[PRINT]: (${val.join(' ')})`); 
const cek = (a,b) => a === b ? console.log("[PASSED]") : console.log(`[FAILED]: ${a} != ${b}`); 
const isPassed = (res) => res ? console.log("[PASSED]") : console.log(`[FAILED]: ${a} != ${b}`); 
const range = (f,l,s = 1) => Array.from({length:((l - f) + 1) / s},(_,i) => (i + 1) * s);
const sum = (...val) => val.reduce((h,el) => h + el,0);
const strRev = s => String(s).split('').reverse().join('');
const cons = el => console.log(el);


const ispalin = n => n > 10 && ''+n === [...(''+n)].reverse().join('')

function palindrome(num) { 
  if(num < 0 || typeof num != 'number') return 'Not valid';
  let n = num, N = num;
  while(!ispalin(n) && !ispalin(N)){
    ++n; 
    if(N > 10)
      --N;
  }
  if(ispalin(n) && ispalin(N))
    return Math.max(n,N);
  return ispalin(n) && n || N;
}


cek(palindrome(8),11);
cek(palindrome(281),282);
cek(palindrome(1029),1001); 
cek(palindrome(1221),1221);
cek(palindrome(99),101);
cek(palindrome("BGHHGB"),"Not valid");
cek(palindrome("11029"),"Not valid");
cek(palindrome(-1029),"Not valid");


