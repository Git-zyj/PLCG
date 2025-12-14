#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25582;
unsigned int var_3 = 2869236522U;
signed char var_4 = (signed char)-38;
long long int var_5 = -6933425418379657522LL;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)57;
long long int var_12 = -5157147594744005697LL;
long long int var_14 = 4926878474234700626LL;
unsigned char var_16 = (unsigned char)122;
int zero = 0;
short var_20 = (short)-14218;
unsigned long long int var_21 = 1487836152373842584ULL;
signed char var_22 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
