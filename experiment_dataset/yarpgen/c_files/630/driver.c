#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6448558796293724867LL;
unsigned int var_7 = 1143510362U;
unsigned long long int var_9 = 526927989840422857ULL;
int zero = 0;
signed char var_18 = (signed char)36;
unsigned short var_19 = (unsigned short)59314;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
