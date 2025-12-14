#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1530259299U;
unsigned long long int var_6 = 4692172567811029055ULL;
unsigned short var_9 = (unsigned short)62380;
unsigned long long int var_10 = 16426843414617068779ULL;
unsigned short var_11 = (unsigned short)30834;
int zero = 0;
unsigned char var_14 = (unsigned char)0;
long long int var_15 = -357279075943804996LL;
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
