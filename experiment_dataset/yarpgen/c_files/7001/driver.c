#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4290244855804650943LL;
int var_2 = -1878711822;
unsigned short var_6 = (unsigned short)21063;
int var_9 = 409204243;
unsigned int var_11 = 4201632819U;
int zero = 0;
unsigned int var_14 = 108033877U;
int var_15 = -2053285730;
void init() {
}

void checksum() {
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
