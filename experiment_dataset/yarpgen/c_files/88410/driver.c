#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2052872756U;
unsigned long long int var_4 = 8832487049046932507ULL;
short var_5 = (short)348;
short var_8 = (short)32292;
unsigned int var_11 = 2673058184U;
unsigned int var_12 = 686535117U;
int zero = 0;
short var_13 = (short)-6446;
signed char var_14 = (signed char)-36;
unsigned char var_15 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
