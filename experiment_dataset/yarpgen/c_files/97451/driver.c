#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15729;
short var_1 = (short)-3056;
short var_2 = (short)26199;
unsigned short var_5 = (unsigned short)9444;
long long int var_10 = -808421237615611401LL;
unsigned short var_11 = (unsigned short)6543;
int zero = 0;
unsigned char var_12 = (unsigned char)1;
short var_13 = (short)5586;
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
