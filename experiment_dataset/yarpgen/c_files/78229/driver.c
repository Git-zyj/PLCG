#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 145380445U;
unsigned int var_7 = 639534728U;
unsigned long long int var_8 = 10777226687284467271ULL;
int zero = 0;
long long int var_13 = 6278907465144425172LL;
unsigned char var_14 = (unsigned char)66;
unsigned int var_15 = 1625533142U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
