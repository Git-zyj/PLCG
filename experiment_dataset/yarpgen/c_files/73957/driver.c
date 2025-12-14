#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13901748496097280236ULL;
unsigned char var_5 = (unsigned char)16;
short var_6 = (short)-22680;
unsigned int var_9 = 1770811898U;
int zero = 0;
unsigned short var_12 = (unsigned short)9173;
int var_13 = 642980412;
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
