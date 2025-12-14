#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
short var_1 = (short)-20903;
signed char var_10 = (signed char)74;
long long int var_11 = -7295956475295487175LL;
signed char var_13 = (signed char)-118;
short var_14 = (short)28181;
short var_15 = (short)-31089;
short var_16 = (short)-24960;
int zero = 0;
long long int var_17 = -5873467549089954443LL;
short var_18 = (short)-15501;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
