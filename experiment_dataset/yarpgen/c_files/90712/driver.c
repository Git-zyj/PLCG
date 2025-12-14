#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -307420413;
unsigned int var_9 = 1382704793U;
short var_10 = (short)15085;
int var_12 = 1731851294;
int zero = 0;
unsigned int var_16 = 3207593656U;
short var_17 = (short)-24697;
int var_18 = -1469441865;
signed char var_19 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
