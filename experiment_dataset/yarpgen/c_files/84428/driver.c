#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2206733228U;
short var_3 = (short)16681;
_Bool var_4 = (_Bool)0;
unsigned long long int var_8 = 538261813595076091ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -5454521400244204179LL;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)25;
int zero = 0;
signed char var_15 = (signed char)-35;
unsigned short var_16 = (unsigned short)47653;
unsigned short var_17 = (unsigned short)34314;
_Bool var_18 = (_Bool)0;
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
