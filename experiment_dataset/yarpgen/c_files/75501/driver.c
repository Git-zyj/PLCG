#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
unsigned int var_1 = 107543223U;
unsigned int var_2 = 2702437007U;
unsigned int var_3 = 2719247087U;
long long int var_4 = 6578690581871410781LL;
unsigned int var_5 = 2032035010U;
unsigned char var_6 = (unsigned char)225;
unsigned int var_7 = 838613847U;
unsigned int var_8 = 267853039U;
unsigned int var_9 = 3501684538U;
unsigned int var_10 = 1128841754U;
int zero = 0;
long long int var_11 = -3582104430913410729LL;
unsigned int var_12 = 4185342644U;
unsigned int var_13 = 4215203448U;
unsigned char var_14 = (unsigned char)240;
unsigned short var_15 = (unsigned short)9861;
unsigned long long int var_16 = 10697921747422441880ULL;
unsigned char var_17 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
