#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-121;
int var_6 = 482976503;
signed char var_7 = (signed char)-78;
unsigned char var_9 = (unsigned char)197;
int zero = 0;
int var_15 = -1201716298;
long long int var_16 = 4321072662577609899LL;
void init() {
}

void checksum() {
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
