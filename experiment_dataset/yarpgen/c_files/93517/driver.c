#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3188363602U;
int var_3 = 1971227648;
int var_5 = -324083164;
signed char var_6 = (signed char)103;
signed char var_7 = (signed char)-122;
int var_8 = -156581031;
int zero = 0;
signed char var_11 = (signed char)63;
int var_12 = -1661920090;
signed char var_13 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
