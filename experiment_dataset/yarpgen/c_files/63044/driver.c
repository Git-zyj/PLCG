#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1877463771;
_Bool var_2 = (_Bool)0;
long long int var_5 = 1072745161847398909LL;
int var_6 = 1433772281;
unsigned char var_12 = (unsigned char)179;
int zero = 0;
long long int var_20 = 2820642437617456016LL;
int var_21 = 901158466;
long long int var_22 = 8195094797016614736LL;
unsigned char var_23 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
