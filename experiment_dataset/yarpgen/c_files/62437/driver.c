#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48580;
short var_10 = (short)32758;
unsigned char var_13 = (unsigned char)6;
int zero = 0;
short var_14 = (short)20315;
long long int var_15 = -5333135106802826197LL;
unsigned int var_16 = 568893243U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
