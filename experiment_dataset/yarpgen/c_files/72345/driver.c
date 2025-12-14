#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-13;
unsigned short var_4 = (unsigned short)41646;
unsigned long long int var_6 = 5592391857557469819ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 863215901U;
signed char var_16 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
