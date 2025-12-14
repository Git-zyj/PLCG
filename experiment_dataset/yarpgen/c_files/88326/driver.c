#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4156;
unsigned short var_4 = (unsigned short)57436;
short var_7 = (short)6062;
signed char var_10 = (signed char)-105;
long long int var_11 = 562145189275748061LL;
int zero = 0;
signed char var_12 = (signed char)84;
long long int var_13 = 7699687687617641889LL;
unsigned char var_14 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
