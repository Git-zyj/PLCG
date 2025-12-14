#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6898480953699884427LL;
unsigned char var_4 = (unsigned char)130;
unsigned char var_10 = (unsigned char)32;
unsigned int var_18 = 1096436392U;
int zero = 0;
unsigned char var_19 = (unsigned char)30;
int var_20 = 1814209314;
long long int var_21 = 3890202194040918232LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
