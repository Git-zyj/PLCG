#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1952132506;
unsigned char var_3 = (unsigned char)162;
unsigned int var_4 = 3187209055U;
unsigned int var_8 = 1322489402U;
_Bool var_11 = (_Bool)1;
unsigned char var_19 = (unsigned char)154;
int zero = 0;
int var_20 = 307570660;
signed char var_21 = (signed char)24;
unsigned short var_22 = (unsigned short)26610;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
