#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_6 = 1522740489;
signed char var_7 = (signed char)-106;
short var_10 = (short)-11861;
unsigned short var_12 = (unsigned short)38500;
int zero = 0;
int var_18 = 70678275;
signed char var_19 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
