#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
long long int var_3 = 4041103909342231053LL;
long long int var_4 = -4581212899234401561LL;
short var_5 = (short)9848;
long long int var_8 = -5810824127040509105LL;
int zero = 0;
long long int var_10 = 2617935256005765622LL;
unsigned char var_11 = (unsigned char)152;
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
