#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6516325343698695851ULL;
int var_3 = -554674658;
unsigned long long int var_12 = 6625263513715487085ULL;
unsigned long long int var_13 = 2390447543670487400ULL;
int zero = 0;
unsigned long long int var_14 = 14671879374537061887ULL;
unsigned long long int var_15 = 421181714724256510ULL;
unsigned long long int var_16 = 18010648337110818003ULL;
int var_17 = 113354852;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
