#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2490992895U;
long long int var_4 = -2281197894445098622LL;
signed char var_6 = (signed char)-57;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3027330337U;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)29;
long long int var_13 = 16018431059367638LL;
short var_15 = (short)-30973;
int zero = 0;
unsigned int var_16 = 3359078917U;
unsigned short var_17 = (unsigned short)57756;
unsigned char var_18 = (unsigned char)217;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)27775;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
