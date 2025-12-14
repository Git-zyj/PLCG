#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29470;
signed char var_2 = (signed char)-37;
unsigned long long int var_3 = 18312592257130836348ULL;
short var_5 = (short)-7280;
short var_11 = (short)24346;
unsigned int var_13 = 2075545546U;
int zero = 0;
short var_15 = (short)8708;
long long int var_16 = -2666543247850117507LL;
unsigned long long int var_17 = 17839275453934125621ULL;
unsigned short var_18 = (unsigned short)6002;
unsigned char var_19 = (unsigned char)221;
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
