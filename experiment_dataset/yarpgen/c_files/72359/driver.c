#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6511;
long long int var_1 = -5004534519339309860LL;
int var_5 = -1581958910;
unsigned short var_11 = (unsigned short)55296;
unsigned int var_12 = 2314609483U;
int zero = 0;
short var_14 = (short)-32386;
int var_15 = 1299989421;
long long int var_16 = 1406225892215517310LL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned short arr_1 [19] [19] ;
short arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)20958;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-18272;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
