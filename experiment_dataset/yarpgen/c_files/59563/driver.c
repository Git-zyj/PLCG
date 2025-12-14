#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30428;
short var_2 = (short)24929;
signed char var_3 = (signed char)63;
signed char var_6 = (signed char)14;
signed char var_7 = (signed char)-67;
int zero = 0;
unsigned short var_11 = (unsigned short)18449;
signed char var_12 = (signed char)-24;
unsigned short var_13 = (unsigned short)5338;
int var_14 = -1535899017;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
