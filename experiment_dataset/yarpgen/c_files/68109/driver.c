#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-121;
long long int var_7 = 8515353720096225403LL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)230;
int zero = 0;
short var_15 = (short)-13183;
short var_16 = (short)-28027;
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
