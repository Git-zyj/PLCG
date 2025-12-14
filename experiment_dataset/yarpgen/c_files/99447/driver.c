#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1800056890;
unsigned int var_5 = 2835664201U;
unsigned int var_6 = 1531301303U;
unsigned char var_9 = (unsigned char)104;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-1560;
unsigned int var_13 = 3531539367U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
