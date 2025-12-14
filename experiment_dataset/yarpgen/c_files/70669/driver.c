#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1404545143U;
unsigned long long int var_1 = 17499121345446574684ULL;
long long int var_3 = 2796624078014254587LL;
unsigned short var_5 = (unsigned short)3191;
signed char var_7 = (signed char)-94;
unsigned int var_8 = 2303903203U;
unsigned short var_9 = (unsigned short)10575;
int zero = 0;
short var_11 = (short)-24955;
unsigned int var_12 = 1980976478U;
short var_13 = (short)-8930;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
