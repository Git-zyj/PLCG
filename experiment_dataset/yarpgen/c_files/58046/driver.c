#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1207823356;
long long int var_16 = 8824222552429918785LL;
int zero = 0;
long long int var_18 = 783768955461379868LL;
int var_19 = 1967926042;
unsigned short var_20 = (unsigned short)12064;
long long int var_21 = -150501495207037842LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
