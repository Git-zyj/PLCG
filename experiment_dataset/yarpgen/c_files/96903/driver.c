#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1790461852;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 928745871U;
unsigned short var_9 = (unsigned short)25488;
int zero = 0;
unsigned int var_13 = 1799713435U;
unsigned short var_14 = (unsigned short)13075;
int var_15 = 329843571;
int var_16 = 1261773163;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
