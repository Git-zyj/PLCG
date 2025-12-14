#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 17841032;
unsigned short var_1 = (unsigned short)30255;
short var_2 = (short)29968;
unsigned long long int var_5 = 9632179561371227204ULL;
_Bool var_6 = (_Bool)0;
int var_7 = 1069873863;
unsigned char var_8 = (unsigned char)222;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 9498345445825912051ULL;
int zero = 0;
unsigned long long int var_12 = 17244011442843931823ULL;
long long int var_13 = 6277457317774385151LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
