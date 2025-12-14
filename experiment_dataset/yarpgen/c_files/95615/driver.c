#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)72;
int var_4 = 397799375;
unsigned short var_7 = (unsigned short)15423;
signed char var_13 = (signed char)-113;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = 7776394186682534619LL;
int var_17 = 417765716;
short var_18 = (short)31534;
long long int var_19 = -806575064638700657LL;
long long int var_20 = -9143837478988249654LL;
unsigned char var_21 = (unsigned char)84;
int var_22 = 213252118;
long long int arr_0 [19] [19] ;
short arr_1 [19] ;
unsigned short arr_5 [22] ;
short arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -5277173668978116963LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)6048;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)52947;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)-22136;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
