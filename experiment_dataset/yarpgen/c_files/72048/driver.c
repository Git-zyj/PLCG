#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14879;
long long int var_2 = 8270336591318441791LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 6925787576858068056LL;
int var_7 = 655729526;
int var_8 = -1267524650;
short var_10 = (short)-12181;
int zero = 0;
unsigned int var_11 = 3054395186U;
short var_12 = (short)-27239;
long long int var_13 = 8021765774144325661LL;
int var_14 = 495897455;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
