#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26181;
short var_4 = (short)25410;
int var_7 = 540490697;
signed char var_11 = (signed char)-59;
int zero = 0;
unsigned short var_14 = (unsigned short)35337;
unsigned int var_15 = 3995967548U;
short var_16 = (short)-2024;
long long int var_17 = -7779897647833082915LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
