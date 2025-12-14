#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6560447270945238234LL;
unsigned int var_5 = 2819729995U;
unsigned int var_7 = 1393854854U;
unsigned long long int var_10 = 511771410216265571ULL;
unsigned int var_17 = 2892102U;
int zero = 0;
signed char var_20 = (signed char)-116;
unsigned long long int var_21 = 4965066813334354183ULL;
unsigned char var_22 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
