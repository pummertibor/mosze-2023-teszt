#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //  rossz konstansnév
    std::cout << "1-100 ertekek duplazasa" << std::endl; // rossz idézőjelek, hiányzó lezárás (endl) és pontosvessző
    for (int i = 1; i <= N_ELEMENTS; i++) //hiányzó teljes for ciklus, 1-től N_ELEMENTS-ig (100-ig)
    {
        b[i] = i * 2;
    }
    for (int i = 1; i <= N_ELEMENTS; i++) //hiányzó feltétel
    {
        std::cout << "Ertek:" << b[i] << std::endl; //hiányzó lezárás és pontosvessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; //hiányzó inicializálás
    for (int i = 1; i <= N_ELEMENTS; i++) //pontosvessző helyett vessző  
    {
        atlag += b[i]; //hiányzó pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    //lefoglalt memória felszabadítása
    delete[] b;
    return 0;
}
