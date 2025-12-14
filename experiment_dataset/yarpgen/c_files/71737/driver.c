#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9704;
unsigned long long int var_2 = 10324534304420429419ULL;
long long int var_3 = -7364405746719952782LL;
short var_6 = (short)18045;
signed char var_8 = (signed char)-95;
short var_10 = (short)-11624;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17149757247297297286ULL;
unsigned char var_17 = (unsigned char)212;
unsigned int var_18 = 2854205381U;
long long int var_19 = -6895657394092127937LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
