let userChoice = document.getElementById('OC').innerHTML;
let amt = document.getElementById('amount').innerHTML;
let output = '';

function Check(userChoice, amt){
    this.userChoice = userChoice;
    this.amt = amt;
    this.output = output;
if(this.userChoice === 'AUD'){
    document.write(amt + " AUD = " + (Math.round(amt*0.67*100.0) / 100.0) + " USD");
    document.write(amt + " AUD = " + (Math.round(amt*0.09*100.0) / 100.0) + " CAD");
    document.write(amt + " AUD = " + (Math.round(amt*91.22*100.0) / 100.0) + " YEN");
    document.write(amt + " AUD = " + (Math.round(amt*55.49*100.0) / 100.0) + " INR");
    document.write(amt + " AUD = " + (Math.round(amt*100.0*0.63) / 100.0) + " EURO");
}

if(this.userChoice === 'USD'){
    document.write(amt + " USD = " + (Math.round(amt*100.0*1.49) / 100.0) + " AUD");
    
    document.write(amt + " USD = " + (Math.round(amt*100.0*1.4) / 100.0) + " CAD");

    document.write(amt + " USD = " + (Math.round(amt*100.0*135.77) / 100.0) + " YEN");

    document.write(amt + " USD = " + (Math.round(amt*100.0*82.62) / 100.0) + " INR");

    document.write(amt + " USD = " + (Math.round(amt*100.0*0.95) / 100.0) + " EURO");
}

    if(this.userChoice === 'YEN'){
        document.write(amt + " YEN = " + (Math.round(amt*100.0*0.01) / 100.0) + " AUD");

        document.write(amt + " YEN = " + (Math.round(amt*100.0*0.007) / 100.0) + " USD");

        document.write(amt + " YEN = " + (Math.round(amt*100.0*0.01) / 100.0) + " CAD");

        document.write(amt + " YEN = " + (Math.round(amt*100.0*0.61) / 100.0) + " INR");

        document.write(amt + " YEN = " + (Math.round(amt*100.0*0.0069) / 100.0) + " EURO");
}

    if(this.userChoice === 'CAD'){
        document.write(amt + " CAD = " + (Math.round(amt*100.0*1.09) / 100.0) + " AUD");

        document.write(amt + " CAD = " + (Math.round(amt*100.0*0.73) / 100.0) + " USD");

        document.write(amt + " CAD = " + (Math.round(amt*100.0*99.5) / 100.0) + " YEN");

        document.write(amt + " CAD = " + (Math.round(amt*100.0*60.52) / 100.0) + " INR");

        document.write(amt + " CAD = " + (Math.round(amt*100.0*0.7) / 100.0) + " EURO");
}

    if(this.userChoice === 'EUR'){
        document.write(amt + " EURO = " + (Math.round(amt*100.0*1.58) / 100.0) + " AUD");

        document.write(amt + " EURO = " + (Math.round(amt*100.0*1.05) / 100.0) + " USD");

        document.write(amt + " EURO = " + (Math.round(amt*100.0*1.45) / 100.0) + " CAD");

        document.write(amt + " EURO = " + (Math.round(amt*100.0*144.45) / 100.0) + " YEN");

        document.write(amt + " EURO = " + (Math.round(amt*100.0*87.80) / 100.0) + " INR");
}

    if(this.userChoice === 'INR'){
        document.write(amt + " INR = " + (Math.round(amt*100.0*0.018) / 100.0) + " AUD");

        document.write(amt + " INR = " + (Math.round(amt*100.0*0.012) / 100.0) + " USD");

        document.write(amt + " INR = " + (Math.round(amt*100.0*0.017) / 100.0) + " CAD");

        document.write(amt + " INR = " + (Math.round(amt*100.0*1.65) / 100.0) + " YEN");

        document.write(amt + " INR = " + (Math.round(amt*100.0*0.01) / 100.0) + " EURO");
    }
}