#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
signed char var_2 = (signed char)79;
signed char var_5 = (signed char)28;
long long int var_8 = 2402425331938479594LL;
short var_11 = (short)-3806;
unsigned long long int var_12 = 11334072721691423206ULL;
unsigned long long int var_17 = 6338727240510834782ULL;
unsigned int var_18 = 1271413629U;
int zero = 0;
unsigned int var_19 = 710041215U;
long long int var_20 = -3936013304671628762LL;
_Bool var_21 = (_Bool)1;
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
