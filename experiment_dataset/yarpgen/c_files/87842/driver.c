#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1975011491687095140LL;
unsigned int var_5 = 3780428660U;
signed char var_7 = (signed char)57;
unsigned int var_8 = 1494877595U;
unsigned int var_10 = 218397676U;
unsigned long long int var_11 = 14929998485993869614ULL;
int zero = 0;
signed char var_16 = (signed char)117;
signed char var_17 = (signed char)88;
unsigned short var_18 = (unsigned short)63469;
long long int var_19 = -9044210064414499408LL;
int var_20 = 1224143756;
unsigned int var_21 = 3136355596U;
unsigned char arr_0 [18] ;
short arr_3 [18] [18] ;
unsigned int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)29673;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1540095376U : 3650796556U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
