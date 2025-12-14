#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -1712384597231376969LL;
unsigned short var_12 = (unsigned short)54879;
unsigned int var_13 = 3304355558U;
signed char var_15 = (signed char)-43;
int zero = 0;
signed char var_17 = (signed char)45;
long long int var_18 = 558888870670623844LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
