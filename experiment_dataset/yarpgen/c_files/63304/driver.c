#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3175522332844195936LL;
signed char var_9 = (signed char)-75;
short var_12 = (short)-26674;
int zero = 0;
unsigned short var_16 = (unsigned short)9792;
unsigned int var_17 = 180069448U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
