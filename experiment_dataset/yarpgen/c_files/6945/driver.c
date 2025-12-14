#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29098;
unsigned int var_4 = 1872423839U;
short var_5 = (short)4584;
_Bool var_8 = (_Bool)1;
unsigned int var_13 = 3408075254U;
long long int var_14 = 7226574561925925891LL;
int zero = 0;
unsigned int var_15 = 3912085695U;
int var_16 = 976442007;
void init() {
}

void checksum() {
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
