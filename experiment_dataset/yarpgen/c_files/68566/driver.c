#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3334997839504605090ULL;
unsigned long long int var_1 = 9020630552068012232ULL;
unsigned char var_2 = (unsigned char)134;
unsigned long long int var_4 = 4789042684239232769ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 4590889203853367091ULL;
unsigned long long int var_8 = 11113423043825503496ULL;
short var_9 = (short)-2800;
long long int var_10 = 5968696447923310921LL;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)43;
int zero = 0;
unsigned int var_15 = 2042841934U;
short var_16 = (short)30319;
unsigned long long int var_17 = 16146302600910584370ULL;
long long int arr_3 [12] [12] ;
unsigned int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -7482109476768396580LL : -3355624010863490105LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 98019062U : 1037995936U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
