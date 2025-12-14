#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16691741265075122263ULL;
unsigned long long int var_3 = 11033010544536163614ULL;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_7 = -611524610;
signed char var_9 = (signed char)-63;
long long int var_10 = -7519780882045094324LL;
unsigned char var_11 = (unsigned char)84;
unsigned char var_12 = (unsigned char)176;
int zero = 0;
long long int var_13 = -2986156652977623179LL;
short var_14 = (short)-27753;
long long int var_15 = 2276112317680230818LL;
long long int var_16 = -4685057485997943758LL;
signed char var_17 = (signed char)96;
unsigned long long int var_18 = 38337492086500272ULL;
signed char var_19 = (signed char)-40;
short arr_1 [11] ;
unsigned char arr_2 [11] ;
int arr_6 [11] [11] ;
int arr_3 [11] ;
short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-27421;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 30430526;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -1835247693;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)-1370;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
