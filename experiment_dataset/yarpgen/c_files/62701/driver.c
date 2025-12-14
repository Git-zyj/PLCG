#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18960;
int var_1 = -338744606;
unsigned char var_3 = (unsigned char)199;
unsigned short var_4 = (unsigned short)23723;
unsigned short var_5 = (unsigned short)9022;
int var_7 = 1218533492;
_Bool var_8 = (_Bool)1;
long long int var_13 = 4606463627204002431LL;
int zero = 0;
short var_14 = (short)-16064;
int var_15 = 1600562755;
void init() {
}

void checksum() {
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
