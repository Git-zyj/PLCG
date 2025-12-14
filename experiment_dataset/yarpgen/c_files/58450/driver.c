#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6931409819093170101LL;
signed char var_2 = (signed char)-45;
signed char var_5 = (signed char)-83;
int var_7 = -2036922458;
short var_8 = (short)3461;
signed char var_11 = (signed char)-119;
int zero = 0;
unsigned long long int var_14 = 5247368907639928611ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)34787;
_Bool var_17 = (_Bool)0;
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
