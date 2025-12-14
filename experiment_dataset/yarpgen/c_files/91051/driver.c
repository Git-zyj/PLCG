#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1187;
int var_5 = -451826375;
unsigned long long int var_6 = 18278386008704140063ULL;
int var_7 = -532517194;
long long int var_10 = 4113242964660450903LL;
int zero = 0;
signed char var_11 = (signed char)62;
unsigned char var_12 = (unsigned char)41;
unsigned char var_13 = (unsigned char)92;
unsigned char var_14 = (unsigned char)230;
int var_15 = 1514819399;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
