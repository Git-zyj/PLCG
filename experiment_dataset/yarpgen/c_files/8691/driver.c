#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1762489512U;
signed char var_1 = (signed char)-36;
unsigned char var_10 = (unsigned char)185;
unsigned int var_11 = 4130871136U;
short var_12 = (short)-22933;
unsigned int var_13 = 1434614589U;
short var_15 = (short)-9987;
unsigned long long int var_18 = 4149995072660197679ULL;
int zero = 0;
short var_19 = (short)3417;
int var_20 = -2085567696;
short var_21 = (short)25006;
unsigned short var_22 = (unsigned short)45360;
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
