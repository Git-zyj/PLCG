#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)105;
short var_4 = (short)32187;
int var_5 = 624302436;
short var_6 = (short)-5581;
unsigned short var_7 = (unsigned short)58871;
unsigned short var_8 = (unsigned short)31004;
int var_9 = 1408564586;
long long int var_10 = 3501884142573277908LL;
signed char var_13 = (signed char)-30;
signed char var_14 = (signed char)-124;
unsigned long long int var_16 = 2293159943164313312ULL;
unsigned int var_17 = 1105081748U;
unsigned short var_19 = (unsigned short)58410;
int zero = 0;
short var_20 = (short)-12142;
unsigned short var_21 = (unsigned short)13769;
unsigned int var_22 = 109947582U;
unsigned short var_23 = (unsigned short)48471;
int var_24 = 1212061116;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
