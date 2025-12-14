#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -138409108;
long long int var_2 = 8249014383450823778LL;
unsigned long long int var_6 = 14089757012242718051ULL;
unsigned char var_8 = (unsigned char)88;
unsigned int var_9 = 3445881022U;
int zero = 0;
unsigned short var_13 = (unsigned short)21304;
unsigned short var_14 = (unsigned short)15812;
unsigned int var_15 = 746688026U;
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
