#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -398111598868129930LL;
unsigned int var_3 = 3251200338U;
short var_7 = (short)-25017;
signed char var_8 = (signed char)11;
unsigned short var_10 = (unsigned short)1710;
int zero = 0;
signed char var_13 = (signed char)-101;
short var_14 = (short)-5192;
short var_15 = (short)21356;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
