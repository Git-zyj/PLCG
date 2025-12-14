#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4214799572U;
long long int var_8 = 4203729147860663335LL;
int var_10 = 131195601;
unsigned int var_12 = 1621448640U;
int zero = 0;
short var_13 = (short)6828;
short var_14 = (short)21797;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
