#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)95;
long long int var_4 = 7444692336289872532LL;
unsigned short var_5 = (unsigned short)21150;
long long int var_7 = 3406271884756867128LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)8388;
_Bool var_15 = (_Bool)1;
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
