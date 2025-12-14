#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
_Bool var_2 = (_Bool)1;
long long int var_4 = 6414654906561544651LL;
short var_6 = (short)25769;
signed char var_7 = (signed char)-99;
unsigned char var_8 = (unsigned char)144;
unsigned char var_9 = (unsigned char)116;
int var_13 = 1621906126;
signed char var_15 = (signed char)77;
unsigned int var_16 = 4294152565U;
signed char var_17 = (signed char)-27;
int zero = 0;
short var_20 = (short)-28154;
unsigned int var_21 = 1711838678U;
signed char var_22 = (signed char)-123;
void init() {
}

void checksum() {
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
