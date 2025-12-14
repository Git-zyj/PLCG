#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)195;
unsigned long long int var_10 = 6468580976720015801ULL;
short var_11 = (short)-30766;
long long int var_14 = -2040346114734076541LL;
int zero = 0;
unsigned int var_15 = 3579120609U;
unsigned char var_16 = (unsigned char)156;
unsigned short var_17 = (unsigned short)54304;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
