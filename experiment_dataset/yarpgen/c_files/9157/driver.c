#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)28656;
signed char var_13 = (signed char)-108;
unsigned short var_14 = (unsigned short)2414;
unsigned short var_15 = (unsigned short)18328;
int zero = 0;
signed char var_16 = (signed char)-76;
long long int var_17 = 907081887966606143LL;
unsigned short var_18 = (unsigned short)33605;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
