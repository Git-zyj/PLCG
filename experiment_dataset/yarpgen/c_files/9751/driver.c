#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12788408939946057604ULL;
unsigned short var_11 = (unsigned short)63233;
short var_13 = (short)-31006;
int zero = 0;
long long int var_19 = -2006986743884262197LL;
unsigned int var_20 = 1104323348U;
signed char var_21 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
