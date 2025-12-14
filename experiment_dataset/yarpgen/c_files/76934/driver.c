#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8258;
long long int var_4 = 8691426930083393913LL;
unsigned int var_9 = 1663110012U;
unsigned char var_10 = (unsigned char)111;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3213091955U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
