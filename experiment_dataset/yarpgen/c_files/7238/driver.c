#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned char var_2 = (unsigned char)124;
int var_3 = -763299355;
short var_4 = (short)27802;
short var_8 = (short)-23519;
short var_9 = (short)23485;
unsigned char var_10 = (unsigned char)179;
unsigned int var_11 = 3400801255U;
long long int var_12 = 7111887189117015293LL;
signed char var_13 = (signed char)0;
unsigned char var_14 = (unsigned char)162;
int zero = 0;
int var_15 = -539726096;
int var_16 = -580754467;
void init() {
}

void checksum() {
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
