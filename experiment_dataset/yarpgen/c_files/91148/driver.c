#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26692;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-18669;
unsigned char var_11 = (unsigned char)124;
int zero = 0;
unsigned int var_20 = 2766476615U;
unsigned short var_21 = (unsigned short)43377;
long long int var_22 = -4281443380850104030LL;
void init() {
}

void checksum() {
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
