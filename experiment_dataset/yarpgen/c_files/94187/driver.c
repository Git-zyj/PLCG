#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3554758182U;
long long int var_2 = 7006979461310103284LL;
unsigned int var_3 = 1374269904U;
unsigned short var_7 = (unsigned short)37631;
long long int var_8 = 143605727202214087LL;
long long int var_10 = 6907426805461040337LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 2077883931;
void init() {
}

void checksum() {
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
