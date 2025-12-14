#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11105297213975022011ULL;
unsigned short var_3 = (unsigned short)29047;
unsigned char var_4 = (unsigned char)76;
unsigned long long int var_8 = 2580081935951097346ULL;
unsigned long long int var_9 = 5679585238663589566ULL;
unsigned int var_10 = 1948165616U;
signed char var_12 = (signed char)24;
int zero = 0;
int var_14 = -929853960;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)89;
long long int var_17 = 6810493311405654069LL;
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
