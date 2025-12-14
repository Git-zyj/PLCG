#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)23804;
short var_2 = (short)-23701;
unsigned int var_3 = 3449820839U;
unsigned long long int var_4 = 14057392669544033741ULL;
short var_5 = (short)29875;
int var_6 = -959967689;
unsigned int var_7 = 658455250U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-4223;
int zero = 0;
short var_10 = (short)15044;
short var_11 = (short)-14322;
unsigned short var_12 = (unsigned short)55665;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
short var_16 = (short)17394;
long long int var_17 = -3305837511231918616LL;
unsigned short arr_2 [17] ;
_Bool arr_3 [17] ;
signed char arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)25197;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)87;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
