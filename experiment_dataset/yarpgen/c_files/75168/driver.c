#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2782012017U;
short var_2 = (short)4427;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)220;
short var_6 = (short)-21078;
long long int var_9 = 1020066714293596142LL;
int var_10 = -1315942084;
long long int var_12 = -7110081977011499440LL;
int zero = 0;
long long int var_14 = 6654615319081481210LL;
long long int var_15 = 2960048689615711249LL;
signed char var_16 = (signed char)6;
unsigned int arr_2 [16] ;
unsigned int arr_3 [16] ;
unsigned int arr_8 [20] ;
long long int arr_4 [16] ;
unsigned long long int arr_5 [16] ;
short arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2469241463U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1408469154U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1921893119U : 2558252523U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -6013053916996473256LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 5090439676413100080ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)18788 : (short)-21375;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
