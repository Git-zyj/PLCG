#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)18;
short var_5 = (short)-10891;
unsigned long long int var_7 = 18251391853358265690ULL;
unsigned int var_8 = 4170832472U;
_Bool var_9 = (_Bool)1;
int var_10 = -1342284369;
unsigned char var_12 = (unsigned char)84;
int zero = 0;
unsigned char var_16 = (unsigned char)191;
long long int var_17 = 8949146687733156933LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
