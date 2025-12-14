#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2032924209;
unsigned int var_1 = 4099073335U;
short var_6 = (short)29646;
int zero = 0;
int var_15 = -129540891;
int var_16 = -93757169;
short var_17 = (short)17430;
int var_18 = 462740119;
signed char var_19 = (signed char)89;
unsigned short var_20 = (unsigned short)31246;
long long int arr_0 [15] ;
long long int arr_1 [15] ;
_Bool arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4301018133119969947LL : 468750972027664453LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -7488820822889540397LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
