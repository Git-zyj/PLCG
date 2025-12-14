#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6927976042359948929LL;
unsigned int var_14 = 757213142U;
unsigned char var_15 = (unsigned char)115;
unsigned long long int var_19 = 4685583775781819355ULL;
int zero = 0;
unsigned int var_20 = 1184972471U;
int var_21 = 69827260;
void init() {
}

void checksum() {
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
