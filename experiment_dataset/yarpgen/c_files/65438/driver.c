#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2622985209422957213ULL;
short var_1 = (short)16178;
unsigned long long int var_3 = 6145367319074745145ULL;
unsigned long long int var_7 = 8004618423511954822ULL;
unsigned long long int var_8 = 18255942082982955676ULL;
short var_13 = (short)-299;
int var_14 = 264658892;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)18984;
unsigned long long int var_18 = 5548619244952549388ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
