#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)2119;
unsigned long long int var_6 = 14724260081404343253ULL;
unsigned long long int var_8 = 18282958032201470802ULL;
short var_12 = (short)1555;
signed char var_16 = (signed char)-28;
short var_17 = (short)21104;
int zero = 0;
short var_19 = (short)-26996;
signed char var_20 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
