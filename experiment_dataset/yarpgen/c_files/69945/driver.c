#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8682691275613286061LL;
int var_4 = 966036141;
unsigned long long int var_5 = 16091261285770084206ULL;
int var_8 = -582462138;
signed char var_9 = (signed char)-100;
signed char var_10 = (signed char)-115;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -1307042297977982170LL;
void init() {
}

void checksum() {
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
