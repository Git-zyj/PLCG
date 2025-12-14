#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8287408055402842469LL;
short var_4 = (short)15619;
signed char var_5 = (signed char)92;
_Bool var_7 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_17 = -826251030;
int var_18 = -2146008418;
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
