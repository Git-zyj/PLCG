#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -942217083;
short var_4 = (short)858;
unsigned long long int var_8 = 17933128838356592966ULL;
unsigned long long int var_9 = 3797884257978369230ULL;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4523191480944415685LL;
short var_17 = (short)-22316;
int zero = 0;
unsigned short var_18 = (unsigned short)33150;
unsigned int var_19 = 139054050U;
void init() {
}

void checksum() {
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
