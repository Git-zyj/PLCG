#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
unsigned char var_3 = (unsigned char)83;
signed char var_8 = (signed char)15;
unsigned char var_11 = (unsigned char)112;
int zero = 0;
unsigned short var_15 = (unsigned short)59609;
unsigned short var_16 = (unsigned short)27200;
unsigned long long int var_17 = 9623535539807720522ULL;
short var_18 = (short)17640;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
