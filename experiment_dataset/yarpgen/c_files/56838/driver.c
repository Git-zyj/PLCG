#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6678729790358448139LL;
signed char var_9 = (signed char)-75;
short var_10 = (short)-6406;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-92;
signed char var_18 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
