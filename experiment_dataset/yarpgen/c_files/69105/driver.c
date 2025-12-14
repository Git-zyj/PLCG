#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -598273977177065019LL;
long long int var_4 = 3815277279971024876LL;
long long int var_7 = 2036772710933896818LL;
int zero = 0;
long long int var_16 = 7945670803871180874LL;
int var_17 = 1952925842;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
