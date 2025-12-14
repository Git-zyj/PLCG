#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
_Bool var_2 = (_Bool)0;
long long int var_3 = -952293729209246915LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)31;
short var_10 = (short)32517;
signed char var_12 = (signed char)45;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 4111826211U;
unsigned int var_17 = 57684236U;
int zero = 0;
unsigned char var_19 = (unsigned char)45;
unsigned char var_20 = (unsigned char)95;
long long int var_21 = -6456095364864975227LL;
void init() {
}

void checksum() {
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
