#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)46;
unsigned int var_2 = 1958616052U;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)48;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-96;
short var_7 = (short)-17509;
unsigned int var_8 = 680915168U;
long long int var_9 = 5446120694700203586LL;
unsigned short var_10 = (unsigned short)1126;
long long int var_11 = 8266319734635729874LL;
int var_12 = 1493840636;
unsigned long long int var_13 = 11595939030148999886ULL;
unsigned short var_14 = (unsigned short)53451;
short var_15 = (short)-31312;
unsigned short var_16 = (unsigned short)39843;
unsigned int var_17 = 1304152092U;
unsigned int var_18 = 3669739379U;
int zero = 0;
signed char var_19 = (signed char)-42;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)23295;
signed char var_22 = (signed char)-23;
long long int var_23 = -3858851248573188271LL;
unsigned int var_24 = 271471634U;
long long int var_25 = -2654099255514635025LL;
unsigned char var_26 = (unsigned char)162;
unsigned int var_27 = 2655494364U;
int var_28 = 125226215;
unsigned char var_29 = (unsigned char)240;
signed char var_30 = (signed char)-30;
unsigned int arr_0 [25] ;
short arr_1 [25] ;
signed char arr_2 [25] ;
signed char arr_4 [25] [25] [25] ;
unsigned int arr_5 [25] ;
long long int arr_6 [25] [25] ;
unsigned int arr_7 [25] [25] ;
unsigned int arr_8 [25] [25] [25] ;
unsigned int arr_12 [25] [25] ;
unsigned short arr_13 [25] [25] ;
unsigned long long int arr_16 [25] [25] ;
unsigned long long int arr_3 [25] ;
long long int arr_10 [25] ;
int arr_11 [25] [25] [25] ;
int arr_14 [25] [25] ;
unsigned short arr_17 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 365492073U : 1454812833U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-18719;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 102663799U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -7451914317834931382LL : 3716757449493102180LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 3502720560U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2566785929U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 1803125555U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)42424 : (unsigned short)10295;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = 13093993901026590695ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 16795809060088160543ULL : 14806573866661592097ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -4825269074915924557LL : 7638220621142602891LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 337521513 : -1508427786;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? -1950042957 : -346833677;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)4645 : (unsigned short)52838;
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
