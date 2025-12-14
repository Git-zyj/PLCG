#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3359806843U;
unsigned long long int var_7 = 1490426607966911272ULL;
long long int var_10 = 7562613640238925036LL;
unsigned char var_15 = (unsigned char)86;
int zero = 0;
unsigned long long int var_16 = 326941750990963103ULL;
int var_17 = 168381963;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
