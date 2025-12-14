#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
int var_2 = -780454658;
long long int var_10 = -651418426675658657LL;
int zero = 0;
unsigned char var_13 = (unsigned char)100;
unsigned char var_14 = (unsigned char)24;
long long int var_15 = 5907164390784590981LL;
long long int var_16 = -1141925516305965437LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
