#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12848100938175718671ULL;
unsigned long long int var_2 = 12687387608027969855ULL;
signed char var_3 = (signed char)-88;
unsigned int var_8 = 2815986539U;
long long int var_10 = -5163265568356580136LL;
unsigned long long int var_12 = 4038982260428811130ULL;
unsigned char var_13 = (unsigned char)120;
short var_14 = (short)23037;
int zero = 0;
signed char var_16 = (signed char)-47;
signed char var_17 = (signed char)95;
signed char var_18 = (signed char)30;
unsigned long long int var_19 = 4359068212290687223ULL;
_Bool var_20 = (_Bool)1;
_Bool arr_4 [19] ;
signed char arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-103 : (signed char)45;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
