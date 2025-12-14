#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30792;
short var_1 = (short)14772;
int var_3 = -865385620;
unsigned int var_5 = 1602776020U;
long long int var_6 = 8758554113326663703LL;
unsigned short var_8 = (unsigned short)30311;
signed char var_10 = (signed char)94;
int zero = 0;
long long int var_11 = 1505356213287201179LL;
unsigned char var_12 = (unsigned char)119;
signed char var_13 = (signed char)-60;
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
