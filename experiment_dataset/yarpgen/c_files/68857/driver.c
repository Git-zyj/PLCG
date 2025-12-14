#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59044;
signed char var_3 = (signed char)64;
unsigned short var_6 = (unsigned short)60964;
unsigned short var_8 = (unsigned short)35215;
unsigned short var_11 = (unsigned short)10187;
int zero = 0;
signed char var_12 = (signed char)-72;
unsigned short var_13 = (unsigned short)62098;
signed char var_14 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
