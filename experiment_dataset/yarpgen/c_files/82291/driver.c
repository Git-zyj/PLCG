#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
unsigned short var_2 = (unsigned short)35217;
short var_8 = (short)9314;
signed char var_9 = (signed char)45;
int zero = 0;
unsigned long long int var_12 = 8717572423984998161ULL;
unsigned char var_13 = (unsigned char)138;
long long int var_14 = -4153299725368304026LL;
short var_15 = (short)-19190;
signed char var_16 = (signed char)-92;
signed char var_17 = (signed char)86;
long long int var_18 = -4787921688354499308LL;
unsigned short var_19 = (unsigned short)6105;
long long int var_20 = -4546235509020088789LL;
unsigned short arr_0 [16] ;
long long int arr_1 [16] [16] ;
unsigned int arr_2 [16] ;
long long int arr_6 [23] [23] ;
short arr_7 [23] ;
signed char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)31350;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 7551088190839694431LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2624093192U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = -359140908939269086LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)-11016;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-40;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
