#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)41;
unsigned int var_7 = 1483758890U;
unsigned int var_10 = 778745485U;
int zero = 0;
long long int var_12 = 3017576108265931366LL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)2490;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
