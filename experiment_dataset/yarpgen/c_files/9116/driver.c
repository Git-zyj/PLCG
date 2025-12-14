#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)240;
unsigned int var_8 = 340363673U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3066900841U;
long long int var_14 = 411209058106451739LL;
int zero = 0;
unsigned int var_18 = 1761483048U;
unsigned int var_19 = 3097142274U;
unsigned int var_20 = 1969903354U;
unsigned long long int var_21 = 14925359823035169352ULL;
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
