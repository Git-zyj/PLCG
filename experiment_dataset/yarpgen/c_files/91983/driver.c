#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)88;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-111;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 3065594894603422226ULL;
short var_14 = (short)-7148;
int zero = 0;
unsigned char var_17 = (unsigned char)31;
_Bool var_18 = (_Bool)0;
int var_19 = 216873727;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
