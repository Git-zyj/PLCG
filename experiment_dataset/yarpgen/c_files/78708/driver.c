#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3949067920U;
short var_4 = (short)19137;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)36;
unsigned short var_9 = (unsigned short)4244;
short var_10 = (short)-21932;
unsigned long long int var_11 = 16831731893801936980ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3930443147U;
unsigned char var_14 = (unsigned char)190;
void init() {
}

void checksum() {
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
