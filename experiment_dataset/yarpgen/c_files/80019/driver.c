#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1536179796;
int var_9 = -635131030;
long long int var_12 = -3051113827022782812LL;
unsigned int var_13 = 1408317647U;
unsigned short var_14 = (unsigned short)35947;
int zero = 0;
unsigned char var_15 = (unsigned char)93;
unsigned short var_16 = (unsigned short)10894;
void init() {
}

void checksum() {
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
