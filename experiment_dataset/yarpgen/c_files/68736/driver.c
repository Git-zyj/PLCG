#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1097148577;
short var_2 = (short)-3789;
unsigned char var_5 = (unsigned char)228;
unsigned char var_7 = (unsigned char)175;
unsigned char var_8 = (unsigned char)233;
unsigned long long int var_9 = 8099423357937368442ULL;
unsigned long long int var_10 = 15978227350975700559ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)44293;
unsigned short var_12 = (unsigned short)52281;
signed char var_13 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
