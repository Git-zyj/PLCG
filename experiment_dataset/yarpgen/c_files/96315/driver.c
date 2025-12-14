#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)123;
unsigned char var_4 = (unsigned char)86;
unsigned int var_7 = 1535304745U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)123;
unsigned char var_12 = (unsigned char)84;
int zero = 0;
unsigned int var_13 = 2215667277U;
short var_14 = (short)10169;
unsigned int var_15 = 3063424776U;
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
