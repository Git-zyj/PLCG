#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 826611052U;
unsigned long long int var_6 = 7414588233351874667ULL;
unsigned short var_9 = (unsigned short)36228;
long long int var_10 = -1530823182136535981LL;
int zero = 0;
unsigned int var_12 = 2166087838U;
int var_13 = -487591556;
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
