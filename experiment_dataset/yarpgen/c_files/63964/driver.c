#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)14309;
int var_5 = -1638307623;
long long int var_6 = 2295747407346286838LL;
unsigned int var_8 = 1734710892U;
int var_11 = 696242776;
int zero = 0;
long long int var_12 = 5214549887414901223LL;
unsigned short var_13 = (unsigned short)8358;
unsigned int var_14 = 4083714868U;
long long int var_15 = -7282073035473394143LL;
long long int var_16 = 5034398422995459491LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
