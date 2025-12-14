#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)57;
short var_8 = (short)-26895;
short var_10 = (short)29055;
unsigned short var_18 = (unsigned short)19854;
int zero = 0;
unsigned long long int var_19 = 17896727180520188167ULL;
long long int var_20 = 7459857621728060712LL;
unsigned long long int var_21 = 11207688648948003094ULL;
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
