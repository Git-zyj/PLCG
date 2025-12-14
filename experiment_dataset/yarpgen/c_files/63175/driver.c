#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 533339474U;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 490183895U;
int var_7 = -1509522200;
int var_10 = -1392741414;
unsigned char var_14 = (unsigned char)89;
unsigned long long int var_15 = 3926151402105237698ULL;
int zero = 0;
short var_20 = (short)4729;
unsigned short var_21 = (unsigned short)29712;
signed char var_22 = (signed char)-22;
short var_23 = (short)-4664;
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
