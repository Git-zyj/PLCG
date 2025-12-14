#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1888448485;
unsigned char var_5 = (unsigned char)218;
signed char var_10 = (signed char)96;
long long int var_13 = -8288155095999942402LL;
int zero = 0;
unsigned short var_16 = (unsigned short)47381;
unsigned long long int var_17 = 16135108911429074229ULL;
short var_18 = (short)-29032;
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
