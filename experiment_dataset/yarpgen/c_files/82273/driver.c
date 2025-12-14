#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3681100311682634739LL;
unsigned long long int var_2 = 5672313782161498997ULL;
unsigned int var_3 = 2236460776U;
unsigned long long int var_5 = 18286458741645569674ULL;
unsigned char var_6 = (unsigned char)194;
int var_7 = -1083347952;
signed char var_8 = (signed char)5;
long long int var_9 = -782930832887209703LL;
unsigned short var_10 = (unsigned short)48718;
short var_11 = (short)4113;
unsigned long long int var_12 = 2152228129727691652ULL;
long long int var_13 = 2887063088564060819LL;
int var_14 = -1872387782;
int zero = 0;
unsigned long long int var_16 = 2703090815035902404ULL;
unsigned int var_17 = 2033409192U;
unsigned int var_18 = 3538097656U;
long long int var_19 = -2892340493680037290LL;
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
