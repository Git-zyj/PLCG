#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3215090731613357513LL;
unsigned short var_5 = (unsigned short)31747;
unsigned short var_6 = (unsigned short)64489;
unsigned int var_8 = 2065917813U;
short var_9 = (short)-17048;
long long int var_10 = -3682028466272335992LL;
long long int var_11 = -3807177521688723657LL;
unsigned int var_14 = 787941064U;
int zero = 0;
unsigned short var_15 = (unsigned short)4273;
short var_16 = (short)-12581;
int var_17 = -177817428;
int var_18 = 1553700687;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
