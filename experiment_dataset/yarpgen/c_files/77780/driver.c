#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 895126105U;
signed char var_2 = (signed char)107;
unsigned int var_9 = 2307015750U;
long long int var_10 = -3277273429951692479LL;
long long int var_16 = -6984790201807873793LL;
int zero = 0;
short var_20 = (short)12273;
int var_21 = 1030459889;
long long int var_22 = 7742707552474915364LL;
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
