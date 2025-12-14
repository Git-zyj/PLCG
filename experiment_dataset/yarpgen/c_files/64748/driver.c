#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11126230946813458241ULL;
unsigned long long int var_3 = 8202578578948290394ULL;
unsigned long long int var_6 = 13532227035174497759ULL;
int zero = 0;
unsigned long long int var_10 = 4704041514727394193ULL;
unsigned long long int var_11 = 12631911710158256510ULL;
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
