#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
unsigned char var_4 = (unsigned char)183;
signed char var_5 = (signed char)-55;
unsigned int var_6 = 2125669435U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 6139962897968536762ULL;
unsigned char var_11 = (unsigned char)144;
unsigned int var_12 = 3055819723U;
int var_14 = -1954198926;
int zero = 0;
long long int var_17 = 8807139413242246424LL;
unsigned int var_18 = 2472301690U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
