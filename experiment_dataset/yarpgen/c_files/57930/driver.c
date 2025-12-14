#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5928613766865993277LL;
unsigned short var_5 = (unsigned short)10222;
short var_10 = (short)10845;
int zero = 0;
signed char var_14 = (signed char)58;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -5327235387538345868LL;
void init() {
}

void checksum() {
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
