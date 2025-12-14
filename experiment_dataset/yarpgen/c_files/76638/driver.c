#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2247014135U;
unsigned long long int var_1 = 4688710055877327647ULL;
unsigned short var_3 = (unsigned short)42084;
short var_4 = (short)967;
signed char var_8 = (signed char)126;
signed char var_9 = (signed char)-51;
unsigned short var_11 = (unsigned short)36141;
int zero = 0;
unsigned short var_12 = (unsigned short)34762;
int var_13 = 920673535;
void init() {
}

void checksum() {
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
