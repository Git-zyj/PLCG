#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43645;
unsigned short var_3 = (unsigned short)6463;
unsigned char var_7 = (unsigned char)128;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-97;
int var_15 = -2003806076;
unsigned short var_16 = (unsigned short)39743;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
