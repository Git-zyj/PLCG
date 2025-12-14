#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5556;
unsigned int var_2 = 737796985U;
unsigned short var_3 = (unsigned short)36180;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 2471128895U;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-10812;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1030032159U;
signed char var_14 = (signed char)-89;
int zero = 0;
unsigned short var_15 = (unsigned short)53313;
unsigned int var_16 = 3115248649U;
int var_17 = 1303956134;
long long int var_18 = -1742594405195670932LL;
_Bool var_19 = (_Bool)0;
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
