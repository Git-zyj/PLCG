#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3656504410U;
short var_2 = (short)8633;
long long int var_3 = -8572822980312329439LL;
short var_6 = (short)27708;
long long int var_7 = -9037565886653738383LL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2536317163U;
unsigned int var_10 = 148153012U;
short var_11 = (short)-1785;
int zero = 0;
short var_13 = (short)-25364;
unsigned long long int var_14 = 7261929405723902796ULL;
long long int var_15 = 4479943678847651357LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
