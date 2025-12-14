#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15472723856942281253ULL;
long long int var_1 = -463859172158362363LL;
unsigned long long int var_2 = 8446200512343060092ULL;
unsigned short var_6 = (unsigned short)33903;
int zero = 0;
unsigned int var_11 = 280972738U;
unsigned int var_12 = 2229208345U;
short var_13 = (short)365;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
