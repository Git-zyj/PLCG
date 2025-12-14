#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3050260732U;
int var_5 = 432388011;
unsigned short var_9 = (unsigned short)46731;
unsigned short var_10 = (unsigned short)7406;
int zero = 0;
unsigned int var_13 = 3853194278U;
unsigned short var_14 = (unsigned short)43631;
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
