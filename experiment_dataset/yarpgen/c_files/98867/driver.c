#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-16858;
long long int var_10 = 7034318517323755492LL;
int zero = 0;
long long int var_20 = 6158442733998428197LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2291150419U;
short var_23 = (short)-31771;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
