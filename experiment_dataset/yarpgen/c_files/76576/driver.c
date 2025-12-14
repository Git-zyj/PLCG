#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4453965293647018472ULL;
short var_9 = (short)2553;
unsigned short var_11 = (unsigned short)51750;
int zero = 0;
unsigned long long int var_14 = 2819906439185739767ULL;
unsigned char var_15 = (unsigned char)206;
unsigned char var_16 = (unsigned char)167;
unsigned short var_17 = (unsigned short)2865;
unsigned int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2917267969U;
}

void checksum() {
    hash(&seed, var_14);
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
