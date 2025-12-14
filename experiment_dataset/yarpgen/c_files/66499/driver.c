#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 606194273;
int var_7 = -1710360731;
int zero = 0;
signed char var_12 = (signed char)-38;
unsigned short var_13 = (unsigned short)21289;
long long int var_14 = -425920307545180244LL;
short var_15 = (short)1394;
short var_16 = (short)10610;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
