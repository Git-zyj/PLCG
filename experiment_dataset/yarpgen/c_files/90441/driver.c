#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25856;
short var_1 = (short)-6205;
unsigned int var_3 = 3129056627U;
_Bool var_6 = (_Bool)0;
long long int var_8 = 6480845253218235542LL;
unsigned long long int var_9 = 3003002691268763161ULL;
int var_10 = 489407152;
int zero = 0;
short var_16 = (short)5456;
unsigned short var_17 = (unsigned short)38742;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
