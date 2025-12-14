#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5186931848158263742LL;
int var_5 = -381958365;
signed char var_6 = (signed char)(-127 - 1);
unsigned short var_8 = (unsigned short)46255;
short var_12 = (short)-9824;
int zero = 0;
short var_14 = (short)15370;
int var_15 = -1590817819;
unsigned long long int var_16 = 3146215108960880839ULL;
int var_17 = -296117060;
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
