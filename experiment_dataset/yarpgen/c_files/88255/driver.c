#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)8303;
unsigned char var_10 = (unsigned char)103;
signed char var_12 = (signed char)116;
long long int var_13 = 7405718336320921709LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)57055;
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
