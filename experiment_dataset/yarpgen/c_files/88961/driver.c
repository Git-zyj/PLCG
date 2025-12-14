#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9608008313530382158ULL;
unsigned long long int var_1 = 6536351748525578190ULL;
long long int var_10 = 8781704033029402079LL;
int zero = 0;
long long int var_11 = -5846979788729311850LL;
unsigned long long int var_12 = 17348889292899398437ULL;
long long int var_13 = -4682772369576329782LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
