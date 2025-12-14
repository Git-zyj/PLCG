#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47226;
unsigned long long int var_3 = 4823907557487360551ULL;
unsigned long long int var_4 = 4696315317217372566ULL;
int var_5 = -1698950701;
signed char var_6 = (signed char)76;
unsigned char var_8 = (unsigned char)109;
unsigned short var_9 = (unsigned short)60923;
unsigned int var_10 = 21320675U;
_Bool var_11 = (_Bool)1;
int var_12 = -1537785687;
long long int var_14 = -7062108957903171661LL;
int zero = 0;
unsigned int var_15 = 2736557459U;
int var_16 = 259188589;
long long int var_17 = 5063769395033938943LL;
void init() {
}

void checksum() {
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
