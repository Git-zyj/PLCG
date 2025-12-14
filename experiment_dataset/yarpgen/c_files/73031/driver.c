#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9603;
short var_6 = (short)-12397;
unsigned char var_8 = (unsigned char)197;
_Bool var_9 = (_Bool)1;
long long int var_13 = 6295916668112990047LL;
int zero = 0;
short var_18 = (short)23688;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1196195522U;
int var_21 = 142794920;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
