#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)47;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-21751;
int var_16 = -1778976174;
int zero = 0;
short var_18 = (short)17478;
unsigned char var_19 = (unsigned char)4;
int var_20 = -687751712;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
