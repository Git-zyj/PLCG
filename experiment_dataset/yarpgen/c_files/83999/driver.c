#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16588;
long long int var_1 = -498464855270912185LL;
unsigned long long int var_8 = 5181346951769118757ULL;
unsigned int var_9 = 2585998844U;
unsigned int var_12 = 3931516637U;
_Bool var_14 = (_Bool)0;
long long int var_16 = -2445220845529416330LL;
unsigned short var_17 = (unsigned short)51135;
int zero = 0;
unsigned long long int var_18 = 18200440473667947852ULL;
unsigned long long int var_19 = 6955470584913003596ULL;
unsigned int var_20 = 3670741334U;
unsigned int var_21 = 2059319236U;
unsigned int arr_1 [18] ;
unsigned long long int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1341043574U : 3025194741U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2180080600834142822ULL : 12707745150447466997ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
