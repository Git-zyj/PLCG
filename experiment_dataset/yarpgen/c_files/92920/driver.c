#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44006;
int var_2 = -1294328260;
short var_3 = (short)29473;
unsigned char var_5 = (unsigned char)103;
short var_7 = (short)-14620;
unsigned int var_9 = 3210645103U;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -5477659627671857049LL;
signed char var_12 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
