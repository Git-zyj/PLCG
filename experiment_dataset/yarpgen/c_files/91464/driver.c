#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15434938916936608968ULL;
long long int var_3 = -1224365987881409340LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 961464977U;
short var_6 = (short)12455;
unsigned int var_10 = 1525348587U;
int zero = 0;
unsigned int var_15 = 1382351886U;
int var_16 = -1540152436;
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
