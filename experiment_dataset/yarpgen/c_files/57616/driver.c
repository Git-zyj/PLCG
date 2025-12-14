#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -509382535810677473LL;
unsigned int var_3 = 1024343461U;
int var_4 = -40158130;
unsigned int var_7 = 1918265989U;
short var_10 = (short)9019;
signed char var_12 = (signed char)29;
unsigned short var_16 = (unsigned short)11019;
int zero = 0;
int var_20 = -345275879;
unsigned char var_21 = (unsigned char)174;
short var_22 = (short)-12305;
int var_23 = 327399077;
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
