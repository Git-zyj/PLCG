#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)8262;
long long int var_14 = 4684571304317487369LL;
unsigned char var_17 = (unsigned char)234;
unsigned long long int var_18 = 1447098183483461424ULL;
int zero = 0;
unsigned long long int var_20 = 3211348423261710023ULL;
unsigned long long int var_21 = 7623870355909004088ULL;
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
