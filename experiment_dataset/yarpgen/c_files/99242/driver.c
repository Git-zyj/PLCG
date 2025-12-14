#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned char var_1 = (unsigned char)127;
_Bool var_4 = (_Bool)0;
long long int var_5 = -6934287714573155385LL;
unsigned int var_6 = 399921742U;
short var_7 = (short)31670;
unsigned int var_8 = 1558653757U;
int var_10 = -2507883;
unsigned char var_13 = (unsigned char)122;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)13;
signed char var_16 = (signed char)-79;
unsigned int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 414062591U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
