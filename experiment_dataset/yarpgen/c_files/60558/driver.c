#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15376;
signed char var_2 = (signed char)-75;
unsigned long long int var_5 = 14723964114541779428ULL;
short var_6 = (short)13476;
int var_7 = 1828830991;
unsigned short var_9 = (unsigned short)13261;
int var_10 = -180430965;
int zero = 0;
signed char var_11 = (signed char)1;
signed char var_12 = (signed char)-51;
int var_13 = -1591694518;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)11;
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
