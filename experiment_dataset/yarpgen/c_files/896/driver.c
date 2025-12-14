#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)36557;
signed char var_6 = (signed char)126;
int var_10 = -1926163012;
signed char var_13 = (signed char)10;
unsigned char var_15 = (unsigned char)61;
int zero = 0;
unsigned int var_20 = 2557211051U;
unsigned long long int var_21 = 4206253617065744390ULL;
unsigned short var_22 = (unsigned short)4763;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
