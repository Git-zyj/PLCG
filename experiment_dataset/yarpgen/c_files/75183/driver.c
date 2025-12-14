#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 157357381282889669LL;
int var_5 = 630018208;
signed char var_6 = (signed char)35;
long long int var_8 = 8075633174419516519LL;
short var_10 = (short)10916;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)49;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15207779871706710692ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
