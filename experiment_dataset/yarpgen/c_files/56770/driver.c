#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5744444686467315874LL;
unsigned short var_7 = (unsigned short)5314;
unsigned short var_9 = (unsigned short)27693;
int zero = 0;
int var_10 = -1042029346;
unsigned int var_11 = 1213677852U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
