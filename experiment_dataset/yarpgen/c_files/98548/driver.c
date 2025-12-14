#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)28;
short var_2 = (short)-11913;
short var_3 = (short)22585;
unsigned int var_14 = 676191962U;
int var_17 = -1613781933;
int zero = 0;
short var_18 = (short)-12298;
int var_19 = -403186432;
long long int var_20 = -2903163675566344179LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
