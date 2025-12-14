#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9346117558475906030ULL;
signed char var_8 = (signed char)-119;
short var_10 = (short)18782;
long long int var_13 = -214097577758437389LL;
int zero = 0;
unsigned int var_18 = 2913954556U;
unsigned char var_19 = (unsigned char)250;
unsigned char var_20 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
