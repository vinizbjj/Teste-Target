import myJson from './dados.json' assert {type: 'json'};


const sum = myJson.map(item => item.valor).reduce((prev, curr) => prev + curr, 0);



var min = 999999999.9;
var max = 0.0;
var med = 0.0;
var tamanho = 0.0;

for (const totalft of myJson) {
    if (totalft.valor > max) {
        max = totalft.valor
    }
    if (totalft.valor < min && totalft.valor > 0) {
        min = totalft.valor
    };


    console.log("dia", totalft.dia, "valor", totalft.valor)
};


for (const totalft of myJson) {
    if (totalft.valor > 0) tamanho++

};
med = sum / tamanho;


console.log("Faturamento total foi de ", sum);
console.log("Menor faturamento foi de:", min, "Maior faturamento foi de:", max);
console.log("Media de faturamento é:", med);

