#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12042;
unsigned long long int var_2 = 11829354091394516446ULL;
unsigned int var_3 = 4027688183U;
long long int var_4 = -4124107910631083382LL;
short var_5 = (short)-25793;
short var_7 = (short)5760;
int zero = 0;
short var_12 = (short)-9359;
unsigned int var_13 = 1052726471U;
void init() {
}

void checksum() {
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
