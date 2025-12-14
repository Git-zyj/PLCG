#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)30;
_Bool var_8 = (_Bool)0;
long long int var_13 = 2515299206239144147LL;
int zero = 0;
short var_17 = (short)-25355;
unsigned int var_18 = 4088610869U;
unsigned short var_19 = (unsigned short)26859;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
