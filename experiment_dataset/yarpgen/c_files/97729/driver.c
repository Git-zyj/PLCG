#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18229;
int var_1 = 1973549316;
unsigned int var_2 = 1529243244U;
unsigned short var_3 = (unsigned short)37270;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)39;
unsigned short var_9 = (unsigned short)38930;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 492825918491957345ULL;
unsigned short var_19 = (unsigned short)5223;
unsigned int var_20 = 2113964747U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
