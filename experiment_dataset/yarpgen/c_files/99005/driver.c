#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59761;
long long int var_3 = 7728130937941992979LL;
unsigned int var_5 = 1223233494U;
unsigned char var_14 = (unsigned char)126;
int var_16 = 633294174;
int zero = 0;
unsigned int var_19 = 1448978120U;
int var_20 = -1201891719;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
