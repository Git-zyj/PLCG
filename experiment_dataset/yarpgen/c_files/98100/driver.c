#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28462;
unsigned int var_4 = 1558061212U;
signed char var_5 = (signed char)-67;
short var_10 = (short)-10689;
unsigned short var_11 = (unsigned short)64263;
short var_18 = (short)26524;
short var_19 = (short)-18001;
int zero = 0;
unsigned char var_20 = (unsigned char)168;
unsigned short var_21 = (unsigned short)51879;
unsigned short var_22 = (unsigned short)65422;
unsigned short var_23 = (unsigned short)28416;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
