#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)127;
int var_4 = 1318995876;
signed char var_5 = (signed char)-57;
int var_7 = -140987386;
unsigned char var_12 = (unsigned char)48;
int zero = 0;
unsigned char var_20 = (unsigned char)123;
unsigned long long int var_21 = 15952090148077260629ULL;
unsigned int var_22 = 4171190266U;
unsigned long long int var_23 = 17845262293883521638ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
