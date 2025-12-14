#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 288223804806065524ULL;
long long int var_6 = -8290527264151718040LL;
long long int var_9 = 7135776506268986427LL;
unsigned long long int var_10 = 17015014298005087482ULL;
long long int var_11 = -6060641748465039037LL;
int zero = 0;
unsigned long long int var_17 = 13071400037509922383ULL;
long long int var_18 = 3131414521543590272LL;
long long int var_19 = 3805612090334253258LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
