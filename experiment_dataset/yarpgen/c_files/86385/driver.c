#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3141674160U;
long long int var_4 = -3242160342219981294LL;
unsigned short var_6 = (unsigned short)59874;
unsigned long long int var_7 = 11140145693172217503ULL;
unsigned short var_16 = (unsigned short)25792;
int zero = 0;
unsigned long long int var_17 = 13139334713984594986ULL;
unsigned long long int var_18 = 12596721234756760951ULL;
void init() {
}

void checksum() {
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
