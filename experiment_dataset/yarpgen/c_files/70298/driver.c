#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4010237776U;
short var_4 = (short)14490;
long long int var_6 = -4188658926771901318LL;
unsigned char var_13 = (unsigned char)86;
unsigned short var_16 = (unsigned short)44025;
long long int var_18 = 4357378870298786751LL;
int zero = 0;
long long int var_20 = 5138782974387411961LL;
unsigned short var_21 = (unsigned short)56782;
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
