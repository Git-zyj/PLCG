#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_5 = -6625850033848009224LL;
int var_6 = 480172871;
_Bool var_7 = (_Bool)0;
short var_8 = (short)3544;
short var_12 = (short)19663;
int zero = 0;
long long int var_13 = 9168039661553119324LL;
short var_14 = (short)-9956;
signed char var_15 = (signed char)30;
unsigned short var_16 = (unsigned short)33091;
long long int var_17 = 2543559226477103567LL;
unsigned short var_18 = (unsigned short)4340;
unsigned char var_19 = (unsigned char)7;
unsigned int var_20 = 1758856356U;
unsigned long long int arr_1 [12] [12] ;
short arr_4 [19] ;
unsigned long long int arr_5 [19] ;
long long int arr_6 [19] ;
unsigned short arr_2 [12] ;
signed char arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 10196636302286528694ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)19673 : (short)10673;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 14858440708788845892ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -4225083474438446661LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)13821;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (signed char)14;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
