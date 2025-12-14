#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)186;
unsigned short var_5 = (unsigned short)64419;
unsigned int var_7 = 2008832279U;
unsigned long long int var_9 = 799435213299693297ULL;
short var_10 = (short)-2140;
unsigned int var_17 = 2268018152U;
long long int var_19 = -7928366179645498987LL;
int zero = 0;
unsigned short var_20 = (unsigned short)45013;
long long int var_21 = 1237286390980135545LL;
unsigned long long int var_22 = 2588121950581603526ULL;
short var_23 = (short)-26262;
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
