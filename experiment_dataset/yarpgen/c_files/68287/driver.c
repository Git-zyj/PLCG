#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)186;
unsigned char var_4 = (unsigned char)128;
unsigned char var_6 = (unsigned char)52;
signed char var_8 = (signed char)75;
unsigned long long int var_14 = 14995585483944820842ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)73;
unsigned short var_20 = (unsigned short)32944;
signed char var_21 = (signed char)41;
signed char var_22 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
