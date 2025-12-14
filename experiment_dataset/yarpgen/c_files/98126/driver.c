#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -445574476;
unsigned int var_1 = 1728382960U;
int var_3 = 1836168595;
unsigned long long int var_4 = 13895961967024759455ULL;
int var_5 = -75026171;
signed char var_6 = (signed char)-3;
unsigned char var_10 = (unsigned char)236;
short var_12 = (short)-23222;
int zero = 0;
unsigned char var_13 = (unsigned char)108;
unsigned char var_14 = (unsigned char)190;
_Bool var_15 = (_Bool)0;
int var_16 = 310475309;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
