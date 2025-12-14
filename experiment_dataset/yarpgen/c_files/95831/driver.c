#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30315;
long long int var_3 = -8162637071613160777LL;
unsigned long long int var_4 = 14452298677253539915ULL;
short var_5 = (short)-28978;
int var_7 = 1640868960;
signed char var_9 = (signed char)-87;
short var_10 = (short)-30319;
unsigned long long int var_11 = 1174864010569555465ULL;
signed char var_12 = (signed char)108;
int zero = 0;
signed char var_13 = (signed char)-50;
short var_14 = (short)-9101;
void init() {
}

void checksum() {
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
