#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14491224998691567275ULL;
unsigned char var_5 = (unsigned char)145;
int zero = 0;
unsigned long long int var_15 = 2247640687562884796ULL;
unsigned long long int var_16 = 7108101811931388385ULL;
unsigned short var_17 = (unsigned short)48437;
unsigned short var_18 = (unsigned short)31285;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
