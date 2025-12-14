#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)25;
unsigned short var_5 = (unsigned short)57608;
long long int var_6 = -2158947798184361042LL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-3356;
unsigned char var_12 = (unsigned char)235;
int zero = 0;
unsigned long long int var_14 = 1118226057561703213ULL;
unsigned short var_15 = (unsigned short)48485;
unsigned char var_16 = (unsigned char)90;
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
