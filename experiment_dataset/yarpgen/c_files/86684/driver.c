#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
signed char var_2 = (signed char)-120;
signed char var_5 = (signed char)-46;
unsigned int var_7 = 392330370U;
signed char var_8 = (signed char)-51;
unsigned int var_10 = 4088543824U;
signed char var_11 = (signed char)-16;
unsigned int var_12 = 675107374U;
int zero = 0;
unsigned int var_15 = 2408512594U;
unsigned int var_16 = 2967693063U;
signed char var_17 = (signed char)-63;
unsigned int var_18 = 3887241145U;
unsigned int var_19 = 2683446944U;
unsigned int var_20 = 3584662665U;
unsigned int var_21 = 3548151777U;
unsigned int var_22 = 2867429977U;
signed char var_23 = (signed char)33;
signed char var_24 = (signed char)-94;
unsigned int var_25 = 1065352141U;
unsigned int arr_0 [19] [19] ;
signed char arr_1 [19] ;
unsigned int arr_2 [19] ;
unsigned int arr_5 [20] [20] ;
unsigned int arr_3 [19] [19] ;
signed char arr_4 [19] ;
signed char arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 4285153714U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 660681651U : 2069671995U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 2756161273U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1672514629U : 2174153269U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)73 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (signed char)75;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
