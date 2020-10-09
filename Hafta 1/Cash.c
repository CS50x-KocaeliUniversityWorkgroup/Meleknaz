#include <stdio.h>
#include <cs50.h>
#include <math.h>
//math.h is used for mathematical operations.
//math.h kutuphanesi matematik islemler icin kullanilir.

void get_change(int cents);
//function prototype.
//fonskiyon prototipi.

int main (void)
{
    float dollars;
    do{
        dollars = get_float("Change owed: ");
        //cs50.h get float function.
        //cs50.h'nin fonskiyonu.

    }while(dollars < 0);
    //check if dollars are smaller than 0.
    //dollarlarin 0'den daha kucuk mu diye bakilir.
    
    int cents = round(dollars*100);
    //transform everything into cents.
    //cent'lere her seyi donustur. 

    get_change(cents);
    //call the get_change function.
    //get_change fonksiyonunu cagir.
}
void get_change(int cents)
{
    //get quarters.
    //yirmi-bes centlik demir para sayisi bulunur.
    int quart = cents/25;
    int remainder = cents%25;

    //get dimes.
    //on centlik demir para sayisi bulunur.
    int dime = remainder/10;
    remainder = remainder%10;

    //get nickels.
    //bes cent'lik demir para sayisi bulunur.
    int nickel = remainder/5;
    remainder = remainder%5;

    //get pennies - can be omitted and just use the previous remainder.
    //bir cent'lik demir para sayisi bulunur. Kullanilmayabilir, daha once hesaplanan remainder (kalan) degeri kullanilabilir.
    int penny = remainder/1;
    remainder = remainder%1;
    
    int coins = quart + dime + nickel + penny;
    //calculate the number of coins used.
    //kullanilan demir para sayisi hesaplanir.
    
    printf("%i\n", coins);

}
