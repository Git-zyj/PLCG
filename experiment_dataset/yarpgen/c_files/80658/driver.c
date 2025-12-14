#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1215965583;
signed char var_5 = (signed char)3;
unsigned short var_7 = (unsigned short)35471;
int var_9 = 1057847956;
int var_11 = -1746641538;
int zero = 0;
signed char var_14 = (signed char)73;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 3899105722402194510ULL;
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
