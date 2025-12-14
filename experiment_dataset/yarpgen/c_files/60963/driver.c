#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3423283285761000216LL;
unsigned short var_1 = (unsigned short)52668;
unsigned char var_3 = (unsigned char)183;
unsigned char var_5 = (unsigned char)15;
short var_6 = (short)-18094;
unsigned char var_8 = (unsigned char)209;
unsigned char var_9 = (unsigned char)184;
int var_11 = -527928959;
int zero = 0;
long long int var_12 = 1174655646768678468LL;
unsigned short var_13 = (unsigned short)61612;
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
