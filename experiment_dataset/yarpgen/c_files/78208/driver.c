#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19639;
unsigned long long int var_2 = 11292214577312438962ULL;
unsigned char var_3 = (unsigned char)61;
unsigned short var_4 = (unsigned short)2558;
short var_5 = (short)-3549;
unsigned long long int var_6 = 9303887067459813969ULL;
long long int var_7 = 8828830736635863802LL;
unsigned char var_9 = (unsigned char)133;
unsigned short var_10 = (unsigned short)30481;
long long int var_11 = 5661365078989076239LL;
int zero = 0;
unsigned long long int var_12 = 3266057575089651665ULL;
long long int var_13 = -4794144905323732365LL;
signed char var_14 = (signed char)93;
unsigned int var_15 = 2744332874U;
int var_16 = -1587068235;
short arr_0 [23] [23] ;
signed char arr_4 [23] [23] ;
short arr_6 [23] ;
unsigned long long int arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)31956;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)20018;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 4028621405941388563ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
