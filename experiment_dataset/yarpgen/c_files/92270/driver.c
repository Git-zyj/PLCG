#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
short var_3 = (short)-21392;
unsigned long long int var_4 = 7791694401308763633ULL;
long long int var_9 = 2429533745314166899LL;
unsigned short var_10 = (unsigned short)32196;
unsigned long long int var_11 = 3209923899472089504ULL;
int zero = 0;
long long int var_16 = 8986130958631663421LL;
long long int var_17 = 6710805685043737043LL;
unsigned int var_18 = 596567193U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
