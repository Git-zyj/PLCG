#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9822259858319704953ULL;
long long int var_3 = -7081760542621490518LL;
unsigned long long int var_7 = 9588140012304473225ULL;
int var_10 = 934730596;
int zero = 0;
short var_12 = (short)-8737;
unsigned long long int var_13 = 4144625293727567709ULL;
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
