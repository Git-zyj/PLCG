#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4032380054U;
short var_1 = (short)-29808;
signed char var_7 = (signed char)23;
int zero = 0;
unsigned long long int var_16 = 12393161102327347580ULL;
long long int var_17 = -1074066722521916682LL;
short var_18 = (short)23699;
unsigned char var_19 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
