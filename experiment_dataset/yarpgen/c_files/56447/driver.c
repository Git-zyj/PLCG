#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4306340752848655203LL;
unsigned int var_15 = 1248499056U;
int var_16 = 455667363;
int zero = 0;
unsigned long long int var_17 = 10952997036274199300ULL;
short var_18 = (short)17203;
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
