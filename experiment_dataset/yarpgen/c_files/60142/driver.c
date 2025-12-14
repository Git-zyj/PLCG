#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9423;
unsigned char var_1 = (unsigned char)112;
long long int var_2 = -1591166272680688685LL;
int var_3 = 1475985665;
int var_4 = -424763927;
int var_6 = 1138583057;
int var_9 = -1994514817;
unsigned char var_10 = (unsigned char)233;
int var_11 = 1920073639;
_Bool var_12 = (_Bool)0;
int var_13 = 548217332;
int zero = 0;
int var_15 = 554111330;
unsigned short var_16 = (unsigned short)45117;
unsigned int var_17 = 1332851055U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
