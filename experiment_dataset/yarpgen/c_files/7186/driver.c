#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1802055106;
short var_3 = (short)26481;
unsigned int var_4 = 2761070318U;
unsigned int var_19 = 2177808596U;
int zero = 0;
short var_20 = (short)-13092;
unsigned short var_21 = (unsigned short)38352;
_Bool var_22 = (_Bool)0;
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
