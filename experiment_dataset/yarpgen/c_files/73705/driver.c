#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned char var_5 = (unsigned char)222;
unsigned int var_10 = 1747912108U;
int var_13 = -868102714;
short var_14 = (short)17856;
unsigned char var_15 = (unsigned char)128;
int zero = 0;
long long int var_16 = -611275360176847830LL;
unsigned char var_17 = (unsigned char)233;
void init() {
}

void checksum() {
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
