#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3849111521370223888ULL;
unsigned char var_3 = (unsigned char)183;
unsigned char var_4 = (unsigned char)84;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)238;
int zero = 0;
short var_20 = (short)-17436;
unsigned int var_21 = 146719244U;
void init() {
}

void checksum() {
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
