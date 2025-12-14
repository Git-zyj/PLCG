#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1254;
signed char var_3 = (signed char)-4;
short var_4 = (short)-25340;
unsigned int var_7 = 2603775651U;
int zero = 0;
unsigned int var_11 = 2726384318U;
unsigned short var_12 = (unsigned short)65216;
short var_13 = (short)21912;
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
