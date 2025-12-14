#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1288767764;
unsigned int var_10 = 2505600784U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)41735;
unsigned short var_15 = (unsigned short)31021;
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
