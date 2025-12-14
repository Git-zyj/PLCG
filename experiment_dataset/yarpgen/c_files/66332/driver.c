#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1379082612727085970ULL;
unsigned short var_11 = (unsigned short)4804;
unsigned long long int var_12 = 17833630774012355117ULL;
int zero = 0;
int var_14 = 1766983631;
unsigned long long int var_15 = 15226554016891465200ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
