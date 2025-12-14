#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5872125609778456390ULL;
unsigned short var_8 = (unsigned short)6465;
signed char var_11 = (signed char)-17;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 4774025045219226780ULL;
short var_16 = (short)11297;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
