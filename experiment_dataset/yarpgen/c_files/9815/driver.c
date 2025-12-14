#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40115;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2157364285U;
int zero = 0;
short var_11 = (short)11995;
int var_12 = -732121355;
unsigned short var_13 = (unsigned short)14550;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
