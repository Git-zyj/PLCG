#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17837;
int var_7 = -362987488;
long long int var_11 = 2990430395930419570LL;
int var_13 = 1514312457;
signed char var_15 = (signed char)73;
int zero = 0;
signed char var_17 = (signed char)49;
long long int var_18 = -4263330904083215418LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
