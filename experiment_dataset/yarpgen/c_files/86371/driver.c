#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned long long int var_3 = 12118087669143291322ULL;
long long int var_4 = -5230661084001585896LL;
short var_5 = (short)-16371;
unsigned short var_6 = (unsigned short)58259;
unsigned char var_7 = (unsigned char)102;
int zero = 0;
unsigned char var_10 = (unsigned char)196;
long long int var_11 = -2268186886646154297LL;
unsigned char var_12 = (unsigned char)67;
unsigned char var_13 = (unsigned char)253;
_Bool var_14 = (_Bool)0;
int var_15 = -1505583039;
unsigned char var_16 = (unsigned char)194;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6256047505993394897ULL;
unsigned long long int arr_0 [25] ;
short arr_1 [25] ;
unsigned short arr_5 [25] ;
unsigned char arr_7 [25] [25] ;
unsigned short arr_13 [24] [24] ;
unsigned short arr_12 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 8415400325045418665ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)15978;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)41034;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)4524;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)1374;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
