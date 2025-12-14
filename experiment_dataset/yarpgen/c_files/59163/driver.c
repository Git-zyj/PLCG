#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-10958;
short var_6 = (short)854;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-63;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 3705626182U;
unsigned long long int var_13 = 18013639788911971275ULL;
long long int var_14 = -7552779059301801134LL;
unsigned short var_15 = (unsigned short)52547;
unsigned int var_16 = 1222028376U;
unsigned int var_17 = 3629831281U;
int zero = 0;
unsigned short var_20 = (unsigned short)12517;
unsigned long long int var_21 = 13451800713369823162ULL;
unsigned int var_22 = 2575241590U;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
