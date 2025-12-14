#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28011;
short var_3 = (short)-30340;
short var_4 = (short)29225;
short var_5 = (short)13423;
short var_6 = (short)-1215;
short var_8 = (short)-25216;
unsigned long long int var_9 = 468999456631779366ULL;
int zero = 0;
unsigned long long int var_15 = 18024552727234534718ULL;
unsigned long long int var_16 = 1543633708311115586ULL;
short var_17 = (short)-7137;
short var_18 = (short)31560;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
