#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9641;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 16131031764402238537ULL;
int zero = 0;
signed char var_15 = (signed char)6;
unsigned char var_16 = (unsigned char)222;
void init() {
}

void checksum() {
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
