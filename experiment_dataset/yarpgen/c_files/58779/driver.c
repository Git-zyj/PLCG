#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8594129654609771264ULL;
signed char var_3 = (signed char)88;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)79;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_10 = 1636148410;
int zero = 0;
short var_12 = (short)-16871;
unsigned int var_13 = 1767527499U;
unsigned char var_14 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
