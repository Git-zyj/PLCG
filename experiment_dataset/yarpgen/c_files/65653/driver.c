#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
int var_2 = 1103832052;
_Bool var_4 = (_Bool)1;
int var_7 = 35327970;
unsigned short var_9 = (unsigned short)2305;
unsigned char var_11 = (unsigned char)145;
int var_13 = -2119929134;
int zero = 0;
unsigned short var_14 = (unsigned short)55545;
short var_15 = (short)5843;
unsigned short var_16 = (unsigned short)41538;
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
