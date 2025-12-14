#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14930584106927288202ULL;
unsigned int var_4 = 1579532931U;
unsigned char var_5 = (unsigned char)246;
unsigned long long int var_6 = 9327446725898498716ULL;
long long int var_7 = -2438512934327781609LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3232134168U;
int zero = 0;
unsigned int var_11 = 2965408091U;
unsigned short var_12 = (unsigned short)33051;
void init() {
}

void checksum() {
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
