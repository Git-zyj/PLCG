#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)38796;
long long int var_8 = 6857174905175993716LL;
int var_9 = 1852165004;
int zero = 0;
unsigned char var_10 = (unsigned char)222;
unsigned char var_11 = (unsigned char)251;
unsigned char var_12 = (unsigned char)233;
unsigned short var_13 = (unsigned short)9499;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
