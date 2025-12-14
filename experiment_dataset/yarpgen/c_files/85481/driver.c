#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 527004137U;
long long int var_7 = 4593894407620335993LL;
short var_10 = (short)-31508;
short var_15 = (short)26748;
int var_18 = -565674022;
int zero = 0;
short var_19 = (short)-31911;
int var_20 = -947527726;
unsigned char var_21 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
