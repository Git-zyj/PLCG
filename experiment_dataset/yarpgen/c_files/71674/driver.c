#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13077829482022394918ULL;
signed char var_5 = (signed char)67;
unsigned long long int var_7 = 16004736615046513121ULL;
unsigned int var_9 = 3017150407U;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3163491776U;
signed char var_17 = (signed char)40;
long long int var_18 = -7488085862430960002LL;
unsigned char var_19 = (unsigned char)105;
signed char var_20 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
