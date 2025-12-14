#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 9618814420840912330ULL;
unsigned long long int var_10 = 14896282459541103023ULL;
unsigned short var_12 = (unsigned short)20056;
int zero = 0;
unsigned long long int var_13 = 3221276839925624126ULL;
unsigned short var_14 = (unsigned short)37831;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
