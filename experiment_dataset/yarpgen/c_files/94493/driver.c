#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25766;
short var_1 = (short)25132;
short var_2 = (short)30727;
short var_3 = (short)-12044;
short var_4 = (short)32352;
long long int var_6 = 1189841041191489092LL;
long long int var_9 = -7147361659408298749LL;
int zero = 0;
long long int var_12 = 1463527641057475408LL;
short var_13 = (short)8518;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
