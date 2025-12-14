#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned char var_1 = (unsigned char)230;
long long int var_2 = -2327324810148328571LL;
unsigned char var_3 = (unsigned char)141;
unsigned short var_6 = (unsigned short)35994;
unsigned short var_9 = (unsigned short)34162;
int zero = 0;
short var_14 = (short)-28417;
unsigned long long int var_15 = 9273017808680182872ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
