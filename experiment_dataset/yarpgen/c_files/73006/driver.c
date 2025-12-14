#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3807452278U;
unsigned long long int var_12 = 1167519329150233995ULL;
int zero = 0;
unsigned long long int var_14 = 3722459767615208254ULL;
unsigned char var_15 = (unsigned char)105;
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
