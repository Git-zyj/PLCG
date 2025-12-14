#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1010685931;
short var_8 = (short)-26447;
unsigned int var_10 = 1799115584U;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = 1910591183;
unsigned int var_14 = 272277050U;
unsigned short var_15 = (unsigned short)51653;
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
