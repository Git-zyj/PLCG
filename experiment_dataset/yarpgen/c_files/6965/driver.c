#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3335911029U;
int var_1 = 875590987;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1659392184U;
long long int var_10 = 6978599167857286923LL;
short var_11 = (short)-8634;
int zero = 0;
unsigned short var_12 = (unsigned short)59408;
unsigned short var_13 = (unsigned short)23674;
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
