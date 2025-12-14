#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)43;
short var_10 = (short)18337;
int var_15 = 2086477312;
long long int var_16 = 7341088374472785212LL;
int zero = 0;
unsigned int var_17 = 3726089667U;
unsigned char var_18 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
