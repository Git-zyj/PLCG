#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
int var_2 = -665351769;
signed char var_5 = (signed char)94;
signed char var_6 = (signed char)-42;
int zero = 0;
unsigned short var_12 = (unsigned short)28948;
int var_13 = 1358241769;
long long int var_14 = 6024114407402716883LL;
short var_15 = (short)2693;
long long int var_16 = 3701500399368990831LL;
unsigned int var_17 = 3682703274U;
signed char var_18 = (signed char)-104;
short var_19 = (short)-14029;
unsigned short var_20 = (unsigned short)37536;
long long int arr_6 [18] [18] ;
short arr_7 [18] [18] [18] ;
long long int arr_9 [18] [18] [18] ;
unsigned long long int arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -2386391842054445153LL : -7124307685087321837LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)22001 : (short)-21096;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -5136354670249593779LL : -8455003396532415117LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 3696261851218709956ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
