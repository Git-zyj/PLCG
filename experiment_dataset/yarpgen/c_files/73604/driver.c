#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-59;
short var_3 = (short)4432;
long long int var_5 = -2462549921203440798LL;
int var_10 = -1703337692;
unsigned int var_11 = 1771553515U;
int zero = 0;
unsigned short var_14 = (unsigned short)58290;
int var_15 = 1109460476;
int var_16 = -1958182867;
unsigned long long int arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 11751590098728080592ULL;
}

void checksum() {
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
