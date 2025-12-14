#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
unsigned short var_1 = (unsigned short)33486;
int var_2 = -211935798;
unsigned int var_4 = 1821732290U;
unsigned char var_5 = (unsigned char)95;
unsigned long long int var_6 = 17463304755930671507ULL;
long long int var_12 = -3928533295614476969LL;
int zero = 0;
signed char var_17 = (signed char)-15;
signed char var_18 = (signed char)5;
unsigned int var_19 = 2346592208U;
long long int var_20 = 8363108234499723284LL;
unsigned long long int var_21 = 1093575912248622933ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
