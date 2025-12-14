#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-50;
short var_13 = (short)13005;
short var_17 = (short)-9791;
int zero = 0;
unsigned char var_20 = (unsigned char)181;
unsigned char var_21 = (unsigned char)10;
long long int var_22 = 2877026786247790383LL;
void init() {
}

void checksum() {
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
