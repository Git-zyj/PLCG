#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-27;
unsigned long long int var_4 = 11098091219856245988ULL;
short var_9 = (short)-2747;
int var_12 = 612422825;
int zero = 0;
unsigned short var_14 = (unsigned short)56199;
signed char var_15 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
