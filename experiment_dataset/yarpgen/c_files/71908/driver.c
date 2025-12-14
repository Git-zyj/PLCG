#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2878601186U;
short var_1 = (short)-32409;
int var_2 = 1551545783;
unsigned short var_3 = (unsigned short)22536;
unsigned long long int var_5 = 12013196974597419509ULL;
unsigned short var_6 = (unsigned short)48484;
signed char var_9 = (signed char)-125;
unsigned int var_10 = 1001386898U;
unsigned short var_11 = (unsigned short)64902;
unsigned long long int var_12 = 9276152635520407083ULL;
unsigned int var_15 = 3493207238U;
int zero = 0;
int var_17 = 621487643;
int var_18 = 1726532765;
unsigned long long int var_19 = 10941240825111171881ULL;
unsigned long long int var_20 = 10406849980749106775ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
