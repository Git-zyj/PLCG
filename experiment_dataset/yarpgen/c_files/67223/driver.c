#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
int var_1 = -636287181;
short var_6 = (short)-32359;
unsigned int var_7 = 3534242066U;
_Bool var_8 = (_Bool)1;
short var_13 = (short)-10641;
int zero = 0;
long long int var_15 = 8082515617545656324LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-50;
void init() {
}

void checksum() {
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
