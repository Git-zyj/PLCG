#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3730496114U;
long long int var_3 = 2451540995366912660LL;
signed char var_6 = (signed char)86;
signed char var_8 = (signed char)61;
int zero = 0;
signed char var_13 = (signed char)-109;
int var_14 = -593313034;
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
