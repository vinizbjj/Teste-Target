import myJson from './dados.json' assert {type: 'json'};


const sum = myJson.map(item => item.valor).reduce((prev, curr) => prev + curr, 0);



var min = 999999999.9;
var max = 0.0;
var med = 0.0;
var tamanho = 0.0;
var ftdm = 0;

for (const totalft of myJson) {
    if (totalft.valor > max) {
        max = totalft.valor
    }
    if (totalft.valor < min && totalft.valor > 0) {
        min = totalft.valor
    }
    if (totalft.valor > 0) tamanho++

    console.log("dia", totalft.dia, "valor", totalft.valor)
};
med = sum / tamanho;

for (const totalft of myJson) {
    if(totalft.valor > med)
        ftdm ++
    
}


console.log("Dias que o faturamento diario foram maio que a media: ",ftdm);
console.log("Faturamento total foi de ", sum);
console.log("Menor faturamento foi de:", min, "Maior faturamento foi de:", max);
console.log("Media de faturamento é:", med);

