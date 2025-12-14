#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7118416889549376896ULL;
unsigned long long int var_1 = 17139521093311329418ULL;
unsigned long long int var_2 = 6835856638701882330ULL;
unsigned short var_3 = (unsigned short)41497;
short var_6 = (short)-19546;
unsigned char var_8 = (unsigned char)231;
unsigned long long int var_10 = 9570680716783655378ULL;
unsigned long long int var_11 = 7185191109326041855ULL;
unsigned char var_12 = (unsigned char)198;
unsigned long long int var_13 = 11356226263124691554ULL;
short var_14 = (short)-7340;
short var_17 = (short)3539;
unsigned long long int var_19 = 680923299141539281ULL;
int zero = 0;
short var_20 = (short)6211;
unsigned char var_21 = (unsigned char)168;
unsigned long long int var_22 = 14497483317610489481ULL;
unsigned char var_23 = (unsigned char)170;
unsigned short var_24 = (unsigned short)49566;
unsigned char var_25 = (unsigned char)220;
unsigned short var_26 = (unsigned short)61925;
short var_27 = (short)-4915;
unsigned short var_28 = (unsigned short)9915;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
short arr_3 [16] [16] ;
unsigned long long int arr_5 [16] ;
unsigned long long int arr_2 [14] ;
unsigned short arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 8790492223947914976ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 2580712001380800731ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (short)26854;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 4870041805158687922ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 13660305547351335261ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)5688;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
