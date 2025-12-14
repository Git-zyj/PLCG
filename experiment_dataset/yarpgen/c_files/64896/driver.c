#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6736;
short var_1 = (short)-10141;
unsigned int var_2 = 1480950337U;
int var_4 = -918745581;
unsigned short var_5 = (unsigned short)63474;
long long int var_11 = 7651304015948073144LL;
int zero = 0;
unsigned short var_17 = (unsigned short)15803;
unsigned char var_18 = (unsigned char)56;
short var_19 = (short)-31853;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
