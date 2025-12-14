#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6222448954562830866LL;
unsigned int var_1 = 4208868714U;
unsigned long long int var_6 = 17849367836541843670ULL;
short var_8 = (short)24697;
unsigned char var_14 = (unsigned char)74;
int zero = 0;
short var_15 = (short)16533;
long long int var_16 = -5823606063255423163LL;
int var_17 = 1072054031;
short arr_0 [14] [14] ;
int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-12859;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -876007584;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
