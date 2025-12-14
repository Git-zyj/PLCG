#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
short var_9 = (short)-27481;
signed char var_10 = (signed char)73;
int var_12 = 791879808;
int zero = 0;
short var_16 = (short)-30985;
signed char var_17 = (signed char)95;
short var_18 = (short)32692;
signed char var_19 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
