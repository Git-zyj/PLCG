#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)175;
long long int var_6 = 1657126852087131411LL;
unsigned char var_7 = (unsigned char)150;
signed char var_9 = (signed char)47;
unsigned long long int var_14 = 2930517190924457297ULL;
long long int var_17 = -4994369178496813240LL;
int zero = 0;
signed char var_20 = (signed char)101;
signed char var_21 = (signed char)73;
unsigned char var_22 = (unsigned char)191;
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
