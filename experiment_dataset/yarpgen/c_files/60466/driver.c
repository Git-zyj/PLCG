#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 1184670580U;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_19 = (short)26868;
unsigned long long int var_20 = 10277824748787231550ULL;
unsigned short var_21 = (unsigned short)27432;
void init() {
}

void checksum() {
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
