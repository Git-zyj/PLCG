#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1984607876;
long long int var_10 = -4766162116640059978LL;
long long int var_11 = 4399608069436426425LL;
int zero = 0;
unsigned char var_12 = (unsigned char)206;
signed char var_13 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
