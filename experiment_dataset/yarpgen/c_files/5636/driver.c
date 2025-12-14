#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37400;
_Bool var_3 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned int var_14 = 3293230540U;
int zero = 0;
unsigned short var_20 = (unsigned short)51495;
short var_21 = (short)30617;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
