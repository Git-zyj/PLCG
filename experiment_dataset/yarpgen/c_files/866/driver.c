#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 879578450;
unsigned char var_6 = (unsigned char)48;
unsigned long long int var_8 = 15948735326970981183ULL;
int zero = 0;
unsigned long long int var_11 = 10037649400536254581ULL;
unsigned long long int var_12 = 5729587881763650049ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
