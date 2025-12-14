#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_8 = -1220482996;
unsigned char var_10 = (unsigned char)168;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)197;
unsigned short var_17 = (unsigned short)28265;
signed char var_18 = (signed char)10;
void init() {
}

void checksum() {
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
