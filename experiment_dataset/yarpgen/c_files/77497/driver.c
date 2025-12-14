#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13053469164719421538ULL;
long long int var_2 = -6692412255380736634LL;
unsigned long long int var_4 = 15120358401360653228ULL;
unsigned long long int var_6 = 11916175969058622810ULL;
long long int var_8 = 5015734967002249127LL;
long long int var_9 = -4204596773677806848LL;
long long int var_12 = 5598406817330972550LL;
long long int var_17 = 5752868144757381990LL;
long long int var_18 = -7007675185892062089LL;
int zero = 0;
unsigned long long int var_19 = 9675061743213866986ULL;
long long int var_20 = 7003147584505710593LL;
long long int var_21 = 8827863836242716190LL;
unsigned long long int var_22 = 10625414759946955334ULL;
long long int var_23 = 8944350303538278733LL;
long long int var_24 = 7335724684804724895LL;
long long int var_25 = 4507669468432809096LL;
long long int var_26 = 6634044053022938928LL;
unsigned long long int var_27 = 7045619323771889580ULL;
unsigned long long int var_28 = 8336587372897665347ULL;
unsigned long long int var_29 = 8887848095518368287ULL;
long long int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
long long int arr_3 [24] ;
long long int arr_4 [24] [24] [24] ;
long long int arr_5 [24] ;
unsigned long long int arr_6 [24] [24] [24] ;
long long int arr_9 [13] [13] ;
long long int arr_21 [23] [23] [23] ;
long long int arr_7 [24] [24] ;
unsigned long long int arr_8 [24] [24] [24] ;
long long int arr_11 [13] [13] ;
unsigned long long int arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2654188981089799830LL : -899811227977961723LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 17920997431658014013ULL : 18372602475073488981ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1123070623136502424LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -4099043038792399539LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -6234930894481719283LL : 2429693003869919925LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2046570270143124808ULL : 15800173802725296852ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 3247188727499775802LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 2487616929180314212LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 8451968746999393196LL : -1137977577524981279LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13366285768207992813ULL : 6197491346861197611ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 4181239849821193823LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 2001960180321671132ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
