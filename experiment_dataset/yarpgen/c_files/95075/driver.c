#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4432286511059531622LL;
unsigned short var_6 = (unsigned short)16732;
short var_12 = (short)-22534;
unsigned int var_13 = 3414951667U;
short var_15 = (short)18137;
unsigned long long int var_17 = 14705420831778770854ULL;
int zero = 0;
short var_19 = (short)-2472;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)33360;
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
