#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2035160122;
unsigned char var_8 = (unsigned char)142;
long long int var_9 = -2688333833675944147LL;
unsigned long long int var_12 = 5575220297267782690ULL;
unsigned long long int var_14 = 16031004761234046756ULL;
short var_16 = (short)-27889;
int zero = 0;
int var_18 = 1004567878;
long long int var_19 = -2384252160641831131LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
