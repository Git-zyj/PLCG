#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10632286989728991672ULL;
signed char var_1 = (signed char)57;
unsigned short var_3 = (unsigned short)19928;
short var_4 = (short)7628;
unsigned short var_5 = (unsigned short)17374;
unsigned long long int var_7 = 4818421990987797045ULL;
signed char var_8 = (signed char)-73;
unsigned char var_14 = (unsigned char)140;
int zero = 0;
unsigned short var_16 = (unsigned short)11689;
unsigned short var_17 = (unsigned short)64763;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
