#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1193210223;
int var_7 = 997682356;
short var_9 = (short)8592;
unsigned long long int var_10 = 13551699480232157829ULL;
int zero = 0;
unsigned int var_12 = 3006182400U;
short var_13 = (short)-1617;
short var_14 = (short)-11447;
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
