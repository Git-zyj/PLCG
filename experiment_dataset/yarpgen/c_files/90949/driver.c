#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1883030266;
unsigned short var_3 = (unsigned short)15779;
unsigned long long int var_4 = 15116853613360917857ULL;
unsigned char var_6 = (unsigned char)94;
int var_8 = 2091843019;
int var_9 = 497728889;
int zero = 0;
unsigned short var_10 = (unsigned short)34661;
int var_11 = 1844850119;
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
