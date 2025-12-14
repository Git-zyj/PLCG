#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
unsigned int var_4 = 557833408U;
long long int var_5 = -7062819202680542402LL;
unsigned short var_7 = (unsigned short)54730;
short var_8 = (short)31087;
signed char var_12 = (signed char)30;
int zero = 0;
signed char var_14 = (signed char)-22;
unsigned int var_15 = 2802800909U;
short var_16 = (short)4709;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
