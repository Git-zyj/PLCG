#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15381;
unsigned char var_2 = (unsigned char)30;
long long int var_6 = -6933244433974414386LL;
int zero = 0;
unsigned char var_18 = (unsigned char)237;
long long int var_19 = -2020470440285827574LL;
void init() {
}

void checksum() {
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
