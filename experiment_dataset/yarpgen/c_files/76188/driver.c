#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
short var_1 = (short)12649;
long long int var_2 = -6893073763048727041LL;
signed char var_3 = (signed char)110;
int var_4 = 1338136309;
int var_5 = 135649512;
int var_7 = 1101141397;
unsigned long long int var_8 = 16969749646220492039ULL;
int var_9 = 1764346440;
long long int var_10 = 6027962637454240132LL;
long long int var_11 = -3304241838514722118LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -4370269646460870998LL;
short var_15 = (short)-24945;
short var_16 = (short)28632;
int zero = 0;
short var_17 = (short)-5634;
unsigned short var_18 = (unsigned short)55771;
unsigned short var_19 = (unsigned short)17893;
int var_20 = -1876504372;
unsigned long long int var_21 = 12771606932498650343ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
