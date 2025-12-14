#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2201467226U;
unsigned long long int var_8 = 1394748114262504115ULL;
unsigned short var_11 = (unsigned short)62733;
int zero = 0;
int var_14 = -1767268855;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)66;
unsigned long long int var_17 = 12265216099960603993ULL;
unsigned short var_18 = (unsigned short)44109;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-31;
unsigned long long int var_21 = 11235082694542918538ULL;
unsigned int var_22 = 2141588455U;
unsigned long long int var_23 = 4713861159790735311ULL;
short arr_8 [22] [22] ;
short arr_13 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (short)25507;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (short)7122;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
