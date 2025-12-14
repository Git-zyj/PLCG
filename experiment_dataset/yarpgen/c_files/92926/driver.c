#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2615611336U;
unsigned long long int var_6 = 17918603766130865622ULL;
long long int var_7 = 3433873694557510159LL;
unsigned long long int var_10 = 8268406740974031575ULL;
unsigned long long int var_11 = 3511901386301677457ULL;
unsigned int var_12 = 3630722624U;
long long int var_13 = 8278878804578054342LL;
unsigned short var_14 = (unsigned short)19237;
signed char var_16 = (signed char)-81;
int zero = 0;
unsigned long long int var_17 = 221944553655583071ULL;
long long int var_18 = 5843819340806738937LL;
void init() {
}

void checksum() {
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
