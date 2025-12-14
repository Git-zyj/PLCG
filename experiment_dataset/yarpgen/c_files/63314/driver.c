#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -294744253;
unsigned short var_13 = (unsigned short)29594;
int zero = 0;
unsigned char var_15 = (unsigned char)62;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-119;
signed char var_18 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
