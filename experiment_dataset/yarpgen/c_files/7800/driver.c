#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 344723419U;
unsigned int var_4 = 3996085944U;
unsigned long long int var_6 = 458271565971415698ULL;
unsigned long long int var_7 = 2334515407365891635ULL;
long long int var_8 = -5412678907256435579LL;
int zero = 0;
unsigned char var_10 = (unsigned char)117;
int var_11 = -369146327;
unsigned int var_12 = 608261698U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
