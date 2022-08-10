// inside module.js
// export {
//     function1,
//     function2
// };

// when you want to use the module
// import in the required file with different name

// import { function1 as newName1, function2 as newName2 } from './module.js';

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


const number = 40;
try {
    if (number > 50) {
        console.log('Success');
    }
    else {

        // user-defined throw statement
        throw new Error('The number is low');
    }

    // if throw executes, the below code does not execute
    console.log('hello');
}
catch (error) {
    console.log('An error caught');
    console.log('Error message: ' + error);
} finally {
    console.log("Fuck !");
}

// throw new ReferenceError('this is reference error');

// exporting a function
// export function greetPerson(name) {
//     return `Hello ${name}`;
// }


// // default export: imports auto
// export default function greet(name) {
//     return `Hello ${name}`;
// }

let arrowFun = function (x, y) {
    return x * y
}
let arrowFun2 = (x, y) => x * y;


class Person {
    name;
    age;
    gender;
    constructor(name, age, gender) {
        this.name = name;
        this.age = age;
        this.gender = gender;
    }
}
const Person2 = new Person("john", 12, 'female');

function sum(x, y = 5) {

    // take sum
    // the value of y is 5 if not passed
    console.log(x + y);
}
sum(5); // 10
sum(5, 15); // 20



let { name, age, gender } = Person2;

console.log(name); // Sara
console.log(age); // 25
console.log(gender); // female



// returns a promise
let countValue = new Promise(function (resolve, reject) {
    reject('Promise rejected');
});

// executes when promise is resolved successfully
countValue.then(
    function successValue(result) {
        console.log(result); // Promise resolved
    },
)

let arr1 = ['one', 'two'];
let arr2 = [...arr1, 'three', 'four', 'five'];

console.log("end !");