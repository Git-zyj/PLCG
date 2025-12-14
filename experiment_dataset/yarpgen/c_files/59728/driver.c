#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
unsigned short var_5 = (unsigned short)9824;
unsigned int var_7 = 467464955U;
unsigned char var_9 = (unsigned char)24;
int var_14 = -162224785;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = 314892428;
unsigned char var_20 = (unsigned char)112;
long long int var_21 = -4565204693727620297LL;
unsigned short var_22 = (unsigned short)54620;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
