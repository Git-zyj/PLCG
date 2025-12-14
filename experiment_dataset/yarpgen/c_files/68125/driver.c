#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)63;
unsigned short var_5 = (unsigned short)35948;
unsigned char var_6 = (unsigned char)3;
short var_7 = (short)17325;
long long int var_10 = 1137727400756227671LL;
unsigned char var_11 = (unsigned char)202;
int zero = 0;
unsigned char var_12 = (unsigned char)35;
unsigned char var_13 = (unsigned char)96;
void init() {
}

void checksum() {
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
