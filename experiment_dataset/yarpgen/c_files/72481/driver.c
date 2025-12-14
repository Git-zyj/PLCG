#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25725;
unsigned short var_1 = (unsigned short)53535;
short var_4 = (short)8143;
unsigned short var_5 = (unsigned short)42754;
signed char var_7 = (signed char)19;
long long int var_10 = 8687445902197674995LL;
int zero = 0;
long long int var_12 = -5385124318624418987LL;
unsigned long long int var_13 = 1133338719737039418ULL;
int var_14 = -945271674;
unsigned long long int var_15 = 6745882478134627458ULL;
unsigned short arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5929 : (unsigned short)45392;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
