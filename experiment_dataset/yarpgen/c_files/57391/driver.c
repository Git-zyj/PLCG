#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14986022445035416732ULL;
unsigned long long int var_1 = 5550196579529545089ULL;
int var_2 = -370938104;
int var_4 = -1373993632;
int var_5 = -1195309323;
int zero = 0;
int var_17 = -727993402;
unsigned int var_18 = 1713061094U;
unsigned long long int var_19 = 2554674103994237124ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
