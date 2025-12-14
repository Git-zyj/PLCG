#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-13410;
unsigned long long int var_4 = 1505171730189698950ULL;
signed char var_5 = (signed char)25;
unsigned int var_7 = 78832896U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-55;
long long int var_11 = 3020496682038736101LL;
int zero = 0;
short var_14 = (short)-14176;
short var_15 = (short)20989;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
