#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8791410747215970781LL;
long long int var_2 = 6422369548963772153LL;
unsigned short var_3 = (unsigned short)28987;
unsigned int var_4 = 4098315204U;
long long int var_10 = 2670748678490538252LL;
signed char var_12 = (signed char)-36;
int zero = 0;
unsigned long long int var_14 = 13277942673871758782ULL;
unsigned long long int var_15 = 10166298002125000349ULL;
unsigned short var_16 = (unsigned short)25889;
unsigned short var_17 = (unsigned short)37192;
long long int arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -864584381151732900LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
