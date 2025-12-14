#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 251285222U;
unsigned long long int var_1 = 3938665579994735143ULL;
unsigned long long int var_2 = 12549850568027884382ULL;
unsigned char var_3 = (unsigned char)86;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)12892;
_Bool var_7 = (_Bool)1;
int var_13 = -2083359589;
unsigned char var_15 = (unsigned char)196;
long long int var_17 = -604547866441134837LL;
long long int var_18 = 3070169308015622517LL;
int zero = 0;
unsigned short var_20 = (unsigned short)17231;
long long int var_21 = -5776169444669527221LL;
short var_22 = (short)14450;
unsigned char arr_4 [22] [22] ;
unsigned long long int arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 1838357906039742156ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
