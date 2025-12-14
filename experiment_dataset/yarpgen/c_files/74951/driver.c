#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58323;
signed char var_2 = (signed char)-88;
long long int var_3 = 3800358297981834376LL;
unsigned int var_4 = 3254964542U;
short var_5 = (short)-16166;
unsigned short var_6 = (unsigned short)49208;
long long int var_9 = 6772735159500198585LL;
unsigned short var_13 = (unsigned short)50991;
int zero = 0;
unsigned int var_15 = 701462014U;
signed char var_16 = (signed char)-100;
unsigned short var_17 = (unsigned short)41898;
short var_18 = (short)-13740;
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
