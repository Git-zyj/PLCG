#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4283;
unsigned int var_1 = 1834893119U;
unsigned int var_3 = 93227662U;
unsigned char var_6 = (unsigned char)80;
unsigned int var_10 = 3275536547U;
int var_12 = 1547269683;
int zero = 0;
unsigned int var_17 = 1827309796U;
unsigned long long int var_18 = 2764223652242808458ULL;
long long int var_19 = 1778833902726156271LL;
long long int arr_1 [16] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -5020727553954306750LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
