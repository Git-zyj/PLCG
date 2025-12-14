#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53647;
int var_1 = 774354720;
signed char var_3 = (signed char)-91;
_Bool var_11 = (_Bool)1;
long long int var_12 = 1880482158376790945LL;
unsigned int var_14 = 411571376U;
short var_15 = (short)24016;
int var_18 = 543063339;
int zero = 0;
unsigned long long int var_20 = 9845600357887066617ULL;
unsigned long long int var_21 = 5445789098615099883ULL;
short var_22 = (short)12623;
unsigned short var_23 = (unsigned short)15069;
long long int var_24 = -7588913669767485470LL;
int var_25 = -1789718202;
signed char var_26 = (signed char)0;
unsigned short var_27 = (unsigned short)5342;
unsigned char arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
int arr_2 [24] ;
signed char arr_3 [24] ;
_Bool arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -2101977166;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
