#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1684438010;
unsigned short var_3 = (unsigned short)17374;
_Bool var_13 = (_Bool)1;
signed char var_16 = (signed char)60;
int var_18 = 593284410;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)2626;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
