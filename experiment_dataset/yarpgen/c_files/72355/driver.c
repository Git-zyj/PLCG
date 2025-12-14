#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2584;
unsigned long long int var_9 = 8151401054598793468ULL;
int zero = 0;
unsigned int var_13 = 2442052814U;
_Bool var_14 = (_Bool)0;
long long int var_15 = 4868419369372174811LL;
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
