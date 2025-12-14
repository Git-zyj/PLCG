#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
unsigned long long int var_2 = 8964648220319109396ULL;
unsigned int var_3 = 1220900579U;
signed char var_4 = (signed char)-118;
unsigned int var_5 = 4209461453U;
long long int var_6 = -5995907260729866784LL;
int zero = 0;
signed char var_10 = (signed char)-70;
unsigned long long int var_11 = 6079084303274864980ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
