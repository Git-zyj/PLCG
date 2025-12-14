#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)4;
long long int var_10 = 6235800354290117585LL;
unsigned char var_11 = (unsigned char)173;
int zero = 0;
long long int var_12 = 4587539849638365213LL;
unsigned long long int var_13 = 2299867991543483816ULL;
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
