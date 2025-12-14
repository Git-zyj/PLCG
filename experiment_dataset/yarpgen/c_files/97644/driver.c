#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
int var_4 = -1314631601;
unsigned short var_5 = (unsigned short)19022;
unsigned char var_7 = (unsigned char)217;
int zero = 0;
int var_10 = -989088534;
unsigned short var_11 = (unsigned short)18665;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
