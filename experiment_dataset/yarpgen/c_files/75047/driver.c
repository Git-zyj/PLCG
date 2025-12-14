#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8673726369604884499LL;
short var_2 = (short)-11153;
signed char var_3 = (signed char)43;
int var_4 = -449822968;
unsigned char var_5 = (unsigned char)89;
int zero = 0;
short var_10 = (short)6692;
_Bool var_11 = (_Bool)0;
int var_12 = 645750388;
short var_13 = (short)8608;
short var_14 = (short)8039;
unsigned short arr_0 [14] [14] ;
_Bool arr_2 [24] ;
unsigned long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)14606;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 10129027576601878364ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
