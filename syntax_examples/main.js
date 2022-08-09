console.log("Hello from javascript");

let x = 12;
const e = 1.6e19;
let isAlive = true;
let fname = undefined;
let lname = null;

const value1 = Symbol('hello');
console.log(value1.description);

let id = Symbol("id");

let person = {
    name: "Jack",
    age: 25,
    [id]: 12
};

// using for...in
for (let key in person) {
    console.log(key);
}