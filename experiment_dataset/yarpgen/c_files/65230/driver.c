#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2946383267486927589ULL;
long long int var_2 = 3438987699729107223LL;
unsigned short var_7 = (unsigned short)48016;
unsigned int var_9 = 3762124759U;
int zero = 0;
unsigned char var_15 = (unsigned char)151;
long long int var_16 = 2313920233345480162LL;
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
