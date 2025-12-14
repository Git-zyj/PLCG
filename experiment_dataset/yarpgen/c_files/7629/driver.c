#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -991151941;
unsigned long long int var_10 = 9903850898185446497ULL;
long long int var_13 = -58715767858027692LL;
int zero = 0;
unsigned char var_17 = (unsigned char)12;
unsigned char var_18 = (unsigned char)140;
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
