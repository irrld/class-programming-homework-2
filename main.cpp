/**
 * @file main.cpp (https://github.com/irrld/class-programming-homework-2)
 * @author Metehan Gezer (irrelevantdev@outlook.com)
 * @brief Algoritmalar ve Programlama Dersi Ödev 2 (g++ 10.2.0 ile derlenerek denendi)
 * @version 0.1
 * @date 2021-12-16
 * 
 * @copyright Copyright (c) 2021
 */
#include <iostream>
#include <vector>
#include <random>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL)); // Rastgele sayının her seferinde aynı olmaması için random seedini şu anki zaman olarak ayarlıyoruz.
    int vectorSize;
    std::cin >> vectorSize;

    std::vector<int> vector = {}; // Boş bir vektör oluşturuyoruz.
    for (int i = 0; i < vectorSize; i++)
    {
        vector.push_back(rand() % 100); // Rastgele 0-99 arası bir sayı belirliyoruz ve onu vektöre ekliyoruz.
        std::cout << vector.back() << " "; // Vektörden son eklenen sayıyı alıyoruz ve yazdırıyoruz.
    }
    std::cout << std::endl;

    int deleteIndex;
    std::cin >> deleteIndex; // Kullanıcıdan silinecek sayı sırasını alıyoruz. (indis değil)
    vector.erase(vector.begin() + deleteIndex - 1); // Girilen sayı indis değil dolayısıyla 1 çıkartıyoruz ki indisi elde edelim.

    int start;
    int end;
    scanf("%d %d", &start, &end); // İki sayı okuyoruz, başlangıç (dahil) ve bitiş (dahil değil)
    getchar(); // Satır sonunda kalan \n işareti için
    vector.erase(vector.begin() + start - 1, vector.begin() + end - 1); // Verilen aralıktaki verileri vektörden siliyoruz

    for (auto i = vector.begin(); i < vector.end(); i++)
    {
        std::cout << *i << " "; // i adresindeki veriyi alıyoruz.
    }
    std::cout << std::endl;

    int wait; 
    std::cin >> wait; // Konsolun kapanmaması için.
}