#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59797;
long long int var_2 = -237471550785543224LL;
int var_8 = -2073354637;
int zero = 0;
unsigned long long int var_10 = 15276293043560161409ULL;
unsigned char var_11 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
