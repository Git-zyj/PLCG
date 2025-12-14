#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 540967727U;
unsigned short var_4 = (unsigned short)31310;
short var_5 = (short)-30911;
int var_10 = 1086139337;
int zero = 0;
unsigned int var_12 = 390321283U;
signed char var_13 = (signed char)-31;
long long int var_14 = 4951895444029298804LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
