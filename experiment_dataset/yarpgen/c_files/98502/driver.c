#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16392553717169091713ULL;
signed char var_2 = (signed char)-70;
short var_4 = (short)16729;
unsigned short var_6 = (unsigned short)48553;
unsigned int var_7 = 1369016603U;
unsigned char var_9 = (unsigned char)229;
signed char var_15 = (signed char)55;
unsigned short var_16 = (unsigned short)17341;
unsigned int var_18 = 947751412U;
int zero = 0;
unsigned long long int var_20 = 7674835167630110562ULL;
int var_21 = -98790839;
int var_22 = -1285955820;
unsigned char var_23 = (unsigned char)95;
unsigned short var_24 = (unsigned short)33680;
unsigned short var_25 = (unsigned short)2956;
signed char var_26 = (signed char)64;
int var_27 = -563075053;
unsigned int var_28 = 958735826U;
int var_29 = 228165269;
unsigned char arr_1 [14] [14] ;
long long int arr_4 [14] [14] ;
unsigned long long int arr_5 [14] ;
long long int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 2342124167415543079LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 6593681861127060564ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 5764578178763452846LL;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
