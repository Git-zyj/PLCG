#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 3795853971312065447ULL;
unsigned short var_10 = (unsigned short)2435;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_15 = -1628858218;
unsigned char var_16 = (unsigned char)69;
unsigned char var_17 = (unsigned char)17;
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
