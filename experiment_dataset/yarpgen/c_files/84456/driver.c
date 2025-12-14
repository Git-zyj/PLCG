#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_9 = 9079656395664026692ULL;
unsigned int var_12 = 3388629804U;
unsigned short var_13 = (unsigned short)31313;
long long int var_15 = -9158447364883922258LL;
int zero = 0;
short var_16 = (short)-2141;
signed char var_17 = (signed char)-47;
void init() {
}

void checksum() {
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
