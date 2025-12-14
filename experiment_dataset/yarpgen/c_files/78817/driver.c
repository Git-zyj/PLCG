#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)170;
int var_2 = -571615518;
int var_3 = -1248994182;
int var_5 = 548263046;
int var_6 = 1374932078;
int var_14 = 157113978;
int zero = 0;
int var_17 = 1020377803;
unsigned char var_18 = (unsigned char)180;
int var_19 = -448325627;
void init() {
}

void checksum() {
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
