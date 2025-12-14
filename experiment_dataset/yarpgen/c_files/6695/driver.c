#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 7741127706948627030ULL;
short var_10 = (short)24695;
unsigned int var_13 = 2590580795U;
signed char var_14 = (signed char)-1;
unsigned long long int var_17 = 15279539552428638640ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)41993;
_Bool var_19 = (_Bool)1;
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
