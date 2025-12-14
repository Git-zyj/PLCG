#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13884;
signed char var_4 = (signed char)-88;
long long int var_8 = -4712545639814680831LL;
short var_10 = (short)-29004;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-13794;
signed char var_13 = (signed char)28;
long long int var_15 = -6833429402070823748LL;
int zero = 0;
int var_18 = -944368041;
unsigned char var_19 = (unsigned char)233;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-20246;
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
