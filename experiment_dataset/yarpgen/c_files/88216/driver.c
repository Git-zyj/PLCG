#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31179;
short var_1 = (short)3712;
unsigned long long int var_5 = 4767654645071189497ULL;
short var_10 = (short)16233;
int var_11 = -2036717619;
int zero = 0;
signed char var_12 = (signed char)-91;
long long int var_13 = -1213695857048083828LL;
short var_14 = (short)24434;
unsigned short var_15 = (unsigned short)1170;
signed char var_16 = (signed char)51;
unsigned int arr_1 [16] ;
int arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 330271051U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -353764576 : 706138187;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
