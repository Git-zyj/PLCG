#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
short var_2 = (short)25352;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1407772537U;
unsigned char var_9 = (unsigned char)192;
short var_12 = (short)-31213;
int zero = 0;
short var_13 = (short)899;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2056457268U;
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
