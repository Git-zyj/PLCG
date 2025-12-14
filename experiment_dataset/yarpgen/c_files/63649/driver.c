#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-75;
signed char var_6 = (signed char)116;
int var_9 = -2002284836;
long long int var_10 = 5802906586984582854LL;
short var_11 = (short)-5615;
unsigned int var_12 = 702204608U;
unsigned int var_13 = 2322093929U;
int var_15 = 1182354970;
int zero = 0;
signed char var_16 = (signed char)-91;
unsigned short var_17 = (unsigned short)23234;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
