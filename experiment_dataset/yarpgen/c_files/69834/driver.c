#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1650581391U;
long long int var_1 = -6113101715828313215LL;
short var_3 = (short)3126;
int var_5 = 1225683310;
unsigned char var_6 = (unsigned char)55;
short var_11 = (short)10347;
int zero = 0;
signed char var_13 = (signed char)-44;
unsigned int var_14 = 3250282951U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
