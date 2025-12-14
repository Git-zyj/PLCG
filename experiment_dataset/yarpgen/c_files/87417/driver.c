#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17589;
short var_1 = (short)18740;
_Bool var_5 = (_Bool)1;
unsigned int var_12 = 396309358U;
long long int var_14 = -3415254786971143927LL;
int zero = 0;
unsigned short var_16 = (unsigned short)23181;
unsigned int var_17 = 1842824340U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)63981;
short var_20 = (short)-18127;
unsigned int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 1939250321U;
}

void checksum() {
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
