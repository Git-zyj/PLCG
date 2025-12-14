#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 963121228;
short var_3 = (short)1216;
short var_4 = (short)-5720;
short var_6 = (short)-28473;
short var_7 = (short)-1000;
short var_8 = (short)-7979;
int zero = 0;
int var_10 = 776203702;
short var_11 = (short)22128;
short var_12 = (short)7306;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
