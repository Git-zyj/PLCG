#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-41;
unsigned short var_5 = (unsigned short)61666;
unsigned char var_8 = (unsigned char)246;
signed char var_9 = (signed char)-113;
signed char var_12 = (signed char)100;
int zero = 0;
unsigned short var_14 = (unsigned short)63880;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
