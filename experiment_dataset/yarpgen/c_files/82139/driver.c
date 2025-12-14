#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)104;
long long int var_4 = 4616119638199671024LL;
long long int var_5 = 2269744152013823268LL;
int zero = 0;
unsigned char var_20 = (unsigned char)240;
long long int var_21 = 4931043834490638668LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
