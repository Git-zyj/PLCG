#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)46338;
int var_2 = 30899839;
unsigned long long int var_3 = 6647225430566250326ULL;
unsigned char var_4 = (unsigned char)178;
long long int var_5 = -4955906882152854365LL;
unsigned int var_9 = 3515652468U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)168;
long long int var_14 = -16291469500393943LL;
int var_15 = 1592103835;
int zero = 0;
signed char var_16 = (signed char)(-127 - 1);
unsigned short var_17 = (unsigned short)61833;
int var_18 = 420156349;
int var_19 = 745221827;
unsigned char var_20 = (unsigned char)133;
unsigned char var_21 = (unsigned char)17;
_Bool arr_0 [11] ;
int arr_6 [25] [25] ;
unsigned short arr_4 [11] ;
unsigned char arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 1269449663;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)50189;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)241;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
