#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23609;
unsigned long long int var_4 = 8252884761328680670ULL;
unsigned long long int var_5 = 14064266893522393635ULL;
unsigned long long int var_6 = 13470873605588524576ULL;
short var_7 = (short)-31335;
short var_8 = (short)-3297;
int zero = 0;
unsigned short var_11 = (unsigned short)30604;
unsigned char var_12 = (unsigned char)52;
unsigned char var_13 = (unsigned char)81;
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
