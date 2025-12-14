#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14330;
unsigned int var_4 = 4270994415U;
unsigned int var_6 = 4238328830U;
unsigned short var_7 = (unsigned short)2301;
unsigned short var_8 = (unsigned short)9206;
int var_9 = 473130736;
int var_10 = -1180602837;
unsigned int var_12 = 2274558702U;
unsigned int var_13 = 2711120212U;
int var_14 = -845700232;
int var_15 = 1021453902;
unsigned int var_16 = 1689766712U;
unsigned int var_17 = 2716730936U;
int zero = 0;
unsigned int var_18 = 3727542275U;
unsigned int var_19 = 3601438172U;
unsigned long long int var_20 = 11996726249799074628ULL;
unsigned short var_21 = (unsigned short)23080;
unsigned int var_22 = 1447483680U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
