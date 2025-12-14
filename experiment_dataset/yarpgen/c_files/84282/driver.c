#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)77;
short var_8 = (short)-23956;
int var_10 = -1248618794;
signed char var_12 = (signed char)-41;
unsigned int var_15 = 2234101540U;
long long int var_17 = -594579518478573679LL;
int zero = 0;
unsigned int var_18 = 3201452691U;
signed char var_19 = (signed char)-122;
signed char var_20 = (signed char)87;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
