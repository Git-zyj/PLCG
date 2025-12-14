#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 497257149575993515LL;
unsigned long long int var_8 = 8392413659979568666ULL;
unsigned int var_9 = 1490341430U;
int zero = 0;
unsigned long long int var_19 = 12996235759508205108ULL;
unsigned long long int var_20 = 11620911404002428686ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
