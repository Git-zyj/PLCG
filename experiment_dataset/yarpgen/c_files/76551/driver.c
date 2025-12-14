#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -693717233;
unsigned char var_9 = (unsigned char)222;
int zero = 0;
unsigned int var_13 = 1347526838U;
unsigned long long int var_14 = 18428112049301286300ULL;
long long int var_15 = 4090299433090576013LL;
short var_16 = (short)4439;
unsigned int var_17 = 3958969000U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
