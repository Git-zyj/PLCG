#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
unsigned short var_4 = (unsigned short)47006;
unsigned short var_8 = (unsigned short)44649;
unsigned long long int var_15 = 10385469701626847815ULL;
int zero = 0;
unsigned int var_18 = 2986212597U;
unsigned long long int var_19 = 10343426890072397822ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
