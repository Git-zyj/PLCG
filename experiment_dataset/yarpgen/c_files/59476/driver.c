#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2130713304U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)57;
signed char var_10 = (signed char)24;
int zero = 0;
unsigned long long int var_11 = 941420979406572974ULL;
short var_12 = (short)-9242;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
