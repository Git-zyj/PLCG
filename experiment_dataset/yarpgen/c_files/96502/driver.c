#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3331;
short var_3 = (short)-8744;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17417290504724139907ULL;
unsigned long long int var_8 = 4246847197944461790ULL;
long long int var_9 = 3467181013902167666LL;
unsigned short var_10 = (unsigned short)50755;
unsigned char var_12 = (unsigned char)212;
unsigned char var_13 = (unsigned char)21;
int zero = 0;
long long int var_19 = -4228258448362986939LL;
unsigned short var_20 = (unsigned short)43325;
unsigned short var_21 = (unsigned short)1672;
int var_22 = -770163544;
unsigned int var_23 = 2995774815U;
unsigned int var_24 = 2613779893U;
short var_25 = (short)32540;
unsigned char arr_0 [19] [19] ;
signed char arr_1 [19] ;
unsigned short arr_2 [19] ;
long long int arr_5 [19] [19] ;
unsigned char arr_6 [19] ;
unsigned long long int arr_9 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)12369;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 5464839690134363138LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 16263767493365786464ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
