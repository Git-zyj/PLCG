#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8890526376755353438ULL;
unsigned short var_2 = (unsigned short)4403;
long long int var_5 = -4719505699728598323LL;
int zero = 0;
short var_13 = (short)-18990;
unsigned char var_14 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
