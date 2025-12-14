#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
long long int var_8 = 2452422202853791798LL;
unsigned int var_13 = 492806321U;
int zero = 0;
unsigned char var_14 = (unsigned char)209;
long long int var_15 = 6214451246040913290LL;
unsigned long long int var_16 = 9661829812096392944ULL;
void init() {
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
