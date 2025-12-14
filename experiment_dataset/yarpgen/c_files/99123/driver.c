#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 891365434;
unsigned long long int var_1 = 1928171770934908999ULL;
int var_2 = -828259167;
int var_4 = 159224040;
unsigned long long int var_6 = 4340952112930927843ULL;
unsigned long long int var_8 = 15349401955124774547ULL;
unsigned long long int var_9 = 786487008503321762ULL;
unsigned short var_10 = (unsigned short)53229;
unsigned long long int var_11 = 10801044184303338394ULL;
int zero = 0;
unsigned long long int var_12 = 83700417965358556ULL;
int var_13 = 2119756603;
int var_14 = -1637786797;
unsigned long long int var_15 = 17854455100115708442ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
