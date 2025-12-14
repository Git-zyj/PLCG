#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2816305214U;
signed char var_4 = (signed char)-71;
unsigned char var_6 = (unsigned char)97;
long long int var_9 = -6161112648970202684LL;
short var_10 = (short)-2756;
unsigned short var_11 = (unsigned short)59924;
unsigned short var_12 = (unsigned short)50306;
int zero = 0;
int var_13 = 1185619431;
unsigned int var_14 = 271384606U;
int var_15 = 469019666;
int var_16 = 50164262;
short var_17 = (short)27141;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
