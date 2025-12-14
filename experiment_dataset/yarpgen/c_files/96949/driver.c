#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)59733;
unsigned int var_7 = 823260026U;
long long int var_8 = -2984370711191340742LL;
short var_10 = (short)-32214;
short var_11 = (short)-28003;
short var_13 = (short)-23281;
long long int var_16 = -3366038560936973469LL;
int var_17 = 1751467198;
int zero = 0;
unsigned int var_19 = 2569299660U;
int var_20 = 1753384176;
int var_21 = 2028209507;
int var_22 = 775190802;
unsigned int var_23 = 524821338U;
_Bool arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
