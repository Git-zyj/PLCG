#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)53;
unsigned char var_8 = (unsigned char)58;
signed char var_9 = (signed char)-22;
unsigned short var_10 = (unsigned short)50741;
unsigned short var_11 = (unsigned short)6724;
unsigned int var_12 = 1229240459U;
signed char var_13 = (signed char)-114;
int zero = 0;
unsigned int var_15 = 771214896U;
unsigned short var_16 = (unsigned short)44216;
signed char var_17 = (signed char)7;
int var_18 = -624612087;
unsigned int var_19 = 2623711779U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2627938679U;
unsigned char var_22 = (unsigned char)232;
unsigned int arr_1 [15] [15] ;
unsigned char arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1315614176U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)45;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
