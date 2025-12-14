#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)114;
unsigned int var_3 = 993850605U;
signed char var_6 = (signed char)98;
int zero = 0;
unsigned long long int var_10 = 10882275026638301762ULL;
signed char var_11 = (signed char)77;
unsigned int var_12 = 2555252469U;
unsigned int var_13 = 488940296U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
