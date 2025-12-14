#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1504143941U;
unsigned long long int var_1 = 11888161476662439792ULL;
signed char var_3 = (signed char)-122;
short var_7 = (short)-19196;
short var_8 = (short)19739;
int var_10 = 1252592173;
int zero = 0;
short var_12 = (short)15240;
long long int var_13 = 8473250598627481856LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
