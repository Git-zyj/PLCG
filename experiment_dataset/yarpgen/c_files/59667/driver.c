#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4175168537522557352LL;
short var_3 = (short)-18984;
short var_13 = (short)356;
short var_15 = (short)-17204;
int var_18 = 975886206;
int zero = 0;
int var_19 = 189674158;
int var_20 = -1843640654;
void init() {
}

void checksum() {
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
