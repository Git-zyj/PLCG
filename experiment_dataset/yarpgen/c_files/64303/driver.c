#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2546420909U;
long long int var_3 = 1591042650838267299LL;
signed char var_6 = (signed char)28;
long long int var_7 = 7606382987575578633LL;
unsigned short var_8 = (unsigned short)7968;
int zero = 0;
signed char var_12 = (signed char)11;
long long int var_13 = -1176152472381936658LL;
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
