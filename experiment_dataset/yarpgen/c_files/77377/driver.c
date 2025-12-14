#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9372;
int var_3 = 105026795;
unsigned long long int var_9 = 2347617910693629568ULL;
long long int var_12 = 8265652824904922363LL;
int zero = 0;
int var_14 = -308911098;
int var_15 = -2145748273;
long long int var_16 = -1390900794288662737LL;
unsigned int var_17 = 2811905698U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
