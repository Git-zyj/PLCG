#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-6;
int var_2 = 1933280429;
int var_3 = 1368620350;
signed char var_4 = (signed char)-104;
signed char var_7 = (signed char)75;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 3171252034U;
unsigned short var_13 = (unsigned short)33121;
long long int var_15 = 5482481208404878660LL;
unsigned short var_17 = (unsigned short)5421;
int zero = 0;
signed char var_18 = (signed char)127;
short var_19 = (short)6119;
unsigned int var_20 = 3917656794U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
