#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 481151156;
unsigned long long int var_1 = 7516461539242511059ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)8151;
long long int var_7 = 545774291763364562LL;
int var_9 = 102469936;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 5889176525674247691ULL;
signed char var_12 = (signed char)43;
short var_13 = (short)-19338;
unsigned long long int var_14 = 11927756279938412486ULL;
int zero = 0;
unsigned int var_15 = 2456011889U;
_Bool var_16 = (_Bool)0;
int arr_6 [16] [16] ;
_Bool arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -1415702585;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
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
