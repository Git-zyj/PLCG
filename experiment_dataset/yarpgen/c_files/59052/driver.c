#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = 127929986;
signed char var_5 = (signed char)-96;
_Bool var_7 = (_Bool)0;
int var_15 = 1784417139;
int zero = 0;
unsigned char var_20 = (unsigned char)160;
int var_21 = 1902572450;
unsigned int var_22 = 4128335094U;
void init() {
}

void checksum() {
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
