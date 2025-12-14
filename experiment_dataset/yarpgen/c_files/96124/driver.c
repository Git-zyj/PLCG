#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
unsigned int var_3 = 3714717503U;
long long int var_5 = 5648575532542139260LL;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int var_12 = 775921676;
signed char var_13 = (signed char)-120;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7692256530544564425LL;
signed char arr_2 [17] ;
short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)-74;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)32564 : (short)18926;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
