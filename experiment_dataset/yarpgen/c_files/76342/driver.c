#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39496;
unsigned int var_2 = 1317636455U;
long long int var_6 = 9051368774413192873LL;
short var_12 = (short)19359;
int zero = 0;
unsigned short var_13 = (unsigned short)62553;
unsigned short var_14 = (unsigned short)64335;
_Bool var_15 = (_Bool)0;
int var_16 = 1221700214;
short var_17 = (short)5522;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
