#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)172;
unsigned int var_2 = 1299409030U;
unsigned int var_7 = 3445057383U;
unsigned int var_8 = 407738200U;
int var_10 = 645794744;
int var_14 = -1420500045;
int zero = 0;
int var_15 = -70411473;
unsigned char var_16 = (unsigned char)57;
int var_17 = 654695966;
unsigned char var_18 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
