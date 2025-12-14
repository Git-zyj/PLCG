#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10726397506583442555ULL;
unsigned int var_5 = 720953234U;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_14 = 7003877220187614086LL;
unsigned short var_15 = (unsigned short)33410;
void init() {
}

void checksum() {
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
