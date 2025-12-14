#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
unsigned int var_2 = 3371480106U;
int var_7 = -1739179538;
unsigned long long int var_8 = 15105206050808324116ULL;
unsigned int var_13 = 3737794800U;
int zero = 0;
int var_14 = 2023365625;
unsigned char var_15 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
