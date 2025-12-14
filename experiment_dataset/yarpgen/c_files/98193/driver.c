#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_5 = -231071102;
int var_6 = 161591386;
int var_7 = 1650285656;
int var_8 = 1547816827;
int var_9 = 502500253;
int var_10 = 14218281;
int zero = 0;
int var_11 = -1213000235;
_Bool var_12 = (_Bool)1;
int var_13 = 578007671;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
