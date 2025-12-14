#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-17;
unsigned int var_6 = 3086087644U;
unsigned char var_7 = (unsigned char)78;
long long int var_8 = 4345259244899322854LL;
unsigned short var_9 = (unsigned short)3867;
short var_12 = (short)-31726;
int zero = 0;
short var_20 = (short)-4413;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
