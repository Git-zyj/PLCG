#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-86;
long long int var_4 = 7116573024165737038LL;
long long int var_5 = 8461855053392407987LL;
unsigned char var_6 = (unsigned char)34;
unsigned int var_8 = 1137796166U;
unsigned long long int var_15 = 14812324061287383322ULL;
int zero = 0;
unsigned int var_19 = 1278445196U;
long long int var_20 = 3505236213436904259LL;
long long int var_21 = 2062211711051709737LL;
unsigned long long int var_22 = 769633027786775207ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
