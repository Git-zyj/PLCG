#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5288754415795654357ULL;
unsigned long long int var_3 = 3891846003302208535ULL;
unsigned long long int var_4 = 5049940003099537016ULL;
unsigned long long int var_5 = 10935325013066395274ULL;
signed char var_11 = (signed char)-31;
int zero = 0;
unsigned long long int var_12 = 3198588624971925268ULL;
signed char var_13 = (signed char)47;
unsigned long long int var_14 = 6628591977816519545ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
