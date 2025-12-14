#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)53;
unsigned int var_3 = 598486566U;
unsigned char var_7 = (unsigned char)55;
unsigned int var_8 = 4051534337U;
int zero = 0;
signed char var_12 = (signed char)122;
long long int var_13 = 5168311300846842864LL;
unsigned short var_14 = (unsigned short)8732;
unsigned int var_15 = 1627883787U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
