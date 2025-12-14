#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53040;
unsigned short var_7 = (unsigned short)62430;
unsigned short var_10 = (unsigned short)23271;
long long int var_12 = 4750370972433300577LL;
int zero = 0;
unsigned int var_13 = 2096349058U;
signed char var_14 = (signed char)119;
unsigned int var_15 = 2119448359U;
void init() {
}

void checksum() {
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
