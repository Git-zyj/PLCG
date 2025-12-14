#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1980714685;
int var_4 = -51550920;
long long int var_13 = -1463443954654707106LL;
long long int var_18 = 3268963850437736552LL;
int zero = 0;
int var_20 = 1955967340;
long long int var_21 = -584660553718358532LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
