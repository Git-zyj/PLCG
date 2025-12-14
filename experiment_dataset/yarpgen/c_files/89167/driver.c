#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-10419;
unsigned long long int var_7 = 9664347426375914902ULL;
long long int var_11 = -1854467266527560037LL;
unsigned long long int var_16 = 2658913410652711202ULL;
int zero = 0;
unsigned int var_19 = 3916590386U;
short var_20 = (short)-25442;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
