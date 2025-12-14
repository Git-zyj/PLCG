#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)21;
unsigned long long int var_4 = 14305318069345463729ULL;
long long int var_8 = -6376937175688405147LL;
unsigned char var_11 = (unsigned char)71;
int zero = 0;
short var_12 = (short)-5912;
long long int var_13 = -6663128664320032809LL;
long long int var_14 = -2569839695811265819LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
