#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
short var_1 = (short)15821;
short var_3 = (short)-29329;
long long int var_7 = 2257117718528105361LL;
unsigned long long int var_9 = 1911666903150859467ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)187;
unsigned int var_11 = 2368743473U;
short var_12 = (short)-28509;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
