#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30720;
long long int var_3 = 5025186159775594345LL;
unsigned long long int var_4 = 10410888718503550897ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)27;
unsigned int var_12 = 1055516713U;
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
