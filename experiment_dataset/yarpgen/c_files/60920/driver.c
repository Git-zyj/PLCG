#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_5 = (short)-5719;
short var_8 = (short)-22059;
unsigned short var_9 = (unsigned short)39459;
int zero = 0;
unsigned long long int var_11 = 2176618344922573729ULL;
unsigned short var_12 = (unsigned short)41652;
short var_13 = (short)-11493;
short var_14 = (short)-20421;
unsigned long long int var_15 = 1309059666160475724ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
