#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-12;
unsigned int var_8 = 1070625658U;
unsigned int var_11 = 809886088U;
int zero = 0;
signed char var_12 = (signed char)99;
signed char var_13 = (signed char)-89;
signed char var_14 = (signed char)14;
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
