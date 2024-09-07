// recaname the variabel with the function you use in code.js
const { solve } = require('./code.js');
const hasil = [];

// paste test case here

// testing solution


let gagal = 0;
let i = 1;
console.log('++++++++++++++ TESTING CODE +++++++++++++++++')
for(const [myRes,expect] of hasil){
    if(myRes.toString()==expect.toString()){
        console.log(`test#${i} berhasil\n`);
    } else {
		gagal++;
        console.log(`test#${i} gagal`);
        console.log(`\tyour result --> ${myRes}`);
        console.log(`\texpect result --> ${expect}\n`);
    }
    i++;
}
console.log('-----------------------------------');
console.log(`${gagal} / ${i - 1} testing gagal`);







