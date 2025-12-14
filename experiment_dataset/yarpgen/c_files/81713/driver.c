#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
long long int var_9 = 6928494236607879895LL;
short var_12 = (short)26872;
signed char var_13 = (signed char)-6;
short var_15 = (short)-21612;
int zero = 0;
short var_18 = (short)5293;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
