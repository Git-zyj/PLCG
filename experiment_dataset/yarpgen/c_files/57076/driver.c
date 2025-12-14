#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17387331937169132555ULL;
unsigned short var_4 = (unsigned short)36874;
int var_8 = -1736421815;
int var_9 = 1334032682;
int zero = 0;
unsigned short var_12 = (unsigned short)57259;
long long int var_13 = -4530767533803885409LL;
unsigned char var_14 = (unsigned char)165;
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
