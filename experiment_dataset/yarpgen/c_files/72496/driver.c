#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1554014981;
unsigned char var_4 = (unsigned char)221;
unsigned long long int var_13 = 16322788143173835587ULL;
int var_14 = -1743487445;
int zero = 0;
unsigned long long int var_16 = 9182501644914229787ULL;
long long int var_17 = 6792865301659275821LL;
void init() {
}

void checksum() {
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
