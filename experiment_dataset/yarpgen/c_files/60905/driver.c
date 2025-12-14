#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2199265418U;
short var_3 = (short)23301;
unsigned int var_4 = 1291654639U;
unsigned char var_5 = (unsigned char)132;
int zero = 0;
unsigned char var_17 = (unsigned char)30;
short var_18 = (short)1191;
short var_19 = (short)-20233;
unsigned int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 235648924U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
