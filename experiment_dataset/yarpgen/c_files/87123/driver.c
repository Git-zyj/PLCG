#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15711;
int var_3 = -1859530288;
unsigned char var_5 = (unsigned char)51;
unsigned int var_12 = 4168840244U;
short var_17 = (short)-21175;
signed char var_19 = (signed char)-115;
int zero = 0;
long long int var_20 = 425095904136638439LL;
unsigned short var_21 = (unsigned short)46220;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
