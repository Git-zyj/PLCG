#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 630855810;
int var_5 = 2078434644;
short var_7 = (short)30792;
unsigned short var_9 = (unsigned short)26301;
unsigned int var_10 = 3981575050U;
int zero = 0;
unsigned long long int var_11 = 7549460472078331995ULL;
unsigned int var_12 = 2733635215U;
unsigned long long int var_13 = 3256733714953798784ULL;
unsigned long long int var_14 = 1659391193013866949ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
