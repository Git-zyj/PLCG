#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9344690977870693189ULL;
unsigned int var_4 = 831135110U;
signed char var_5 = (signed char)-117;
long long int var_6 = -8841730912350080950LL;
unsigned long long int var_9 = 514922567045709134ULL;
int zero = 0;
int var_10 = -152369641;
short var_11 = (short)30630;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
