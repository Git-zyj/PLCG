#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 79293242671974852ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 17565374323995492007ULL;
int zero = 0;
unsigned long long int var_10 = 12854614500367309960ULL;
unsigned int var_11 = 145062498U;
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
