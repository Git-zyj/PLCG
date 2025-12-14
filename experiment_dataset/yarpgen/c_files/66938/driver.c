#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2828;
unsigned short var_5 = (unsigned short)51794;
unsigned long long int var_6 = 13570315169287336998ULL;
unsigned char var_11 = (unsigned char)159;
int zero = 0;
unsigned long long int var_12 = 12043704771648869579ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
