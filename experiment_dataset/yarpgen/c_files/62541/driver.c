#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)24;
long long int var_3 = -3249311711258355688LL;
unsigned short var_5 = (unsigned short)45327;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
