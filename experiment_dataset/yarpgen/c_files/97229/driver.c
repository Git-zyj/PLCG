#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9318670565185855262ULL;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)47;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)163;
long long int var_13 = 7951683517470080122LL;
unsigned char var_14 = (unsigned char)62;
long long int var_15 = -614476791118455959LL;
int zero = 0;
unsigned int var_20 = 2427993205U;
unsigned char var_21 = (unsigned char)16;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-17411;
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
