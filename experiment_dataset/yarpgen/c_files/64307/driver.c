#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -153928447;
unsigned long long int var_3 = 1146396665051515443ULL;
unsigned char var_6 = (unsigned char)39;
unsigned int var_9 = 3954921049U;
long long int var_10 = -8630562929494102857LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)84;
unsigned char var_17 = (unsigned char)189;
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
