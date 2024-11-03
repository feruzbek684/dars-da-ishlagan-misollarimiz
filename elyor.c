#include <stdio.h> //*kutub xona chaqirish
int main () { //* asosiy run barish funksiyasi 
    int son; printf("Son:  "); //* ozgaruvchini ekranga chop etish
    scanf("%d",&son); //* ozgaruvchiga qiymat foydalanuvchi tomonidan kiritish 
    if (son== 1) { //* if bu shart berish uchun ishlatilinadi son == 1 ga dayan shart barilgan 
    //* switchdan farqi ifda katta kichik true false shartlarni bajarsa boladi 
    //* switchda asa ozina bitta qiymat oladi va tengmi dayan shartni tekshiradi 
            printf("Bir"); //* agarda if dagi shart togri bolsa chiqaruvchi funksiyadagi sozni chiqarib beradi
        }else{ //* agarda if dagi shart notogri bolsa  elseni tekshiradi
                printf("Bizda bunaqa son yoq\n"); //* elseni tekshirib elseni ichidagi chiqaruvchi funksiyada
    //* nima yozilgan bolsa oshani chiqarib beradi
        } 
        switch (son){ //* switch oziga bitta qiymat oladi va tengmi degan shartni bajaradi son = casedagi shartga degan shart barilgan
        case 1:  //*son degan ozgaruvchini qiymatini case oladi va ozidagi shartlara tekshirib chiqadi
            printf("bir"); break; //* agarda case dagi shart bilan son togri galsa chiqaruvchi
            //* funksiyada ekranga chop etadi breakni qoysak dasturni shu yerni ozida toxtatib baradi
        case 2: //*son degan ozgaruvchini qiymatini case oladi va ozidagi shartlara tekshirib chiqadi
            printf("ikki"); break; //* agarda case dagi shart bilan son togri galsa chiqaruvchi
            //* funksiyada ekranga chop etadi breakni qoysak dasturni shu yerni ozida toxtatib baradi
        case 3:  //*son degan ozgaruvchini qiymatini case oladi va ozidagi shartlara tekshirib chiqadi
            printf("uch"); break; //* agarda case dagi shart bilan son togri galsa chiqaruvchi
            //* funksiyada ekranga chop etadi breakni qoysak dasturni shu yerni ozida toxtatib baradi
        case 4: //*son degan ozgaruvchini qiymatini case oladi va ozidagi shartlara tekshirib chiqadi
            printf("To'rt"); break; //* agarda case dagi shart bilan son togri galsa chiqaruvchi
            //* funksiyada ekranga chop etadi breakni qoysak dasturni shu yerni ozida toxtatib baradi
        case 5:  //*son degan ozgaruvchini qiymatini case oladi va ozidagi shartlara tekshirib chiqadi
            printf("Besh"); break; //* agarda case dagi shart bilan son togri galsa chiqaruvchi
            //* funksiyada ekranga chop etadi breakni qoysak dasturni shu yerni ozida toxtatib baradi
        case 6: //*son degan ozgaruvchini qiymatini case oladi va ozidagi shartlara tekshirib chiqadi
            printf("Olti"); break; //* agarda case dagi shart bilan son togri galsa chiqaruvchi
            //* funksiyada ekranga chop etadi breakni qoysak dasturni shu yerni ozida toxtatib baradi
        case 7:  //*son degan ozgaruvchini qiymatini case oladi va ozidagi shartlara tekshirib chiqadi
            printf("Yetti"); break; //* agarda case dagi shart bilan son togri galsa chiqaruvchi
            //* funksiyada ekranga chop etadi breakni qoysak dasturni shu yerni ozida toxtatib baradi
        case 8: //*son degan ozgaruvchini qiymatini case oladi va ozidagi shartlara tekshirib chiqadi
            printf("Sakkiz"); break; //* agarda case dagi shart bilan son togri galsa chiqaruvchi
            //* funksiyada ekranga chop etadi breakni qoysak dasturni shu yerni ozida toxtatib baradi
        case 9:  //*son degan ozgaruvchini qiymatini case oladi va ozidagi shartlara tekshirib chiqadi
            printf("To'qqiz"); break; //* agarda case dagi shart bilan son togri galsa chiqaruvchi
            //* funksiyada ekranga chop etadi breakni qoysak dasturni shu yerni ozida toxtatib baradi
        case 10: //*son degan ozgaruvchini qiymatini case oladi va ozidagi shartlara tekshirib chiqadi
            printf("O'n"); break; //* agarda case dagi shart bilan son togri galsa chiqaruvchi
            //* funksiyada ekranga chop etadi breakni qoysak dasturni shu yerni ozida toxtatib baradi
}
    return 0;
}