#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 6199010850035894353ULL;
unsigned long long int var_13 = 18183552286473369439ULL;
int zero = 0;
unsigned long long int var_14 = 665010813078646176ULL;
unsigned short var_15 = (unsigned short)25471;
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
