#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3022614375458589338ULL;
unsigned long long int var_4 = 9957207075881037393ULL;
unsigned long long int var_11 = 8368506097836789523ULL;
unsigned long long int var_13 = 2390312290564988162ULL;
unsigned long long int var_14 = 9841279847429603974ULL;
int zero = 0;
unsigned long long int var_17 = 18067405195316344754ULL;
unsigned long long int var_18 = 1955388637124156056ULL;
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
