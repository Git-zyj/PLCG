#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)107;
long long int var_8 = -7309087680453189943LL;
int zero = 0;
unsigned short var_10 = (unsigned short)16981;
signed char var_11 = (signed char)54;
unsigned int var_12 = 3474252709U;
short var_13 = (short)31636;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
