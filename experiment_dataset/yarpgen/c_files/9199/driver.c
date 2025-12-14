#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26077;
unsigned short var_3 = (unsigned short)53502;
unsigned char var_8 = (unsigned char)237;
unsigned short var_10 = (unsigned short)23483;
int zero = 0;
unsigned int var_11 = 2221848558U;
unsigned long long int var_12 = 13650728261192435838ULL;
unsigned char var_13 = (unsigned char)177;
int var_14 = 1605472739;
unsigned char var_15 = (unsigned char)17;
int var_16 = 1305070232;
unsigned long long int arr_0 [24] [24] ;
unsigned char arr_6 [24] ;
unsigned long long int arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 185164010950594926ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 4822497550694745900ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
