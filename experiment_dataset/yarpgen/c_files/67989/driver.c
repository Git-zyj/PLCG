#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8397;
long long int var_3 = -2400170594201405971LL;
long long int var_11 = 544524733505714382LL;
long long int var_12 = -3303069272172271028LL;
long long int var_15 = 1434048326774621890LL;
int zero = 0;
short var_16 = (short)-29237;
long long int var_17 = 6145737516393469255LL;
short var_18 = (short)21792;
short var_19 = (short)9879;
short var_20 = (short)-13619;
long long int var_21 = 5861401441184201267LL;
short arr_3 [11] [11] [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)31938;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
