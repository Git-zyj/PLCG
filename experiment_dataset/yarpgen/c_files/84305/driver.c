#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51364;
long long int var_1 = 5898155813021081580LL;
unsigned short var_2 = (unsigned short)18348;
signed char var_3 = (signed char)63;
long long int var_5 = -4494857538180533908LL;
signed char var_8 = (signed char)-15;
int zero = 0;
signed char var_15 = (signed char)32;
long long int var_16 = 7162433338580959286LL;
long long int var_17 = -165103005449056073LL;
long long int var_18 = -6208109551596860200LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
