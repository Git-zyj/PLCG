#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1466280897U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 9159422815586845405ULL;
signed char var_7 = (signed char)113;
unsigned char var_9 = (unsigned char)176;
unsigned long long int var_11 = 17752583391286443020ULL;
int zero = 0;
short var_13 = (short)-13853;
_Bool var_14 = (_Bool)0;
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
