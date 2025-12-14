#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
unsigned int var_3 = 2349418794U;
unsigned long long int var_8 = 16933108075657125535ULL;
int zero = 0;
short var_11 = (short)10359;
long long int var_12 = -6930979862109992803LL;
signed char var_13 = (signed char)-48;
unsigned short var_14 = (unsigned short)32849;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
