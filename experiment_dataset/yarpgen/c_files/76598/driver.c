#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)150;
unsigned long long int var_4 = 13601927091079482294ULL;
unsigned int var_10 = 1202855280U;
long long int var_12 = -8079172700018916752LL;
int zero = 0;
long long int var_20 = 6635817567696236993LL;
unsigned char var_21 = (unsigned char)233;
unsigned char var_22 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
