#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31040;
signed char var_6 = (signed char)-50;
unsigned long long int var_8 = 12516686064851766077ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)64416;
unsigned long long int var_14 = 5237968846427265475ULL;
void init() {
}

void checksum() {
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
