#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_7 = (short)28315;
short var_9 = (short)-23132;
short var_11 = (short)14521;
int zero = 0;
signed char var_14 = (signed char)-69;
unsigned short var_15 = (unsigned short)16430;
unsigned int var_16 = 993497470U;
void init() {
}

void checksum() {
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
