#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1770854143;
short var_8 = (short)-1012;
short var_9 = (short)4705;
int var_10 = 459384071;
short var_13 = (short)28524;
long long int var_17 = -4859414648420602680LL;
short var_18 = (short)-4991;
unsigned short var_19 = (unsigned short)27080;
int zero = 0;
unsigned short var_20 = (unsigned short)46735;
unsigned long long int var_21 = 9008638502001399945ULL;
short var_22 = (short)16688;
unsigned int var_23 = 51525027U;
unsigned int var_24 = 743865532U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
