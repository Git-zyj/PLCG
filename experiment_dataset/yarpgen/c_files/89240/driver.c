#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11195761782373395960ULL;
unsigned long long int var_7 = 9839702816274061221ULL;
long long int var_10 = -1473703493671722703LL;
int zero = 0;
signed char var_16 = (signed char)53;
signed char var_17 = (signed char)73;
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
