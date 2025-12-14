#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 549317677;
signed char var_3 = (signed char)55;
unsigned short var_16 = (unsigned short)63783;
unsigned char var_17 = (unsigned char)19;
int zero = 0;
signed char var_18 = (signed char)65;
signed char var_19 = (signed char)-94;
int var_20 = 1265330422;
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
