#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 394318955;
long long int var_5 = -5468126686679855600LL;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 11789644181197804510ULL;
unsigned char var_13 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
