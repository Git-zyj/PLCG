#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17439257281952149565ULL;
short var_2 = (short)-28774;
int var_4 = 1225534343;
unsigned long long int var_11 = 12962471989978762937ULL;
unsigned char var_15 = (unsigned char)146;
int zero = 0;
unsigned int var_16 = 1067792614U;
unsigned long long int var_17 = 9194678178084892488ULL;
unsigned char var_18 = (unsigned char)133;
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
