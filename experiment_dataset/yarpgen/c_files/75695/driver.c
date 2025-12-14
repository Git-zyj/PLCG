#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5139;
int var_2 = -88961598;
short var_5 = (short)-28892;
unsigned short var_8 = (unsigned short)23016;
unsigned int var_11 = 2456557696U;
unsigned char var_12 = (unsigned char)172;
int zero = 0;
unsigned long long int var_13 = 4933513052320873312ULL;
unsigned long long int var_14 = 2232284796384799524ULL;
long long int var_15 = 1331358038026371457LL;
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
