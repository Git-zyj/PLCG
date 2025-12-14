#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)0;
unsigned int var_7 = 3940877178U;
int var_10 = 1544534782;
signed char var_12 = (signed char)56;
int zero = 0;
int var_13 = 1074123497;
long long int var_14 = -219852632079660005LL;
signed char var_15 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
