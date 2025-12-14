#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1032046700;
short var_4 = (short)28580;
short var_9 = (short)9532;
long long int var_16 = 1972953123012576432LL;
int zero = 0;
unsigned int var_17 = 3018678268U;
unsigned char var_18 = (unsigned char)33;
int var_19 = -923202959;
void init() {
}

void checksum() {
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
