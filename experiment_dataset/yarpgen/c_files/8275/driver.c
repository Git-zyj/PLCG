#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6503148451466459551LL;
int var_2 = -347707898;
int var_3 = -1039331175;
signed char var_7 = (signed char)-12;
signed char var_8 = (signed char)4;
signed char var_11 = (signed char)56;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)32099;
signed char var_17 = (signed char)109;
unsigned int var_18 = 860767246U;
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
