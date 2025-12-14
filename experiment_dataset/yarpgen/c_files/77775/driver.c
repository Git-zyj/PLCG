#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
int var_1 = -2012693586;
short var_5 = (short)21728;
int zero = 0;
unsigned int var_12 = 158688108U;
unsigned short var_13 = (unsigned short)3001;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11711512027502395623ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
