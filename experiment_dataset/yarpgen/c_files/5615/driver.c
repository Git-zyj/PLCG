#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 2099447508;
int var_10 = -1530426187;
unsigned char var_11 = (unsigned char)18;
long long int var_12 = -173993887239898502LL;
_Bool var_13 = (_Bool)1;
int var_14 = -753577205;
int zero = 0;
unsigned int var_15 = 686655932U;
short var_16 = (short)4350;
_Bool var_17 = (_Bool)0;
int var_18 = 133102313;
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
