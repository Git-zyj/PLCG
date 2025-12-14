#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_8 = -157235196;
int var_9 = -969553870;
signed char var_10 = (signed char)-73;
int zero = 0;
unsigned char var_15 = (unsigned char)231;
unsigned char var_16 = (unsigned char)158;
unsigned long long int var_17 = 7403756352841054218ULL;
void init() {
}

void checksum() {
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
