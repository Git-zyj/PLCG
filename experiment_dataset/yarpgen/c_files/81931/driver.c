#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-26;
unsigned long long int var_5 = 11185840726631772309ULL;
unsigned char var_8 = (unsigned char)154;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-81;
unsigned int var_14 = 3780393035U;
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
