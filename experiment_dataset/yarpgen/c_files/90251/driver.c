#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3653467298U;
unsigned long long int var_5 = 13595619772088157676ULL;
unsigned int var_6 = 3630541382U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)2009;
unsigned int var_20 = 3241874518U;
long long int var_21 = 6093862664522277499LL;
long long int var_22 = 6413648783239094113LL;
long long int var_23 = -8901954419354997252LL;
unsigned short var_24 = (unsigned short)6070;
unsigned long long int arr_1 [22] [22] ;
unsigned long long int arr_5 [22] ;
short arr_10 [22] ;
short arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 5891470949909931458ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 16539641695318690770ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-14701;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)-8157 : (short)-19278;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
