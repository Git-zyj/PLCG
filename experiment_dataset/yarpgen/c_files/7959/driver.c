#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44149;
unsigned short var_1 = (unsigned short)50746;
unsigned short var_9 = (unsigned short)31774;
int zero = 0;
signed char var_10 = (signed char)-49;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 12558733199985530263ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
