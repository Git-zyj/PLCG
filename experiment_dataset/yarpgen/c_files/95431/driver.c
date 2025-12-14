#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 789622234U;
short var_13 = (short)-17860;
int zero = 0;
unsigned int var_14 = 2333719574U;
unsigned long long int var_15 = 17289899855580670680ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
