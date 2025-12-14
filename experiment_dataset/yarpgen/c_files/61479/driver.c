#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
long long int var_5 = 5161895521957812745LL;
unsigned short var_6 = (unsigned short)50840;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 10484736975430363018ULL;
unsigned int var_11 = 2117146939U;
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
