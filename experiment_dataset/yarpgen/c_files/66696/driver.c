#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)10623;
unsigned char var_13 = (unsigned char)117;
unsigned int var_14 = 1270672320U;
long long int var_15 = 5908444120414759022LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)3258;
unsigned int var_19 = 613239124U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
