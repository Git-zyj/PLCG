#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 2144987508U;
int var_13 = 333444445;
int var_17 = -1618331279;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-3807;
int zero = 0;
int var_20 = -258008019;
long long int var_21 = 2538559914432238726LL;
void init() {
}

void checksum() {
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
