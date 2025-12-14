#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30880;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 13329958283701721354ULL;
unsigned short var_7 = (unsigned short)33882;
unsigned short var_11 = (unsigned short)6037;
long long int var_14 = -7595282305000577220LL;
unsigned short var_15 = (unsigned short)36205;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 397973290;
int var_22 = -380207468;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
