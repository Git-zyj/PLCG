#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1198830937U;
_Bool var_3 = (_Bool)0;
short var_4 = (short)19637;
int var_5 = -1432133312;
int var_6 = 1765656277;
int var_7 = 543243409;
int var_11 = -6269196;
unsigned long long int var_14 = 13746344246791022721ULL;
int var_15 = 1694209553;
int zero = 0;
unsigned long long int var_16 = 14489081410687367700ULL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)123;
unsigned int var_19 = 3867321696U;
void init() {
}

void checksum() {
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
