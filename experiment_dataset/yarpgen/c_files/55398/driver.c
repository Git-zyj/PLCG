#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2535120648U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 8816220527089730713ULL;
unsigned short var_9 = (unsigned short)37957;
int zero = 0;
int var_10 = 47502835;
unsigned long long int var_11 = 8638355687800335297ULL;
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
