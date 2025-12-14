#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-57;
short var_6 = (short)-10107;
long long int var_11 = 1893380294192935600LL;
_Bool var_13 = (_Bool)1;
signed char var_17 = (signed char)69;
int zero = 0;
unsigned int var_19 = 1832014326U;
int var_20 = -554921661;
unsigned long long int var_21 = 1557273381807634303ULL;
unsigned long long int var_22 = 17587027272930080986ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
