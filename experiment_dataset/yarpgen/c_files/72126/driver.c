#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37164;
signed char var_2 = (signed char)81;
signed char var_6 = (signed char)28;
signed char var_7 = (signed char)104;
signed char var_8 = (signed char)-22;
int zero = 0;
unsigned short var_11 = (unsigned short)8513;
int var_12 = 607876017;
int var_13 = 474707480;
unsigned short var_14 = (unsigned short)63029;
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
