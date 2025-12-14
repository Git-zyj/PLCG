#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)158;
unsigned int var_3 = 3808007964U;
long long int var_4 = 4579552080326843200LL;
long long int var_5 = -2427505307554970098LL;
long long int var_7 = 3031108967154361702LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 8609245110470428121LL;
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
