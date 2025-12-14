#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29699;
long long int var_6 = 463112236619105001LL;
short var_10 = (short)-27050;
int zero = 0;
unsigned int var_13 = 532897932U;
long long int var_14 = 1955044200326683758LL;
unsigned long long int var_15 = 7967875395771190787ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
