#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3883996105217114944LL;
short var_11 = (short)31965;
short var_15 = (short)-23062;
long long int var_17 = 8647358704201568997LL;
unsigned int var_18 = 1360576782U;
int zero = 0;
unsigned int var_20 = 2495832351U;
unsigned short var_21 = (unsigned short)38321;
_Bool var_22 = (_Bool)0;
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
