#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3530039467U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1120157318U;
int zero = 0;
unsigned char var_13 = (unsigned char)59;
signed char var_14 = (signed char)-103;
unsigned int var_15 = 2475308426U;
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
