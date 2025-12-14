#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)6945;
unsigned long long int var_5 = 17322551596607493717ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_14 = 14156885041171083807ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-28;
int var_19 = 1541528220;
unsigned long long int var_20 = 7747255730628354408ULL;
signed char var_21 = (signed char)-93;
signed char var_22 = (signed char)-126;
signed char var_23 = (signed char)37;
signed char var_24 = (signed char)40;
signed char var_25 = (signed char)-5;
short var_26 = (short)-22193;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
