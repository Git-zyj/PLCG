#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)150;
unsigned char var_5 = (unsigned char)105;
short var_7 = (short)-24776;
long long int var_9 = -5043811839366015022LL;
short var_10 = (short)-17575;
unsigned char var_14 = (unsigned char)109;
int zero = 0;
long long int var_15 = 4938395714639721126LL;
long long int var_16 = 4291126755731589398LL;
unsigned short var_17 = (unsigned short)52139;
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
