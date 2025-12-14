#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11675;
unsigned short var_1 = (unsigned short)36862;
signed char var_3 = (signed char)76;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)25;
short var_8 = (short)-7841;
unsigned char var_10 = (unsigned char)79;
unsigned short var_11 = (unsigned short)45678;
unsigned char var_12 = (unsigned char)116;
int zero = 0;
short var_13 = (short)24970;
unsigned short var_14 = (unsigned short)21823;
short var_15 = (short)-18613;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
