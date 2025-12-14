#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63832;
long long int var_1 = 3066693665280825590LL;
unsigned long long int var_4 = 4784609214498693974ULL;
unsigned int var_7 = 1783487887U;
int zero = 0;
short var_18 = (short)-26155;
unsigned long long int var_19 = 15366223871741369634ULL;
signed char var_20 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
