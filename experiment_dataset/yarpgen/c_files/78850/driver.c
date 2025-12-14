#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)7576;
unsigned long long int var_10 = 7267945643020272842ULL;
unsigned short var_11 = (unsigned short)48016;
int zero = 0;
long long int var_12 = 6500377729342217326LL;
unsigned char var_13 = (unsigned char)197;
unsigned long long int var_14 = 3507548557298132067ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
