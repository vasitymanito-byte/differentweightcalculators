const readlineSync = require('readline-sync');

for (let i = 0; i < 5; i++) {

    let weight = parseFloat(readlineSync.question("Please enter your weight: "));

    let weightChoice = readlineSync.question("Is your weight in (L)bs or (K)gs: ");

    if (weightChoice.toUpperCase() === "L") {
        weight = weight * 0.45359237;
        console.log("Your weight is: " + weight + " kg");
    }
    else if (weightChoice.toUpperCase() === "K") {
        weight = weight * 2.20462262;
        console.log("Your weight is: " + weight + " lbs");
    }
    else {
        console.log("Your choice was not accepted");
    }
}
