#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24013;
long long int var_7 = -3188004399749003983LL;
unsigned long long int var_10 = 12067552601981487515ULL;
unsigned long long int var_14 = 7094555799265439210ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)96;
long long int var_19 = 8780660999189219041LL;
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
