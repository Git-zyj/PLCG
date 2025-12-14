#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)46;
signed char var_3 = (signed char)96;
unsigned int var_8 = 646871449U;
long long int var_11 = 7952520545944789787LL;
signed char var_13 = (signed char)15;
unsigned long long int var_16 = 12038075289854589943ULL;
short var_17 = (short)7211;
int zero = 0;
short var_20 = (short)31776;
signed char var_21 = (signed char)11;
unsigned long long int var_22 = 3815212885666989201ULL;
signed char var_23 = (signed char)74;
long long int var_24 = 467269703507282218LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
