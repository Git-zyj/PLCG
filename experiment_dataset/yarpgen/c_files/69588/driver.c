#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5466796723884334094LL;
unsigned int var_13 = 1390002971U;
int zero = 0;
unsigned short var_16 = (unsigned short)1147;
unsigned short var_17 = (unsigned short)47118;
unsigned char var_18 = (unsigned char)199;
int var_19 = 406300206;
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
