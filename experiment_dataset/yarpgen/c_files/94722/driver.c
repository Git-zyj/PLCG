#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 524639688369971955ULL;
unsigned int var_4 = 746742484U;
long long int var_14 = -4118519674696262609LL;
short var_18 = (short)6424;
int zero = 0;
signed char var_20 = (signed char)-69;
unsigned char var_21 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
