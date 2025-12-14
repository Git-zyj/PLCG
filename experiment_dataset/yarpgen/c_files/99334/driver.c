#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)3;
unsigned int var_13 = 21605445U;
unsigned int var_15 = 3443882541U;
signed char var_18 = (signed char)-5;
int zero = 0;
unsigned int var_19 = 3982138232U;
short var_20 = (short)-13111;
unsigned long long int var_21 = 12782863106551812008ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
