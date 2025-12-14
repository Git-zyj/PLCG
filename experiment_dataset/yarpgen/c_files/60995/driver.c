#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -381739288;
unsigned long long int var_13 = 7403891250076781812ULL;
int zero = 0;
unsigned long long int var_14 = 397706268044235496ULL;
unsigned long long int var_15 = 1992641042705440974ULL;
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
